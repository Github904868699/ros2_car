// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yhs_can_interfaces:msg/ErrorFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__TRAITS_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yhs_can_interfaces/msg/detail/error_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yhs_can_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_fb_level
  {
    out << "error_fb_level: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_level, out);
    out << ", ";
  }

  // member: error_fb_device_type
  {
    out << "error_fb_device_type: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_device_type, out);
    out << ", ";
  }

  // member: error_fb_devive_id
  {
    out << "error_fb_devive_id: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_devive_id, out);
    out << ", ";
  }

  // member: error_fb_emergency_code
  {
    out << "error_fb_emergency_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_emergency_code, out);
    out << ", ";
  }

  // member: error_fb_register_code
  {
    out << "error_fb_register_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_register_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ErrorFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_fb_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_fb_level: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_level, out);
    out << "\n";
  }

  // member: error_fb_device_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_fb_device_type: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_device_type, out);
    out << "\n";
  }

  // member: error_fb_devive_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_fb_devive_id: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_devive_id, out);
    out << "\n";
  }

  // member: error_fb_emergency_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_fb_emergency_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_emergency_code, out);
    out << "\n";
  }

  // member: error_fb_register_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_fb_register_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_fb_register_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorFb & msg, bool use_flow_style = false)
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
  const yhs_can_interfaces::msg::ErrorFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  yhs_can_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yhs_can_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yhs_can_interfaces::msg::ErrorFb & msg)
{
  return yhs_can_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yhs_can_interfaces::msg::ErrorFb>()
{
  return "yhs_can_interfaces::msg::ErrorFb";
}

template<>
inline const char * name<yhs_can_interfaces::msg::ErrorFb>()
{
  return "yhs_can_interfaces/msg/ErrorFb";
}

template<>
struct has_fixed_size<yhs_can_interfaces::msg::ErrorFb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yhs_can_interfaces::msg::ErrorFb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yhs_can_interfaces::msg::ErrorFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__TRAITS_HPP_
