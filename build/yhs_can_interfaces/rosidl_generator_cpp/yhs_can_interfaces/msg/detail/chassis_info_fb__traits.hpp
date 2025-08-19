// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__TRAITS_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yhs_can_interfaces/msg/detail/chassis_info_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ctrl_fb'
#include "yhs_can_interfaces/msg/detail/ctrl_fb__traits.hpp"
// Member 'steering_ctrl_fb'
#include "yhs_can_interfaces/msg/detail/steering_ctrl_fb__traits.hpp"
// Member 'io_fb'
#include "yhs_can_interfaces/msg/detail/io_fb__traits.hpp"
// Member 'motor_fb'
#include "yhs_can_interfaces/msg/detail/motor_fb__traits.hpp"
// Member 'lr_wheel_fb'
#include "yhs_can_interfaces/msg/detail/lr_wheel_fb__traits.hpp"
// Member 'rr_wheel_fb'
#include "yhs_can_interfaces/msg/detail/rr_wheel_fb__traits.hpp"
// Member 'lf_wheel_fb'
#include "yhs_can_interfaces/msg/detail/lf_wheel_fb__traits.hpp"
// Member 'rf_wheel_fb'
#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__traits.hpp"
// Member 'front_angle_fb'
#include "yhs_can_interfaces/msg/detail/front_angle_fb__traits.hpp"
// Member 'rear_angle_fb'
#include "yhs_can_interfaces/msg/detail/rear_angle_fb__traits.hpp"
// Member 'bms_flag_fb'
#include "yhs_can_interfaces/msg/detail/bms_flag_fb__traits.hpp"
// Member 'bms_fb'
#include "yhs_can_interfaces/msg/detail/bms_fb__traits.hpp"
// Member 'drive_motor_current_fb'
#include "yhs_can_interfaces/msg/detail/drive_motor_current_fb__traits.hpp"
// Member 'steering_motor_current_fb'
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__traits.hpp"
// Member 'error_fb'
#include "yhs_can_interfaces/msg/detail/error_fb__traits.hpp"
// Member 'ultrasonic'
#include "yhs_can_interfaces/msg/detail/ultrasonic__traits.hpp"

