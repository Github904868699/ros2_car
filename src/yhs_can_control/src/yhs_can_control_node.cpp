#include "yhs_can_control/yhs_can_control_node.hpp"

namespace yhs
{
  std::vector<uint8_t> crc8_table;

  void generate_crc8_table() {
      crc8_table.resize(256);
      for (unsigned int i = 0; i < 256; ++i) {
          uint8_t crc = static_cast<uint8_t>(i);
          for (int j = 0; j < 8; ++j) {
              if (crc & 0x80) {
                  crc = static_cast<uint8_t>((crc << 1) ^ 0x07);
              } else {
                  crc <<= 1;
              }
          }
          crc8_table[i] = crc;
      }
  }


  CanControl::CanControl(rclcpp::Node::SharedPtr node)
      : node_(node), if_name_("can0"), can_socket_(-1), ctrl_fb_gear_(0)
  {
    generate_crc8_table();
    READ_PARAM(std::string, "can_name", (if_name_), "can0");

    ctrl_cmd_subscriber_ = node_->create_subscription<yhs_can_interfaces::msg::CtrlCmd>(
        "ctrl_cmd",
        1,
        std::bind(&CanControl::ctrl_cmd_callback, this, std::placeholders::_1));

    steering_ctrl_cmd_subscriber_ = node_->create_subscription<yhs_can_interfaces::msg::SteeringCtrlCmd>(
        "steering_ctrl_cmd",
        1,
        std::bind(&CanControl::steering_ctrl_cmd_callback, this, std::placeholders::_1));

    chassis_info_fb_publisher_ = node_->create_publisher<yhs_can_interfaces::msg::ChassisInfoFb>("chassis_info_fb", 1);

    odom_pub_ = node_->create_publisher<nav_msgs::msg::Odometry>("odom", 1);
  }

  uint8_t CanControl::calculate_crc8(const std::string& data) {
    uint8_t crc = 0;
    for (char c : data) {
        crc = crc8_table[crc ^ static_cast<uint8_t>(c)];
    }
    return crc;
}

  bool CanControl::parse_CRC8(std::string& data)
  {
      uint8_t crc_value = calculate_crc8(data.substr(0, data.size() - 1));
      uint8_t crc_data = data.back();
      if (crc_value != crc_data) {
          // printf("error: %02X %02X\n", crc_value, crc_data);
          // printHexString(data);
          return false;
      }
      return true;
  }

  void CanControl::ctrl_cmd_callback(const yhs_can_interfaces::msg::CtrlCmd::SharedPtr ctrl_cmd_msg)
  {
    yhs_can_interfaces::msg::CtrlCmd msg = *ctrl_cmd_msg;
    const short ctrl_cmd_x_linear = msg.ctrl_cmd_x_linear * 1000;
    const short ctrl_cmd_z_angular = msg.ctrl_cmd_z_angular * 100;
    const short ctrl_cmd_y_linear = msg.ctrl_cmd_y_linear * 1000;
    const unsigned char gear = msg.ctrl_cmd_gear;

    static unsigned char count = 0;
    unsigned char sendDataTemp[8] = {0};

    sendDataTemp[0] = sendDataTemp[0] | (0x0f & gear);

    sendDataTemp[0] = sendDataTemp[0] | (0xf0 & ((ctrl_cmd_x_linear & 0x0f) << 4));

    sendDataTemp[1] = (ctrl_cmd_x_linear >> 4) & 0xff;

    sendDataTemp[2] = sendDataTemp[2] | (0x0f & (ctrl_cmd_x_linear >> 12));

    sendDataTemp[2] = sendDataTemp[2] | (0xf0 & ((ctrl_cmd_z_angular & 0x0f) << 4));

    sendDataTemp[3] = (ctrl_cmd_z_angular >> 4) & 0xff;

    sendDataTemp[4] = sendDataTemp[4] | (0x0f & (ctrl_cmd_z_angular >> 12));

    sendDataTemp[4] = sendDataTemp[4] | (0xf0 & ((ctrl_cmd_y_linear & 0x0f) << 4));

    sendDataTemp[5] = (ctrl_cmd_y_linear >> 4) & 0xff;

    sendDataTemp[6] = sendDataTemp[6] | (0x0f & (ctrl_cmd_y_linear >> 12));

    count++;

    if (count == 16)
      count = 0;

    sendDataTemp[6] = sendDataTemp[6] | (count << 4);

    sendDataTemp[7] = sendDataTemp[0] ^ sendDataTemp[1] ^ sendDataTemp[2] ^ sendDataTemp[3] ^ sendDataTemp[4] ^ sendDataTemp[5] ^ sendDataTemp[6];

    can_frame send_frame;

    send_frame.can_id = 0x98C4D1D0;
    send_frame.can_dlc = 8;

    memcpy(send_frame.data, sendDataTemp, 8);

    int ret = write(can_socket_, &send_frame, sizeof(send_frame));
    if (ret <= 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Failed to send message: " << strerror(errno));
    }
  }

