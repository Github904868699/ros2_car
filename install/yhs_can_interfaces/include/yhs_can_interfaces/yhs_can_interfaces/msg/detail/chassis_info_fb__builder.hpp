// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/chassis_info_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChassisInfoFb_ultrasonic
{
public:
  explicit Init_ChassisInfoFb_ultrasonic(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::ChassisInfoFb ultrasonic(::yhs_can_interfaces::msg::ChassisInfoFb::_ultrasonic_type arg)
  {
    msg_.ultrasonic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_error_fb
{
public:
  explicit Init_ChassisInfoFb_error_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_ultrasonic error_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_error_fb_type arg)
  {
    msg_.error_fb = std::move(arg);
    return Init_ChassisInfoFb_ultrasonic(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_steering_motor_current_fb
{
public:
  explicit Init_ChassisInfoFb_steering_motor_current_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_error_fb steering_motor_current_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_steering_motor_current_fb_type arg)
  {
    msg_.steering_motor_current_fb = std::move(arg);
    return Init_ChassisInfoFb_error_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_drive_motor_current_fb
{
public:
  explicit Init_ChassisInfoFb_drive_motor_current_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_steering_motor_current_fb drive_motor_current_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_drive_motor_current_fb_type arg)
  {
    msg_.drive_motor_current_fb = std::move(arg);
    return Init_ChassisInfoFb_steering_motor_current_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_bms_fb
{
public:
  explicit Init_ChassisInfoFb_bms_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_drive_motor_current_fb bms_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_bms_fb_type arg)
  {
    msg_.bms_fb = std::move(arg);
    return Init_ChassisInfoFb_drive_motor_current_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_bms_flag_fb
{
public:
  explicit Init_ChassisInfoFb_bms_flag_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_bms_fb bms_flag_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_bms_flag_fb_type arg)
  {
    msg_.bms_flag_fb = std::move(arg);
    return Init_ChassisInfoFb_bms_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_rear_angle_fb
{
public:
  explicit Init_ChassisInfoFb_rear_angle_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_bms_flag_fb rear_angle_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_rear_angle_fb_type arg)
  {
    msg_.rear_angle_fb = std::move(arg);
    return Init_ChassisInfoFb_bms_flag_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_front_angle_fb
{
public:
  explicit Init_ChassisInfoFb_front_angle_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_rear_angle_fb front_angle_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_front_angle_fb_type arg)
  {
    msg_.front_angle_fb = std::move(arg);
    return Init_ChassisInfoFb_rear_angle_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_rf_wheel_fb
{
public:
  explicit Init_ChassisInfoFb_rf_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_front_angle_fb rf_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_rf_wheel_fb_type arg)
  {
    msg_.rf_wheel_fb = std::move(arg);
    return Init_ChassisInfoFb_front_angle_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_lf_wheel_fb
{
public:
  explicit Init_ChassisInfoFb_lf_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_rf_wheel_fb lf_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_lf_wheel_fb_type arg)
  {
    msg_.lf_wheel_fb = std::move(arg);
    return Init_ChassisInfoFb_rf_wheel_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_rr_wheel_fb
{
public:
  explicit Init_ChassisInfoFb_rr_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_lf_wheel_fb rr_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_rr_wheel_fb_type arg)
  {
    msg_.rr_wheel_fb = std::move(arg);
    return Init_ChassisInfoFb_lf_wheel_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_lr_wheel_fb
{
public:
  explicit Init_ChassisInfoFb_lr_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_rr_wheel_fb lr_wheel_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_lr_wheel_fb_type arg)
  {
    msg_.lr_wheel_fb = std::move(arg);
    return Init_ChassisInfoFb_rr_wheel_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_motor_fb
{
public:
  explicit Init_ChassisInfoFb_motor_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_lr_wheel_fb motor_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_motor_fb_type arg)
  {
    msg_.motor_fb = std::move(arg);
    return Init_ChassisInfoFb_lr_wheel_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_io_fb
{
public:
  explicit Init_ChassisInfoFb_io_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_motor_fb io_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_io_fb_type arg)
  {
    msg_.io_fb = std::move(arg);
    return Init_ChassisInfoFb_motor_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_steering_ctrl_fb
{
public:
  explicit Init_ChassisInfoFb_steering_ctrl_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_io_fb steering_ctrl_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_steering_ctrl_fb_type arg)
  {
    msg_.steering_ctrl_fb = std::move(arg);
    return Init_ChassisInfoFb_io_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_ctrl_fb
{
public:
  explicit Init_ChassisInfoFb_ctrl_fb(::yhs_can_interfaces::msg::ChassisInfoFb & msg)
  : msg_(msg)
  {}
  Init_ChassisInfoFb_steering_ctrl_fb ctrl_fb(::yhs_can_interfaces::msg::ChassisInfoFb::_ctrl_fb_type arg)
  {
    msg_.ctrl_fb = std::move(arg);
    return Init_ChassisInfoFb_steering_ctrl_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

class Init_ChassisInfoFb_header
{
public:
  Init_ChassisInfoFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisInfoFb_ctrl_fb header(::yhs_can_interfaces::msg::ChassisInfoFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChassisInfoFb_ctrl_fb(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ChassisInfoFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::ChassisInfoFb>()
{
  return yhs_can_interfaces::msg::builder::Init_ChassisInfoFb_header();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__BUILDER_HPP_
