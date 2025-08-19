// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/ultrasonic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_Ultrasonic_right_rear
{
public:
  explicit Init_Ultrasonic_right_rear(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::Ultrasonic right_rear(::yhs_can_interfaces::msg::Ultrasonic::_right_rear_type arg)
  {
    msg_.right_rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_right_front
{
public:
  explicit Init_Ultrasonic_right_front(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  Init_Ultrasonic_right_rear right_front(::yhs_can_interfaces::msg::Ultrasonic::_right_front_type arg)
  {
    msg_.right_front = std::move(arg);
    return Init_Ultrasonic_right_rear(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_left_rear
{
public:
  explicit Init_Ultrasonic_left_rear(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  Init_Ultrasonic_right_front left_rear(::yhs_can_interfaces::msg::Ultrasonic::_left_rear_type arg)
  {
    msg_.left_rear = std::move(arg);
    return Init_Ultrasonic_right_front(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_left_front
{
public:
  explicit Init_Ultrasonic_left_front(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  Init_Ultrasonic_left_rear left_front(::yhs_can_interfaces::msg::Ultrasonic::_left_front_type arg)
  {
    msg_.left_front = std::move(arg);
    return Init_Ultrasonic_left_rear(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_rear_right
{
public:
  explicit Init_Ultrasonic_rear_right(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  Init_Ultrasonic_left_front rear_right(::yhs_can_interfaces::msg::Ultrasonic::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return Init_Ultrasonic_left_front(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_rear_left
{
public:
  explicit Init_Ultrasonic_rear_left(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  Init_Ultrasonic_rear_right rear_left(::yhs_can_interfaces::msg::Ultrasonic::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_Ultrasonic_rear_right(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_front_right
{
public:
  explicit Init_Ultrasonic_front_right(::yhs_can_interfaces::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  Init_Ultrasonic_rear_left front_right(::yhs_can_interfaces::msg::Ultrasonic::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_Ultrasonic_rear_left(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_front_left
{
public:
  Init_Ultrasonic_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ultrasonic_front_right front_left(::yhs_can_interfaces::msg::Ultrasonic::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_Ultrasonic_front_right(msg_);
  }

private:
  ::yhs_can_interfaces::msg::Ultrasonic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::Ultrasonic>()
{
  return yhs_can_interfaces::msg::builder::Init_Ultrasonic_front_left();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_