  //控制车角度（单位：弧度）和轮子转速（单位：RPM）
  // 角度算法（左负右正）
  // 弧度 = 角度 / 180 * 3.14
  // 角度范围  -30 ~30   控制值 -3000 ~ 3000    
  // 输入值 = 弧度 * 10  = 角度 / 180 * 3.14 * 10   范围-5.2 ~ 5.2
  // 控制值 =  角度 * 100 = 弧度 / 3.14 * 180 * 100
  // 弧度 = 输入值 / 10 
  // 控制值 = 输入值 / 10 / 3.14 * 180 * 100

  // 速度算法
  // 转速：范围-240~240单位RPM（转/每分钟）  
  // 输入值 = 转速 * 10 / 400  ( -6 ~ 6)
  // 转速 = 输入值 * 400 / 10 

  void CanControl::steering_ctrl_cmd_callback(const yhs_can_interfaces::msg::SteeringCtrlCmd::SharedPtr steering_ctrl_cmd_msg)
  {
    yhs_can_interfaces::msg::SteeringCtrlCmd msg = *steering_ctrl_cmd_msg;

    const short steering_ctrl_cmd_velocity = msg.steering_ctrl_cmd_velocity * 400 / 10 ;  //输入范围：-6 ~ 6  控制范围：-240 ~ 240
    const short steering_ctrl_cmd_steering = msg.steering_ctrl_cmd_steering / 10 / 3.14 * 180 *100 ;  //输入范围：-5.2 ~ 5.2 控制范围：-3000 ~ 3000

   // 速度控制
    unsigned char sendDataVelocity[8] = {0};

    sendDataVelocity[0] = 0x01;

    sendDataVelocity[2] = steering_ctrl_cmd_velocity & 0xFF;;

    sendDataVelocity[3] = ( steering_ctrl_cmd_velocity >> 8 ) & 0xFF;
    uint8_t crc = 0;
    for (int i = 0; i < 7; i++) {
        crc = crc8_table[crc ^ sendDataVelocity[i]];
    }

    sendDataVelocity[7] = crc;
    
    can_frame send_frame;
    send_frame.can_id = 0x11;   //直线控制
    send_frame.can_dlc = 8;

    memcpy(send_frame.data, sendDataVelocity, 8);

    int ret = write(can_socket_, &send_frame, sizeof(send_frame));
    if (ret <= 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Failed to send message: " << strerror(errno));

      return ;
    }

    // 角度控制
    unsigned char sendDataSteering[8] = {0};

    sendDataSteering[0] = 0x01;   // 0x01 两轮阿克曼    0x02   四轮阿克曼

    sendDataSteering[1] = 0x00;   // 转向控制 推荐12 = 00 0C

    sendDataSteering[2] = 0x0C;

    sendDataSteering[3] = steering_ctrl_cmd_steering & 0xFF;;

    sendDataSteering[4] = ( steering_ctrl_cmd_steering >> 8 ) & 0xFF;

    crc = 0;
    for (int i = 0; i < 7; i++) {
        crc = crc8_table[crc ^ sendDataSteering[i]];
    }

    sendDataSteering[7] = crc;
    
    //can_frame send_frame;
    send_frame.can_id = 0x12;  //角度控制
    send_frame.can_dlc = 8;

    memcpy(send_frame.data, sendDataSteering, 8);

    ret = write(can_socket_, &send_frame, sizeof(send_frame));
    if (ret <= 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Failed to send message: " << strerror(errno));
    }
  }

