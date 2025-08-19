// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/SteeringCtrlFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_CTRL_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_CTRL_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/steering_ctrl_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_SteeringCtrlFb_steering_ctrl_fb_steering
{
public:
  explicit Init_SteeringCtrlFb_steering_ctrl_fb_steering(::yhs_can_interfaces::msg::SteeringCtrlFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::SteeringCtrlFb steering_ctrl_fb_steering(::yhs_can_interfaces::msg::SteeringCtrlFb::_steering_ctrl_fb_steering_type arg)
  {
    msg_.steering_ctrl_fb_steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringCtrlFb msg_;
};

class Init_SteeringCtrlFb_steering_ctrl_fb_rfspeed
{
public:
  explicit Init_SteeringCtrlFb_steering_ctrl_fb_rfspeed(::yhs_can_interfaces::msg::SteeringCtrlFb & msg)
  : msg_(msg)
  {}
  Init_SteeringCtrlFb_steering_ctrl_fb_steering steering_ctrl_fb_rfspeed(::yhs_can_interfaces::msg::SteeringCtrlFb::_steering_ctrl_fb_rfspeed_type arg)
  {
    msg_.steering_ctrl_fb_rfspeed = std::move(arg);
    return Init_SteeringCtrlFb_steering_ctrl_fb_steering(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringCtrlFb msg_;
};

class Init_SteeringCtrlFb_steering_ctrl_fb_lrspeed
{
public:
  explicit Init_SteeringCtrlFb_steering_ctrl_fb_lrspeed(::yhs_can_interfaces::msg::SteeringCtrlFb & msg)
  : msg_(msg)
  {}
  Init_SteeringCtrlFb_steering_ctrl_fb_rfspeed steering_ctrl_fb_lrspeed(::yhs_can_interfaces::msg::SteeringCtrlFb::_steering_ctrl_fb_lrspeed_type arg)
  {
    msg_.steering_ctrl_fb_lrspeed = std::move(arg);
    return Init_SteeringCtrlFb_steering_ctrl_fb_rfspeed(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringCtrlFb msg_;
};

class Init_SteeringCtrlFb_steering_ctrl_fb_gear
{
public:
  Init_SteeringCtrlFb_steering_ctrl_fb_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringCtrlFb_steering_ctrl_fb_lrspeed steering_ctrl_fb_gear(::yhs_can_interfaces::msg::SteeringCtrlFb::_steering_ctrl_fb_gear_type arg)
  {
    msg_.steering_ctrl_fb_gear = std::move(arg);
    return Init_SteeringCtrlFb_steering_ctrl_fb_lrspeed(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringCtrlFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::SteeringCtrlFb>()
{
  return yhs_can_interfaces::msg::builder::Init_SteeringCtrlFb_steering_ctrl_fb_gear();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_CTRL_FB__BUILDER_HPP_
