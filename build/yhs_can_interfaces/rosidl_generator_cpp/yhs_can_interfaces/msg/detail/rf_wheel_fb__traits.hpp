// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yhs_can_interfaces:msg/RfWheelFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__TRAITS_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yhs_can_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RfWheelFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: rf_wheel_fb_velocity
  {
    out << "rf_wheel_fb_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_wheel_fb_velocity, out);
    out << ", ";
  }

  // member: rf_wheel_fb_pulse
  {
    out << "rf_wheel_fb_pulse: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_wheel_fb_pulse, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RfWheelFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rf_wheel_fb_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rf_wheel_fb_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_wheel_fb_velocity, out);
    out << "\n";
  }

  // member: rf_wheel_fb_pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rf_wheel_fb_pulse: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_wheel_fb_pulse, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RfWheelFb & msg, bool use_flow_style = false)
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
  const yhs_can_interfaces::msg::RfWheelFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  yhs_can_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yhs_can_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yhs_can_interfaces::msg::RfWheelFb & msg)
{
  return yhs_can_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yhs_can_interfaces::msg::RfWheelFb>()
{
  return "yhs_can_interfaces::msg::RfWheelFb";
}

template<>
inline const char * name<yhs_can_interfaces::msg::RfWheelFb>()
{
  return "yhs_can_interfaces/msg/RfWheelFb";
}

template<>
struct has_fixed_size<yhs_can_interfaces::msg::RfWheelFb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yhs_can_interfaces::msg::RfWheelFb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yhs_can_interfaces::msg::RfWheelFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__TRAITS_HPP_