  bool CanControl::wait_for_can_frame()
  {
    struct timeval tv;
    fd_set rdfs;
    FD_ZERO(&rdfs);
    FD_SET(can_socket_, &rdfs);
    tv.tv_sec = 0;
    tv.tv_usec = 500000; // 10ms

    int ret = select(can_socket_ + 1, &rdfs, NULL, NULL, &tv);
    if (ret == -1)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Error waiting for CAN frame: " << std::strerror(errno));
      return false;
    }
    else if (ret == 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Timeout waiting for CAN frame! Please check whether the can0 setting is correct,\
whether the can line is connected correctly, and whether the chassis is powered on.");
      return false;
    }
    else
    {
      return true;
    }
    return false;
  }

  void CanControl::can_data_recv_callback()
  {
    can_frame recv_frame;
    yhs_can_interfaces::msg::ChassisInfoFb chassis_info_msg;

    while (rclcpp::ok())
    {
      if (!wait_for_can_frame())
        continue;

      if (read(can_socket_, &recv_frame, sizeof(recv_frame)) >= 0)
      {
        RCLCPP_INFO(node_->get_logger(), "Raw Data: %02X %02X %02X %02X %02X %02X %02X %02X",
		       	recv_frame.data[0], recv_frame.data[1],	
			recv_frame.data[2], recv_frame.data[3],
	                recv_frame.data[4], recv_frame.data[5],
			recv_frame.data[6], recv_frame.data[7]);
	
        std::string data_str(reinterpret_cast<char*>(recv_frame.data), 8);

        if (!parse_CRC8(data_str)) continue;

        switch (recv_frame.can_id)
        {
        case 0x98C4D1EF:
        {
          yhs_can_interfaces::msg::CtrlFb msg;
          msg.ctrl_fb_gear = 0x0f & recv_frame.data[0];
          ctrl_fb_gear_ = msg.ctrl_fb_gear;

          msg.ctrl_fb_x_linear = static_cast<float>(static_cast<short>((recv_frame.data[2] & 0x0f) << 12 | recv_frame.data[1] << 4 | (recv_frame.data[0] & 0xf0) >> 4)) / 1000;

          msg.ctrl_fb_z_angular = static_cast<float>(static_cast<short>((recv_frame.data[4] & 0x0f) << 12 | recv_frame.data[3] << 4 | (recv_frame.data[2] & 0xf0) >> 4)) / 100;

          msg.ctrl_fb_y_linear = static_cast<float>(static_cast<short>((recv_frame.data[6] & 0x0f) << 12 | recv_frame.data[5] << 4 | (recv_frame.data[4] & 0xf0) >> 4)) / 100;

          unsigned char crc = recv_frame.data[0] ^ recv_frame.data[1] ^ recv_frame.data[2] ^ recv_frame.data[3] ^ recv_frame.data[4] ^ recv_frame.data[5] ^ recv_frame.data[6];

          if (crc == recv_frame.data[7])
          {
            //chassis_info_msg.header.stamp = node_->get_clock()->now();
            chassis_info_msg.ctrl_fb = msg;
            //chassis_info_fb_publisher_->publish(chassis_info_msg);
            //publish_odom(msg.ctrl_fb_x_linear, msg.ctrl_fb_z_angular / 180 * 3.14);
          }

          break;
        }

        case 0x11:
        {
          yhs_can_interfaces::msg::SteeringCtrlFb msg;
          msg.steering_ctrl_fb_gear = ctrl_fb_gear_;

          msg.steering_ctrl_fb_rfspeed = static_cast<float>(static_cast<short>(recv_frame.data[1] << 8 | recv_frame.data[0])) / 10;

          msg.steering_ctrl_fb_lrspeed = static_cast<float>(static_cast<short>(recv_frame.data[3] << 8 | recv_frame.data[2])) / 10;

          msg.steering_ctrl_fb_steering = static_cast<float>(static_cast<short>(recv_frame.data[5]  << 8 | recv_frame.data[4])) / 10;

          chassis_info_msg.header.stamp = node_->get_clock()->now();
          chassis_info_msg.steering_ctrl_fb = msg;
          chassis_info_fb_publisher_->publish(chassis_info_msg);
          publish_odom(msg.steering_ctrl_fb_lrspeed, msg.steering_ctrl_fb_steering / 180 * 3.14);

          break;
        }

        default:
          break;
        }
      }
    }
  }

  void CanControl::publish_odom(const double steering_ctrl_fb_lrspeed, const double steering_ctrl_fb_steering)
  {
    //线速度
    double lr_linear_vel = steering_ctrl_fb_lrspeed * 2 * 3.14 * 7.5 / 100 / 60;    //半径7.5cm
    if (ctrl_fb_gear_ == 2) {
      lr_linear_vel = -lr_linear_vel;
    }
    double linear_vel = lr_linear_vel;
    //角速度，底板给的数据是左负右正，ROS的坐标系采用右手定则，为左正右负
    double angular_vel = linear_vel * std::tan(steering_ctrl_fb_steering * -1) / 0.5;   //中心点轴距0.5m

    //世界地图X坐标
    static double x_ = 0.0;
    //世界地图y坐标
    static double y_ = 0.0;
    //世界地图航向角，底板给的数据是左负右正，ROS的坐标系采用右手定则，为左正右负
    static double theta_ = 0.0;
    static rclcpp::Time last_time_ = node_->now();

    rclcpp::Time current_time = node_->now();

    double dt = (current_time - last_time_).seconds();

    x_ += linear_vel * cos(theta_) * dt;
    y_ += linear_vel * sin(theta_) * dt;
    theta_ += angular_vel * dt;

    nav_msgs::msg::Odometry odom_msg;
    odom_msg.header.stamp = current_time;
    odom_msg.header.frame_id = "odom";
    odom_msg.child_frame_id = "base_link";

    geometry_msgs::msg::PoseWithCovariance pose_cov;
    pose_cov.pose.position.x = x_;
    pose_cov.pose.position.y = y_;
    pose_cov.pose.position.z = 0.0;
    tf2::Quaternion quat;
    quat.setRPY(0.0, 0.0, theta_);
    pose_cov.pose.orientation.x = quat.x();
    pose_cov.pose.orientation.y = quat.y();
    pose_cov.pose.orientation.z = quat.z();
    pose_cov.pose.orientation.w = quat.w();
    odom_msg.pose = pose_cov;

    geometry_msgs::msg::TwistWithCovariance twist_cov;
    twist_cov.twist.linear.x = linear_vel;
    twist_cov.twist.linear.y = 0.0;
    twist_cov.twist.linear.z = 0.0;
    twist_cov.twist.angular.x = 0.0;
    twist_cov.twist.angular.y = 0.0;
    twist_cov.twist.angular.z = angular_vel;
    odom_msg.twist = twist_cov;

    odom_pub_->publish(odom_msg);

    last_time_ = current_time;
  }

  CanControl::~CanControl()
  {
  }

  bool CanControl::run()
  {
    can_socket_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (can_socket_ < 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Failed to open socket: " << strerror(errno));
      return false;
    }

    struct ifreq ifr;
    strncpy(ifr.ifr_name, if_name_.c_str(), IFNAMSIZ - 1);
    ifr.ifr_name[IFNAMSIZ - 1] = '\0';
    if (ioctl(can_socket_, SIOCGIFINDEX, &ifr) < 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Failed to get interface index: " << strerror(errno) << " ==> " << if_name_.c_str());
      return false;
    }

    struct sockaddr_can addr;
    memset(&addr, 0, sizeof(addr));
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(can_socket_, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
      RCLCPP_ERROR_STREAM(rclcpp::get_logger("yhs_can_control_node"), "Failed to bind socket: " << strerror(errno));
      return false;
    }

    thread_ = std::thread(&CanControl::can_data_recv_callback, this);

    return true;
  }

  void CanControl::stop()
  {
    if (can_socket_ >= 0)
    {
      close(can_socket_);
      can_socket_ = -1;
    }

    if (thread_.joinable())
    {
      thread_.join();
    }
  }
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("yhs_can_control_node");

  yhs::CanControl cancontrol(node);
  if (!cancontrol.run())
  {
    RCLCPP_ERROR(node->get_logger(), "Failed to initialize yhs_can_control_node");
    return 0;
  }

  RCLCPP_INFO(node->get_logger(), "yhs_can_control_node initialized successfully");

  rclcpp::spin(node);

  cancontrol.stop();
  RCLCPP_INFO(node->get_logger(), "yhs_can_control_node stopped");

  rclcpp::shutdown();

  return 0;
}
