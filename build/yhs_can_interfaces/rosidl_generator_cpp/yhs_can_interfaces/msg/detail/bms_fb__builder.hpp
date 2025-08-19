// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/BmsFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__BMS_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__BMS_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/bms_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_BmsFb_bms_fb_remaining_capacity
{
public:
  explicit Init_BmsFb_bms_fb_remaining_capacity(::yhs_can_interfaces::msg::BmsFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::BmsFb bms_fb_remaining_capacity(::yhs_can_interfaces::msg::BmsFb::_bms_fb_remaining_capacity_type arg)
  {
    msg_.bms_fb_remaining_capacity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::BmsFb msg_;
};

class Init_BmsFb_bms_fb_current
{
public:
  explicit Init_BmsFb_bms_fb_current(::yhs_can_interfaces::msg::BmsFb & msg)
  : msg_(msg)
  {}
  Init_BmsFb_bms_fb_remaining_capacity bms_fb_current(::yhs_can_interfaces::msg::BmsFb::_bms_fb_current_type arg)
  {
    msg_.bms_fb_current = std::move(arg);
    return Init_BmsFb_bms_fb_remaining_capacity(msg_);
  }

private:
  ::yhs_can_interfaces::msg::BmsFb msg_;
};

class Init_BmsFb_bms_fb_voltage
{
public:
  Init_BmsFb_bms_fb_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsFb_bms_fb_current bms_fb_voltage(::yhs_can_interfaces::msg::BmsFb::_bms_fb_voltage_type arg)
  {
    msg_.bms_fb_voltage = std::move(arg);
    return Init_BmsFb_bms_fb_current(msg_);
  }

private:
  ::yhs_can_interfaces::msg::BmsFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::BmsFb>()
{
  return yhs_can_interfaces::msg::builder::Init_BmsFb_bms_fb_voltage();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__BMS_FB__BUILDER_HPP_
