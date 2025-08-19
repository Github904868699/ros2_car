// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yhs_can_interfaces:msg/MotorFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_FB__TRAITS_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yhs_can_interfaces/msg/detail/motor_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yhs_can_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_cmd_drive_enable_lf
  {
    out << "motor_cmd_drive_enable_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_lf, out);
    out << ", ";
  }

  // member: motor_cmd_drive_enable_lr
  {
    out << "motor_cmd_drive_enable_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_lr, out);
    out << ", ";
  }

  // member: motor_cmd_drive_enable_rf
  {
    out << "motor_cmd_drive_enable_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_rf, out);
    out << ", ";
  }

  // member: motor_cmd_drive_enable_rr
  {
    out << "motor_cmd_drive_enable_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_rr, out);
    out << ", ";
  }

  // member: motor_cmd_steering_enable_lf
  {
    out << "motor_cmd_steering_enable_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_lf, out);
    out << ", ";
  }

  // member: motor_cmd_steering_enable_lr
  {
    out << "motor_cmd_steering_enable_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_lr, out);
    out << ", ";
  }

  // member: motor_cmd_steering_enable_rf
  {
    out << "motor_cmd_steering_enable_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_rf, out);
    out << ", ";
  }

  // member: motor_cmd_steering_enable_rr
  {
    out << "motor_cmd_steering_enable_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_rr, out);
    out << ", ";
  }

  // member: motor_cmd_power_restart
  {
    out << "motor_cmd_power_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_power_restart, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_cmd_drive_enable_lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_drive_enable_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_lf, out);
    out << "\n";
  }

  // member: motor_cmd_drive_enable_lr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_drive_enable_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_lr, out);
    out << "\n";
  }

  // member: motor_cmd_drive_enable_rf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_drive_enable_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_rf, out);
    out << "\n";
  }

  // member: motor_cmd_drive_enable_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_drive_enable_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_drive_enable_rr, out);
    out << "\n";
  }

  // member: motor_cmd_steering_enable_lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_steering_enable_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_lf, out);
    out << "\n";
  }

  // member: motor_cmd_steering_enable_lr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_steering_enable_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_lr, out);
    out << "\n";
  }

  // member: motor_cmd_steering_enable_rf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_steering_enable_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_rf, out);
    out << "\n";
  }

  // member: motor_cmd_steering_enable_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_steering_enable_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_steering_enable_rr, out);
    out << "\n";
  }

  // member: motor_cmd_power_restart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd_power_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_cmd_power_restart, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorFb & msg, bool use_flow_style = false)
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
  const yhs_can_interfaces::msg::MotorFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  yhs_can_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yhs_can_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yhs_can_interfaces::msg::MotorFb & msg)
{
  return yhs_can_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yhs_can_interfaces::msg::MotorFb>()
{
  return "yhs_can_interfaces::msg::MotorFb";
}

template<>
inline const char * name<yhs_can_interfaces::msg::MotorFb>()
{
  return "yhs_can_interfaces/msg/MotorFb";
}

template<>
struct has_fixed_size<yhs_can_interfaces::msg::MotorFb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yhs_can_interfaces::msg::MotorFb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yhs_can_interfaces::msg::MotorFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_FB__TRAITS_HPP_
