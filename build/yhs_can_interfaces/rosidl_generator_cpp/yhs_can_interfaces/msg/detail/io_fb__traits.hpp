// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yhs_can_interfaces:msg/IoFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__TRAITS_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yhs_can_interfaces/msg/detail/io_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yhs_can_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IoFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: io_fb_lamp_ctrl
  {
    out << "io_fb_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_lamp_ctrl, out);
    out << ", ";
  }

  // member: io_fb_unlock
  {
    out << "io_fb_unlock: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_unlock, out);
    out << ", ";
  }

  // member: io_fb_low_power_enable
  {
    out << "io_fb_low_power_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_low_power_enable, out);
    out << ", ";
  }

  // member: io_fb_low_power_state
  {
    out << "io_fb_low_power_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_low_power_state, out);
    out << ", ";
  }

  // member: io_fb_lower_beam_headlamp
  {
    out << "io_fb_lower_beam_headlamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_lower_beam_headlamp, out);
    out << ", ";
  }

  // member: io_fb_upper_beam_headlamp
  {
    out << "io_fb_upper_beam_headlamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_upper_beam_headlamp, out);
    out << ", ";
  }

  // member: io_fb_turn_lamp
  {
    out << "io_fb_turn_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_turn_lamp, out);
    out << ", ";
  }

  // member: io_fb_braking_lamp
  {
    out << "io_fb_braking_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_braking_lamp, out);
    out << ", ";
  }

  // member: io_fb_clearance_lamp
  {
    out << "io_fb_clearance_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_clearance_lamp, out);
    out << ", ";
  }

  // member: io_fb_fog_lamp
  {
    out << "io_fb_fog_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fog_lamp, out);
    out << ", ";
  }

  // member: io_fb_speaker
  {
    out << "io_fb_speaker: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_speaker, out);
    out << ", ";
  }

  // member: io_fb_low_power_ratio
  {
    out << "io_fb_low_power_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_low_power_ratio, out);
    out << ", ";
  }

  // member: io_fb_fl_impact_sensor
  {
    out << "io_fb_fl_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fl_impact_sensor, out);
    out << ", ";
  }

  // member: io_fb_fm_impact_sensor
  {
    out << "io_fb_fm_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fm_impact_sensor, out);
    out << ", ";
  }

  // member: io_fb_fr_impact_sensor
  {
    out << "io_fb_fr_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fr_impact_sensor, out);
    out << ", ";
  }

  // member: io_fb_rl_impact_sensor
  {
    out << "io_fb_rl_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rl_impact_sensor, out);
    out << ", ";
  }

  // member: io_fb_rm_impact_sensor
  {
    out << "io_fb_rm_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rm_impact_sensor, out);
    out << ", ";
  }

  // member: io_fb_rr_impact_sensor
  {
    out << "io_fb_rr_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rr_impact_sensor, out);
    out << ", ";
  }

  // member: io_fb_fl_drop_sensor
  {
    out << "io_fb_fl_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fl_drop_sensor, out);
    out << ", ";
  }

  // member: io_fb_fm_drop_sensor
  {
    out << "io_fb_fm_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fm_drop_sensor, out);
    out << ", ";
  }

  // member: io_fb_fr_drop_sensor
  {
    out << "io_fb_fr_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fr_drop_sensor, out);
    out << ", ";
  }

  // member: io_fb_rl_drop_sensor
  {
    out << "io_fb_rl_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rl_drop_sensor, out);
    out << ", ";
  }

  // member: io_fb_rm_drop_sensor
  {
    out << "io_fb_rm_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rm_drop_sensor, out);
    out << ", ";
  }

  // member: io_fb_rr_drop_sensor
  {
    out << "io_fb_rr_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rr_drop_sensor, out);
    out << ", ";
  }

  // member: io_fb_estop
  {
    out << "io_fb_estop: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_estop, out);
    out << ", ";
  }

  // member: io_fb_joypad_ctrl
  {
    out << "io_fb_joypad_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_joypad_ctrl, out);
    out << ", ";
  }

  // member: io_fb_charge_state
  {
    out << "io_fb_charge_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_charge_state, out);
    out << ", ";
  }

  // member: io_fb_charger_sign
  {
    out << "io_fb_charger_sign: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_charger_sign, out);
    out << ", ";
  }

  // member: io_fb_joypad_first
  {
    out << "io_fb_joypad_first: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_joypad_first, out);
    out << ", ";
  }

  // member: io_fb_joypad_online
  {
    out << "io_fb_joypad_online: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_joypad_online, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IoFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: io_fb_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_lamp_ctrl, out);
    out << "\n";
  }

  // member: io_fb_unlock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_unlock: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_unlock, out);
    out << "\n";
  }

  // member: io_fb_low_power_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_low_power_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_low_power_enable, out);
    out << "\n";
  }

  // member: io_fb_low_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_low_power_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_low_power_state, out);
    out << "\n";
  }

  // member: io_fb_lower_beam_headlamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_lower_beam_headlamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_lower_beam_headlamp, out);
    out << "\n";
  }

  // member: io_fb_upper_beam_headlamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_upper_beam_headlamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_upper_beam_headlamp, out);
    out << "\n";
  }

  // member: io_fb_turn_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_turn_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_turn_lamp, out);
    out << "\n";
  }

  // member: io_fb_braking_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_braking_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_braking_lamp, out);
    out << "\n";
  }

  // member: io_fb_clearance_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_clearance_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_clearance_lamp, out);
    out << "\n";
  }

  // member: io_fb_fog_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fog_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fog_lamp, out);
    out << "\n";
  }

  // member: io_fb_speaker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_speaker: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_speaker, out);
    out << "\n";
  }

  // member: io_fb_low_power_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_low_power_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_low_power_ratio, out);
    out << "\n";
  }

  // member: io_fb_fl_impact_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fl_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fl_impact_sensor, out);
    out << "\n";
  }

  // member: io_fb_fm_impact_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fm_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fm_impact_sensor, out);
    out << "\n";
  }

  // member: io_fb_fr_impact_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fr_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fr_impact_sensor, out);
    out << "\n";
  }

  // member: io_fb_rl_impact_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_rl_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rl_impact_sensor, out);
    out << "\n";
  }

  // member: io_fb_rm_impact_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_rm_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rm_impact_sensor, out);
    out << "\n";
  }

  // member: io_fb_rr_impact_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_rr_impact_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rr_impact_sensor, out);
    out << "\n";
  }

  // member: io_fb_fl_drop_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fl_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fl_drop_sensor, out);
    out << "\n";
  }

  // member: io_fb_fm_drop_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fm_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fm_drop_sensor, out);
    out << "\n";
  }

  // member: io_fb_fr_drop_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_fr_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_fr_drop_sensor, out);
    out << "\n";
  }

  // member: io_fb_rl_drop_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_rl_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rl_drop_sensor, out);
    out << "\n";
  }

  // member: io_fb_rm_drop_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_rm_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rm_drop_sensor, out);
    out << "\n";
  }

  // member: io_fb_rr_drop_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_rr_drop_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_rr_drop_sensor, out);
    out << "\n";
  }

  // member: io_fb_estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_estop: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_estop, out);
    out << "\n";
  }

  // member: io_fb_joypad_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_joypad_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_joypad_ctrl, out);
    out << "\n";
  }

  // member: io_fb_charge_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_charge_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_charge_state, out);
    out << "\n";
  }

  // member: io_fb_charger_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_charger_sign: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_charger_sign, out);
    out << "\n";
  }

  // member: io_fb_joypad_first
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_joypad_first: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_joypad_first, out);
    out << "\n";
  }

  // member: io_fb_joypad_online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_fb_joypad_online: ";
    rosidl_generator_traits::value_to_yaml(msg.io_fb_joypad_online, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IoFb & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yhs_can_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use yhs_can_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yhs_can_interfaces::msg::IoFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  yhs_can_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yhs_can_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yhs_can_interfaces::msg::IoFb & msg)
{
  return yhs_can_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yhs_can_interfaces::msg::IoFb>()
{
  return "yhs_can_interfaces::msg::IoFb";
}

template<>
inline const char * name<yhs_can_interfaces::msg::IoFb>()
{
  return "yhs_can_interfaces/msg/IoFb";
}

template<>
struct has_fixed_size<yhs_can_interfaces::msg::IoFb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yhs_can_interfaces::msg::IoFb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yhs_can_interfaces::msg::IoFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__TRAITS_HPP_
