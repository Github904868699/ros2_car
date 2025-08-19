// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yhs_can_interfaces:msg/IoFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__BUILDER_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yhs_can_interfaces/msg/detail/io_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yhs_can_interfaces
{

namespace msg
{

namespace builder
{

class Init_IoFb_io_fb_joypad_online
{
public:
  explicit Init_IoFb_io_fb_joypad_online(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  ::yhs_can_interfaces::msg::IoFb io_fb_joypad_online(::yhs_can_interfaces::msg::IoFb::_io_fb_joypad_online_type arg)
  {
    msg_.io_fb_joypad_online = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_joypad_first
{
public:
  explicit Init_IoFb_io_fb_joypad_first(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_joypad_online io_fb_joypad_first(::yhs_can_interfaces::msg::IoFb::_io_fb_joypad_first_type arg)
  {
    msg_.io_fb_joypad_first = std::move(arg);
    return Init_IoFb_io_fb_joypad_online(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_charger_sign
{
public:
  explicit Init_IoFb_io_fb_charger_sign(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_joypad_first io_fb_charger_sign(::yhs_can_interfaces::msg::IoFb::_io_fb_charger_sign_type arg)
  {
    msg_.io_fb_charger_sign = std::move(arg);
    return Init_IoFb_io_fb_joypad_first(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_charge_state
{
public:
  explicit Init_IoFb_io_fb_charge_state(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_charger_sign io_fb_charge_state(::yhs_can_interfaces::msg::IoFb::_io_fb_charge_state_type arg)
  {
    msg_.io_fb_charge_state = std::move(arg);
    return Init_IoFb_io_fb_charger_sign(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_joypad_ctrl
{
public:
  explicit Init_IoFb_io_fb_joypad_ctrl(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_charge_state io_fb_joypad_ctrl(::yhs_can_interfaces::msg::IoFb::_io_fb_joypad_ctrl_type arg)
  {
    msg_.io_fb_joypad_ctrl = std::move(arg);
    return Init_IoFb_io_fb_charge_state(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_estop
{
public:
  explicit Init_IoFb_io_fb_estop(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_joypad_ctrl io_fb_estop(::yhs_can_interfaces::msg::IoFb::_io_fb_estop_type arg)
  {
    msg_.io_fb_estop = std::move(arg);
    return Init_IoFb_io_fb_joypad_ctrl(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rr_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_rr_drop_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_estop io_fb_rr_drop_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_rr_drop_sensor_type arg)
  {
    msg_.io_fb_rr_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_estop(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rm_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_rm_drop_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rr_drop_sensor io_fb_rm_drop_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_rm_drop_sensor_type arg)
  {
    msg_.io_fb_rm_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_rr_drop_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rl_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_rl_drop_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rm_drop_sensor io_fb_rl_drop_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_rl_drop_sensor_type arg)
  {
    msg_.io_fb_rl_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_rm_drop_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fr_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_fr_drop_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rl_drop_sensor io_fb_fr_drop_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_fr_drop_sensor_type arg)
  {
    msg_.io_fb_fr_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_rl_drop_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fm_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_fm_drop_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fr_drop_sensor io_fb_fm_drop_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_fm_drop_sensor_type arg)
  {
    msg_.io_fb_fm_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_fr_drop_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fl_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_fl_drop_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fm_drop_sensor io_fb_fl_drop_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_fl_drop_sensor_type arg)
  {
    msg_.io_fb_fl_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_fm_drop_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rr_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_rr_impact_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fl_drop_sensor io_fb_rr_impact_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_rr_impact_sensor_type arg)
  {
    msg_.io_fb_rr_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_fl_drop_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rm_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_rm_impact_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rr_impact_sensor io_fb_rm_impact_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_rm_impact_sensor_type arg)
  {
    msg_.io_fb_rm_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_rr_impact_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rl_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_rl_impact_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rm_impact_sensor io_fb_rl_impact_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_rl_impact_sensor_type arg)
  {
    msg_.io_fb_rl_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_rm_impact_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fr_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_fr_impact_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rl_impact_sensor io_fb_fr_impact_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_fr_impact_sensor_type arg)
  {
    msg_.io_fb_fr_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_rl_impact_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fm_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_fm_impact_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fr_impact_sensor io_fb_fm_impact_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_fm_impact_sensor_type arg)
  {
    msg_.io_fb_fm_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_fr_impact_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fl_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_fl_impact_sensor(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fm_impact_sensor io_fb_fl_impact_sensor(::yhs_can_interfaces::msg::IoFb::_io_fb_fl_impact_sensor_type arg)
  {
    msg_.io_fb_fl_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_fm_impact_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_low_power_ratio
{
public:
  explicit Init_IoFb_io_fb_low_power_ratio(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fl_impact_sensor io_fb_low_power_ratio(::yhs_can_interfaces::msg::IoFb::_io_fb_low_power_ratio_type arg)
  {
    msg_.io_fb_low_power_ratio = std::move(arg);
    return Init_IoFb_io_fb_fl_impact_sensor(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_speaker
{
public:
  explicit Init_IoFb_io_fb_speaker(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_low_power_ratio io_fb_speaker(::yhs_can_interfaces::msg::IoFb::_io_fb_speaker_type arg)
  {
    msg_.io_fb_speaker = std::move(arg);
    return Init_IoFb_io_fb_low_power_ratio(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fog_lamp
{
public:
  explicit Init_IoFb_io_fb_fog_lamp(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_speaker io_fb_fog_lamp(::yhs_can_interfaces::msg::IoFb::_io_fb_fog_lamp_type arg)
  {
    msg_.io_fb_fog_lamp = std::move(arg);
    return Init_IoFb_io_fb_speaker(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_clearance_lamp
{
public:
  explicit Init_IoFb_io_fb_clearance_lamp(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fog_lamp io_fb_clearance_lamp(::yhs_can_interfaces::msg::IoFb::_io_fb_clearance_lamp_type arg)
  {
    msg_.io_fb_clearance_lamp = std::move(arg);
    return Init_IoFb_io_fb_fog_lamp(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_braking_lamp
{
public:
  explicit Init_IoFb_io_fb_braking_lamp(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_clearance_lamp io_fb_braking_lamp(::yhs_can_interfaces::msg::IoFb::_io_fb_braking_lamp_type arg)
  {
    msg_.io_fb_braking_lamp = std::move(arg);
    return Init_IoFb_io_fb_clearance_lamp(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_turn_lamp
{
public:
  explicit Init_IoFb_io_fb_turn_lamp(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_braking_lamp io_fb_turn_lamp(::yhs_can_interfaces::msg::IoFb::_io_fb_turn_lamp_type arg)
  {
    msg_.io_fb_turn_lamp = std::move(arg);
    return Init_IoFb_io_fb_braking_lamp(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_upper_beam_headlamp
{
public:
  explicit Init_IoFb_io_fb_upper_beam_headlamp(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_turn_lamp io_fb_upper_beam_headlamp(::yhs_can_interfaces::msg::IoFb::_io_fb_upper_beam_headlamp_type arg)
  {
    msg_.io_fb_upper_beam_headlamp = std::move(arg);
    return Init_IoFb_io_fb_turn_lamp(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_lower_beam_headlamp
{
public:
  explicit Init_IoFb_io_fb_lower_beam_headlamp(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_upper_beam_headlamp io_fb_lower_beam_headlamp(::yhs_can_interfaces::msg::IoFb::_io_fb_lower_beam_headlamp_type arg)
  {
    msg_.io_fb_lower_beam_headlamp = std::move(arg);
    return Init_IoFb_io_fb_upper_beam_headlamp(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_low_power_state
{
public:
  explicit Init_IoFb_io_fb_low_power_state(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_lower_beam_headlamp io_fb_low_power_state(::yhs_can_interfaces::msg::IoFb::_io_fb_low_power_state_type arg)
  {
    msg_.io_fb_low_power_state = std::move(arg);
    return Init_IoFb_io_fb_lower_beam_headlamp(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_low_power_enable
{
public:
  explicit Init_IoFb_io_fb_low_power_enable(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_low_power_state io_fb_low_power_enable(::yhs_can_interfaces::msg::IoFb::_io_fb_low_power_enable_type arg)
  {
    msg_.io_fb_low_power_enable = std::move(arg);
    return Init_IoFb_io_fb_low_power_state(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_unlock
{
public:
  explicit Init_IoFb_io_fb_unlock(::yhs_can_interfaces::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_low_power_enable io_fb_unlock(::yhs_can_interfaces::msg::IoFb::_io_fb_unlock_type arg)
  {
    msg_.io_fb_unlock = std::move(arg);
    return Init_IoFb_io_fb_low_power_enable(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

class Init_IoFb_io_fb_lamp_ctrl
{
public:
  Init_IoFb_io_fb_lamp_ctrl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoFb_io_fb_unlock io_fb_lamp_ctrl(::yhs_can_interfaces::msg::IoFb::_io_fb_lamp_ctrl_type arg)
  {
    msg_.io_fb_lamp_ctrl = std::move(arg);
    return Init_IoFb_io_fb_unlock(msg_);
  }

private:
  ::yhs_can_interfaces::msg::IoFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yhs_can_interfaces::msg::IoFb>()
{
  return yhs_can_interfaces::msg::builder::Init_IoFb_io_fb_lamp_ctrl();
}

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__BUILDER_HPP_
