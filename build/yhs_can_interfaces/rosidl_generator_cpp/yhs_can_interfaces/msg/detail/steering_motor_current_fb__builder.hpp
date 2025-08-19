// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/SteeringMotorCurrentFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rr
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb steering_motor_oc_flag_fb_rr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_oc_flag_fb_rr_type arg)
  {
    msg_.steering_motor_oc_flag_fb_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rf
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rr steering_motor_oc_flag_fb_rf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_oc_flag_fb_rf_type arg)
  {
    msg_.steering_motor_oc_flag_fb_rf = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lr
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rf steering_motor_oc_flag_fb_lr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_oc_flag_fb_lr_type arg)
  {
    msg_.steering_motor_oc_flag_fb_lr = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_rf(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lf
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lr steering_motor_oc_flag_fb_lf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_oc_flag_fb_lf_type arg)
  {
    msg_.steering_motor_oc_flag_fb_lf = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_current_fb_rr
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_current_fb_rr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lf steering_motor_current_fb_rr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_current_fb_rr_type arg)
  {
    msg_.steering_motor_current_fb_rr = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_oc_flag_fb_lf(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_current_fb_rf
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_current_fb_rf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_current_fb_rr steering_motor_current_fb_rf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_current_fb_rf_type arg)
  {
    msg_.steering_motor_current_fb_rf = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_current_fb_rr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_current_fb_lr
{
public:
  explicit Init_SteeringMotorCurrentFb_steering_motor_current_fb_lr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb & msg)
  : msg_(msg)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_current_fb_rf steering_motor_current_fb_lr(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_current_fb_lr_type arg)
  {
    msg_.steering_motor_current_fb_lr = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_current_fb_rf(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

class Init_SteeringMotorCurrentFb_steering_motor_current_fb_lf
{
public:
  Init_SteeringMotorCurrentFb_steering_motor_current_fb_lf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringMotorCurrentFb_steering_motor_current_fb_lr steering_motor_current_fb_lf(::yhs_can_interfaces::msg::SteeringMotorCurrentFb::_steering_motor_current_fb_lf_type arg)
  {
    msg_.steering_motor_current_fb_lf = std::move(arg);
    return Init_SteeringMotorCurrentFb_steering_motor_current_fb_lr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::SteeringMotorCurrentFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::SteeringMotorCurrentFb>()
{
  return yhs_can_interfaces::msg::builder::Init_SteeringMotorCurrentFb_steering_motor_current_fb_lf();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__BUILDER_HPP_
