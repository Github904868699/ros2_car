// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/ErrorFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/error_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_ErrorFb_error_fb_register_code
{
public:
  explicit Init_ErrorFb_error_fb_register_code(::yhs_can_interfaces::msg::ErrorFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::ErrorFb error_fb_register_code(::yhs_can_interfaces::msg::ErrorFb::_error_fb_register_code_type arg)
  {
    msg_.error_fb_register_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ErrorFb msg_;
};

class Init_ErrorFb_error_fb_emergency_code
{
public:
  explicit Init_ErrorFb_error_fb_emergency_code(::yhs_can_interfaces::msg::ErrorFb & msg)
  : msg_(msg)
  {}
  Init_ErrorFb_error_fb_register_code error_fb_emergency_code(::yhs_can_interfaces::msg::ErrorFb::_error_fb_emergency_code_type arg)
  {
    msg_.error_fb_emergency_code = std::move(arg);
    return Init_ErrorFb_error_fb_register_code(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ErrorFb msg_;
};

class Init_ErrorFb_error_fb_devive_id
{
public:
  explicit Init_ErrorFb_error_fb_devive_id(::yhs_can_interfaces::msg::ErrorFb & msg)
  : msg_(msg)
  {}
  Init_ErrorFb_error_fb_emergency_code error_fb_devive_id(::yhs_can_interfaces::msg::ErrorFb::_error_fb_devive_id_type arg)
  {
    msg_.error_fb_devive_id = std::move(arg);
    return Init_ErrorFb_error_fb_emergency_code(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ErrorFb msg_;
};

class Init_ErrorFb_error_fb_device_type
{
public:
  explicit Init_ErrorFb_error_fb_device_type(::yhs_can_interfaces::msg::ErrorFb & msg)
  : msg_(msg)
  {}
  Init_ErrorFb_error_fb_devive_id error_fb_device_type(::yhs_can_interfaces::msg::ErrorFb::_error_fb_device_type_type arg)
  {
    msg_.error_fb_device_type = std::move(arg);
    return Init_ErrorFb_error_fb_devive_id(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ErrorFb msg_;
};

class Init_ErrorFb_error_fb_level
{
public:
  Init_ErrorFb_error_fb_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorFb_error_fb_device_type error_fb_level(::yhs_can_interfaces::msg::ErrorFb::_error_fb_level_type arg)
  {
    msg_.error_fb_level = std::move(arg);
    return Init_ErrorFb_error_fb_device_type(msg_);
  }

private:
  ::yhs_can_interfaces::msg::ErrorFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::ErrorFb>()
{
  return yhs_can_interfaces::msg::builder::Init_ErrorFb_error_fb_level();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__BUILDER_HPP_