namespace yhs_can_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisInfoFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ctrl_fb
  {
    out << "ctrl_fb: ";
    to_flow_style_yaml(msg.ctrl_fb, out);
    out << ", ";
  }

  // member: steering_ctrl_fb
  {
    out << "steering_ctrl_fb: ";
    to_flow_style_yaml(msg.steering_ctrl_fb, out);
    out << ", ";
  }

  // member: io_fb
  {
    out << "io_fb: ";
    to_flow_style_yaml(msg.io_fb, out);
    out << ", ";
  }

  // member: motor_fb
  {
    out << "motor_fb: ";
    to_flow_style_yaml(msg.motor_fb, out);
    out << ", ";
  }

  // member: lr_wheel_fb
  {
    out << "lr_wheel_fb: ";
    to_flow_style_yaml(msg.lr_wheel_fb, out);
    out << ", ";
  }

  // member: rr_wheel_fb
  {
    out << "rr_wheel_fb: ";
    to_flow_style_yaml(msg.rr_wheel_fb, out);
    out << ", ";
  }

  // member: lf_wheel_fb
  {
    out << "lf_wheel_fb: ";
    to_flow_style_yaml(msg.lf_wheel_fb, out);
    out << ", ";
  }

  // member: rf_wheel_fb
  {
    out << "rf_wheel_fb: ";
    to_flow_style_yaml(msg.rf_wheel_fb, out);
    out << ", ";
  }

  // member: front_angle_fb
  {
    out << "front_angle_fb: ";
    to_flow_style_yaml(msg.front_angle_fb, out);
    out << ", ";
  }

  // member: rear_angle_fb
  {
    out << "rear_angle_fb: ";
    to_flow_style_yaml(msg.rear_angle_fb, out);
    out << ", ";
  }

  // member: bms_flag_fb
  {
    out << "bms_flag_fb: ";
    to_flow_style_yaml(msg.bms_flag_fb, out);
    out << ", ";
  }

  // member: bms_fb
  {
    out << "bms_fb: ";
    to_flow_style_yaml(msg.bms_fb, out);
    out << ", ";
  }

  // member: drive_motor_current_fb
  {
    out << "drive_motor_current_fb: ";
    to_flow_style_yaml(msg.drive_motor_current_fb, out);
    out << ", ";
  }

  // member: steering_motor_current_fb
  {
    out << "steering_motor_current_fb: ";
    to_flow_style_yaml(msg.steering_motor_current_fb, out);
    out << ", ";
  }

  // member: error_fb
  {
    out << "error_fb: ";
    to_flow_style_yaml(msg.error_fb, out);
    out << ", ";
  }

  // member: ultrasonic
  {
    out << "ultrasonic: ";
    to_flow_style_yaml(msg.ultrasonic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisInfoFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ctrl_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_fb:\n";
    to_block_style_yaml(msg.ctrl_fb, out, indentation + 2);
  }

  // member: steering_ctrl_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_ctrl_fb:\n";
    to_block_style_yaml(msg.steering_ctrl_fb, out, indentation + 2);
  }

  // member: io_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb:\n";
    to_block_style_yaml(msg.io_fb, out, indentation + 2);
  }

  // member: motor_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_fb:\n";
    to_block_style_yaml(msg.motor_fb, out, indentation + 2);
  }

  // member: lr_wheel_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_wheel_fb:\n";
    to_block_style_yaml(msg.lr_wheel_fb, out, indentation + 2);
  }

  // member: rr_wheel_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_wheel_fb:\n";
    to_block_style_yaml(msg.rr_wheel_fb, out, indentation + 2);
  }

  // member: lf_wheel_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lf_wheel_fb:\n";
    to_block_style_yaml(msg.lf_wheel_fb, out, indentation + 2);
  }

  // member: rf_wheel_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rf_wheel_fb:\n";
    to_block_style_yaml(msg.rf_wheel_fb, out, indentation + 2);
  }

  // member: front_angle_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_angle_fb:\n";
    to_block_style_yaml(msg.front_angle_fb, out, indentation + 2);
  }

  // member: rear_angle_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_angle_fb:\n";
    to_block_style_yaml(msg.rear_angle_fb, out, indentation + 2);
  }

  // member: bms_flag_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_flag_fb:\n";
    to_block_style_yaml(msg.bms_flag_fb, out, indentation + 2);
  }

  // member: bms_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_fb:\n";
    to_block_style_yaml(msg.bms_fb, out, indentation + 2);
  }

  // member: drive_motor_current_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_motor_current_fb:\n";
    to_block_style_yaml(msg.drive_motor_current_fb, out, indentation + 2);
  }

  // member: steering_motor_current_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_motor_current_fb:\n";
    to_block_style_yaml(msg.steering_motor_current_fb, out, indentation + 2);
  }

  // member: error_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_fb:\n";
    to_block_style_yaml(msg.error_fb, out, indentation + 2);
  }

  // member: ultrasonic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic:\n";
    to_block_style_yaml(msg.ultrasonic, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisInfoFb & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yhs_can_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use yhs_can_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yhs_can_interfaces::msg::ChassisInfoFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  yhs_can_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yhs_can_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yhs_can_interfaces::msg::ChassisInfoFb & msg)
{
  return yhs_can_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yhs_can_interfaces::msg::ChassisInfoFb>()
{
  return "yhs_can_interfaces::msg::ChassisInfoFb";
}

template<>
inline const char * name<yhs_can_interfaces::msg::ChassisInfoFb>()
{
  return "yhs_can_interfaces/msg/ChassisInfoFb";
}

template<>
struct has_fixed_size<yhs_can_interfaces::msg::ChassisInfoFb>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<yhs_can_interfaces::msg::BmsFb>::value && has_fixed_size<yhs_can_interfaces::msg::BmsFlagFb>::value && has_fixed_size<yhs_can_interfaces::msg::CtrlFb>::value && has_fixed_size<yhs_can_interfaces::msg::DriveMotorCurrentFb>::value && has_fixed_size<yhs_can_interfaces::msg::ErrorFb>::value && has_fixed_size<yhs_can_interfaces::msg::FrontAngleFb>::value && has_fixed_size<yhs_can_interfaces::msg::IoFb>::value && has_fixed_size<yhs_can_interfaces::msg::LfWheelFb>::value && has_fixed_size<yhs_can_interfaces::msg::LrWheelFb>::value && has_fixed_size<yhs_can_interfaces::msg::MotorFb>::value && has_fixed_size<yhs_can_interfaces::msg::RearAngleFb>::value && has_fixed_size<yhs_can_interfaces::msg::RfWheelFb>::value && has_fixed_size<yhs_can_interfaces::msg::RrWheelFb>::value && has_fixed_size<yhs_can_interfaces::msg::SteeringCtrlFb>::value && has_fixed_size<yhs_can_interfaces::msg::SteeringMotorCurrentFb>::value && has_fixed_size<yhs_can_interfaces::msg::Ultrasonic>::value> {};

template<>
struct has_bounded_size<yhs_can_interfaces::msg::ChassisInfoFb>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<yhs_can_interfaces::msg::BmsFb>::value && has_bounded_size<yhs_can_interfaces::msg::BmsFlagFb>::value && has_bounded_size<yhs_can_interfaces::msg::CtrlFb>::value && has_bounded_size<yhs_can_interfaces::msg::DriveMotorCurrentFb>::value && has_bounded_size<yhs_can_interfaces::msg::ErrorFb>::value && has_bounded_size<yhs_can_interfaces::msg::FrontAngleFb>::value && has_bounded_size<yhs_can_interfaces::msg::IoFb>::value && has_bounded_size<yhs_can_interfaces::msg::LfWheelFb>::value && has_bounded_size<yhs_can_interfaces::msg::LrWheelFb>::value && has_bounded_size<yhs_can_interfaces::msg::MotorFb>::value && has_bounded_size<yhs_can_interfaces::msg::RearAngleFb>::value && has_bounded_size<yhs_can_interfaces::msg::RfWheelFb>::value && has_bounded_size<yhs_can_interfaces::msg::RrWheelFb>::value && has_bounded_size<yhs_can_interfaces::msg::SteeringCtrlFb>::value && has_bounded_size<yhs_can_interfaces::msg::SteeringMotorCurrentFb>::value && has_bounded_size<yhs_can_interfaces::msg::Ultrasonic>::value> {};

template<>
struct is_message<yhs_can_interfaces::msg::ChassisInfoFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__TRAITS_HPP_
