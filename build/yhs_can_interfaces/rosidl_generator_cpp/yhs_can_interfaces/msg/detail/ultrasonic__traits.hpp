// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__TRAITS_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yhs_can_interfaces/msg/detail/ultrasonic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yhs_can_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ultrasonic & msg,
  std::ostream & out)
{
  out << "{";
  // member: front_left
  {
    out << "front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left, out);
    out << ", ";
  }

  // member: front_right
  {
    out << "front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right, out);
    out << ", ";
  }

  // member: rear_left
  {
    out << "rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left, out);
    out << ", ";
  }

  // member: rear_right
  {
    out << "rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right, out);
    out << ", ";
  }

  // member: left_front
  {
    out << "left_front: ";
    rosidl_generator_traits::value_to_yaml(msg.left_front, out);
    out << ", ";
  }

  // member: left_rear
  {
    out << "left_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rear, out);
    out << ", ";
  }

  // member: right_front
  {
    out << "right_front: ";
    rosidl_generator_traits::value_to_yaml(msg.right_front, out);
    out << ", ";
  }

  // member: right_rear
  {
    out << "right_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ultrasonic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left, out);
    out << "\n";
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right, out);
    out << "\n";
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left, out);
    out << "\n";
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right, out);
    out << "\n";
  }

  // member: left_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_front: ";
    rosidl_generator_traits::value_to_yaml(msg.left_front, out);
    out << "\n";
  }

  // member: left_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rear, out);
    out << "\n";
  }

  // member: right_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_front: ";
    rosidl_generator_traits::value_to_yaml(msg.right_front, out);
    out << "\n";
  }

  // member: right_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ultrasonic & msg, bool use_flow_style = false)
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
  const yhs_can_interfaces::msg::Ultrasonic & msg,
  std::ostream & out, size_t indentation = 0)
{
  yhs_can_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yhs_can_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yhs_can_interfaces::msg::Ultrasonic & msg)
{
  return yhs_can_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yhs_can_interfaces::msg::Ultrasonic>()
{
  return "yhs_can_interfaces::msg::Ultrasonic";
}

template<>
inline const char * name<yhs_can_interfaces::msg::Ultrasonic>()
{
  return "yhs_can_interfaces/msg/Ultrasonic";
}

template<>
struct has_fixed_size<yhs_can_interfaces::msg::Ultrasonic>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yhs_can_interfaces::msg::Ultrasonic>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yhs_can_interfaces::msg::Ultrasonic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__TRAITS_HPP_
