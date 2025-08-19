// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/FrontAngleFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__FRONT_ANGLE_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__FRONT_ANGLE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/front_angle_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_FrontAngleFb_front_angle_fb_r
{
public:
  explicit Init_FrontAngleFb_front_angle_fb_r(::yhs_can_interfaces::msg::FrontAngleFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::FrontAngleFb front_angle_fb_r(::yhs_can_interfaces::msg::FrontAngleFb::_front_angle_fb_r_type arg)
  {
    msg_.front_angle_fb_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::FrontAngleFb msg_;
};

class Init_FrontAngleFb_front_angle_fb_l
{
public:
  Init_FrontAngleFb_front_angle_fb_l()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrontAngleFb_front_angle_fb_r front_angle_fb_l(::yhs_can_interfaces::msg::FrontAngleFb::_front_angle_fb_l_type arg)
  {
    msg_.front_angle_fb_l = std::move(arg);
    return Init_FrontAngleFb_front_angle_fb_r(msg_);
  }

private:
  ::yhs_can_interfaces::msg::FrontAngleFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::FrontAngleFb>()
{
  return yhs_can_interfaces::msg::builder::Init_FrontAngleFb_front_angle_fb_l();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__FRONT_ANGLE_FB__BUILDER_HPP_
