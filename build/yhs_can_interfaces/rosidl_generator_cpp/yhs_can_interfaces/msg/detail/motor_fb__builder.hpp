// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/MotorFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/motor_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorFb_motor_cmd_power_restart
{
public:
  explicit Init_MotorFb_motor_cmd_power_restart(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::MotorFb motor_cmd_power_restart(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_power_restart_type arg)
  {
    msg_.motor_cmd_power_restart = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_steering_enable_rr
{
public:
  explicit Init_MotorFb_motor_cmd_steering_enable_rr(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_power_restart motor_cmd_steering_enable_rr(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_steering_enable_rr_type arg)
  {
    msg_.motor_cmd_steering_enable_rr = std::move(arg);
    return Init_MotorFb_motor_cmd_power_restart(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_steering_enable_rf
{
public:
  explicit Init_MotorFb_motor_cmd_steering_enable_rf(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_steering_enable_rr motor_cmd_steering_enable_rf(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_steering_enable_rf_type arg)
  {
    msg_.motor_cmd_steering_enable_rf = std::move(arg);
    return Init_MotorFb_motor_cmd_steering_enable_rr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_steering_enable_lr
{
public:
  explicit Init_MotorFb_motor_cmd_steering_enable_lr(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_steering_enable_rf motor_cmd_steering_enable_lr(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_steering_enable_lr_type arg)
  {
    msg_.motor_cmd_steering_enable_lr = std::move(arg);
    return Init_MotorFb_motor_cmd_steering_enable_rf(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_steering_enable_lf
{
public:
  explicit Init_MotorFb_motor_cmd_steering_enable_lf(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_steering_enable_lr motor_cmd_steering_enable_lf(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_steering_enable_lf_type arg)
  {
    msg_.motor_cmd_steering_enable_lf = std::move(arg);
    return Init_MotorFb_motor_cmd_steering_enable_lr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_drive_enable_rr
{
public:
  explicit Init_MotorFb_motor_cmd_drive_enable_rr(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_steering_enable_lf motor_cmd_drive_enable_rr(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_drive_enable_rr_type arg)
  {
    msg_.motor_cmd_drive_enable_rr = std::move(arg);
    return Init_MotorFb_motor_cmd_steering_enable_lf(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_drive_enable_rf
{
public:
  explicit Init_MotorFb_motor_cmd_drive_enable_rf(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_drive_enable_rr motor_cmd_drive_enable_rf(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_drive_enable_rf_type arg)
  {
    msg_.motor_cmd_drive_enable_rf = std::move(arg);
    return Init_MotorFb_motor_cmd_drive_enable_rr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_drive_enable_lr
{
public:
  explicit Init_MotorFb_motor_cmd_drive_enable_lr(::yhs_can_interfaces::msg::MotorFb & msg)
  : msg_(msg)
  {}
  Init_MotorFb_motor_cmd_drive_enable_rf motor_cmd_drive_enable_lr(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_drive_enable_lr_type arg)
  {
    msg_.motor_cmd_drive_enable_lr = std::move(arg);
    return Init_MotorFb_motor_cmd_drive_enable_rf(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

class Init_MotorFb_motor_cmd_drive_enable_lf
{
public:
  Init_MotorFb_motor_cmd_drive_enable_lf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFb_motor_cmd_drive_enable_lr motor_cmd_drive_enable_lf(::yhs_can_interfaces::msg::MotorFb::_motor_cmd_drive_enable_lf_type arg)
  {
    msg_.motor_cmd_drive_enable_lf = std::move(arg);
    return Init_MotorFb_motor_cmd_drive_enable_lr(msg_);
  }

private:
  ::yhs_can_interfaces::msg::MotorFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::MotorFb>()
{
  return yhs_can_interfaces::msg::builder::Init_MotorFb_motor_cmd_drive_enable_lf();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_FB__BUILDER_HPP_
