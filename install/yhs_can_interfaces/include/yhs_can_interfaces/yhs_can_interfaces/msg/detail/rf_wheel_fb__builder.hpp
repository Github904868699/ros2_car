// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/RfWheelFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_RfWheelFb_rf_wheel_fb_pulse
{
public:
  explicit Init_RfWheelFb_rf_wheel_fb_pulse(::yhs_can_interfaces::msg::RfWheelFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::RfWheelFb rf_wheel_fb_pulse(::yhs_can_interfaces::msg::RfWheelFb::_rf_wheel_fb_pulse_type arg)
  {
    msg_.rf_wheel_fb_pulse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::RfWheelFb msg_;
};

class Init_RfWheelFb_rf_wheel_fb_velocity
{
public:
  Init_RfWheelFb_rf_wheel_fb_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RfWheelFb_rf_wheel_fb_pulse rf_wheel_fb_velocity(::yhs_can_interfaces::msg::RfWheelFb::_rf_wheel_fb_velocity_type arg)
  {
    msg_.rf_wheel_fb_velocity = std::move(arg);
    return Init_RfWheelFb_rf_wheel_fb_pulse(msg_);
  }

private:
  ::yhs_can_interfaces::msg::RfWheelFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::RfWheelFb>()
{
  return yhs_can_interfaces::msg::builder::Init_RfWheelFb_rf_wheel_fb_velocity();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__BUILDER_HPP_
