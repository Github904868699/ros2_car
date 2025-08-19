// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/CtrlFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__CTRL_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__CTRL_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/ctrl_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_CtrlFb_ctrl_fb_y_linear
{
public:
  explicit Init_CtrlFb_ctrl_fb_y_linear(::yhs_can_interfaces::msg::CtrlFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::CtrlFb ctrl_fb_y_linear(::yhs_can_interfaces::msg::CtrlFb::_ctrl_fb_y_linear_type arg)
  {
    msg_.ctrl_fb_y_linear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::CtrlFb msg_;
};

class Init_CtrlFb_ctrl_fb_z_angular
{
public:
  explicit Init_CtrlFb_ctrl_fb_z_angular(::yhs_can_interfaces::msg::CtrlFb & msg)
  : msg_(msg)
  {}
  Init_CtrlFb_ctrl_fb_y_linear ctrl_fb_z_angular(::yhs_can_interfaces::msg::CtrlFb::_ctrl_fb_z_angular_type arg)
  {
    msg_.ctrl_fb_z_angular = std::move(arg);
    return Init_CtrlFb_ctrl_fb_y_linear(msg_);
  }

private:
  ::yhs_can_interfaces::msg::CtrlFb msg_;
};

class Init_CtrlFb_ctrl_fb_x_linear
{
public:
  explicit Init_CtrlFb_ctrl_fb_x_linear(::yhs_can_interfaces::msg::CtrlFb & msg)
  : msg_(msg)
  {}
  Init_CtrlFb_ctrl_fb_z_angular ctrl_fb_x_linear(::yhs_can_interfaces::msg::CtrlFb::_ctrl_fb_x_linear_type arg)
  {
    msg_.ctrl_fb_x_linear = std::move(arg);
    return Init_CtrlFb_ctrl_fb_z_angular(msg_);
  }

private:
  ::yhs_can_interfaces::msg::CtrlFb msg_;
};

class Init_CtrlFb_ctrl_fb_gear
{
public:
  Init_CtrlFb_ctrl_fb_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtrlFb_ctrl_fb_x_linear ctrl_fb_gear(::yhs_can_interfaces::msg::CtrlFb::_ctrl_fb_gear_type arg)
  {
    msg_.ctrl_fb_gear = std::move(arg);
    return Init_CtrlFb_ctrl_fb_x_linear(msg_);
  }

private:
  ::yhs_can_interfaces::msg::CtrlFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::CtrlFb>()
{
  return yhs_can_interfaces::msg::builder::Init_CtrlFb_ctrl_fb_gear();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__CTRL_FB__BUILDER_HPP_
