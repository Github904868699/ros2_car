// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/IoFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__IoFb __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__IoFb __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IoFb_
{
  using Type = IoFb_<ContainerAllocator>;

  explicit IoFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io_fb_lamp_ctrl = false;
      this->io_fb_unlock = false;
      this->io_fb_low_power_enable = false;
      this->io_fb_low_power_state = false;
      this->io_fb_lower_beam_headlamp = false;
      this->io_fb_upper_beam_headlamp = false;
      this->io_fb_turn_lamp = 0;
      this->io_fb_braking_lamp = false;
      this->io_fb_clearance_lamp = false;
      this->io_fb_fog_lamp = false;
      this->io_fb_speaker = false;
      this->io_fb_low_power_ratio = 0;
      this->io_fb_fl_impact_sensor = false;
      this->io_fb_fm_impact_sensor = false;
      this->io_fb_fr_impact_sensor = false;
      this->io_fb_rl_impact_sensor = false;
      this->io_fb_rm_impact_sensor = false;
      this->io_fb_rr_impact_sensor = false;
      this->io_fb_fl_drop_sensor = false;
      this->io_fb_fm_drop_sensor = false;
      this->io_fb_fr_drop_sensor = false;
      this->io_fb_rl_drop_sensor = false;
      this->io_fb_rm_drop_sensor = false;
      this->io_fb_rr_drop_sensor = false;
      this->io_fb_estop = false;
      this->io_fb_joypad_ctrl = false;
      this->io_fb_charge_state = false;
      this->io_fb_charger_sign = false;
      this->io_fb_joypad_first = false;
      this->io_fb_joypad_online = false;
    }
  }

  explicit IoFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io_fb_lamp_ctrl = false;
      this->io_fb_unlock = false;
      this->io_fb_low_power_enable = false;
      this->io_fb_low_power_state = false;
      this->io_fb_lower_beam_headlamp = false;
      this->io_fb_upper_beam_headlamp = false;
      this->io_fb_turn_lamp = 0;
      this->io_fb_braking_lamp = false;
      this->io_fb_clearance_lamp = false;
      this->io_fb_fog_lamp = false;
      this->io_fb_speaker = false;
      this->io_fb_low_power_ratio = 0;
      this->io_fb_fl_impact_sensor = false;
      this->io_fb_fm_impact_sensor = false;
      this->io_fb_fr_impact_sensor = false;
      this->io_fb_rl_impact_sensor = false;
      this->io_fb_rm_impact_sensor = false;
      this->io_fb_rr_impact_sensor = false;
      this->io_fb_fl_drop_sensor = false;
      this->io_fb_fm_drop_sensor = false;
      this->io_fb_fr_drop_sensor = false;
      this->io_fb_rl_drop_sensor = false;
      this->io_fb_rm_drop_sensor = false;
      this->io_fb_rr_drop_sensor = false;
      this->io_fb_estop = false;
      this->io_fb_joypad_ctrl = false;
      this->io_fb_charge_state = false;
      this->io_fb_charger_sign = false;
      this->io_fb_joypad_first = false;
      this->io_fb_joypad_online = false;
    }
  }

  // field types and members
  using _io_fb_lamp_ctrl_type =
    bool;
  _io_fb_lamp_ctrl_type io_fb_lamp_ctrl;
  using _io_fb_unlock_type =
    bool;
  _io_fb_unlock_type io_fb_unlock;
  using _io_fb_low_power_enable_type =
    bool;
  _io_fb_low_power_enable_type io_fb_low_power_enable;
  using _io_fb_low_power_state_type =
    bool;
  _io_fb_low_power_state_type io_fb_low_power_state;
  using _io_fb_lower_beam_headlamp_type =
    bool;
  _io_fb_lower_beam_headlamp_type io_fb_lower_beam_headlamp;
  using _io_fb_upper_beam_headlamp_type =
    bool;
  _io_fb_upper_beam_headlamp_type io_fb_upper_beam_headlamp;
  using _io_fb_turn_lamp_type =
    int8_t;
  _io_fb_turn_lamp_type io_fb_turn_lamp;
  using _io_fb_braking_lamp_type =
    bool;
  _io_fb_braking_lamp_type io_fb_braking_lamp;
  using _io_fb_clearance_lamp_type =
    bool;
  _io_fb_clearance_lamp_type io_fb_clearance_lamp;
  using _io_fb_fog_lamp_type =
    bool;
  _io_fb_fog_lamp_type io_fb_fog_lamp;
  using _io_fb_speaker_type =
    bool;
  _io_fb_speaker_type io_fb_speaker;
  using _io_fb_low_power_ratio_type =
    uint8_t;
  _io_fb_low_power_ratio_type io_fb_low_power_ratio;
  using _io_fb_fl_impact_sensor_type =
    bool;
  _io_fb_fl_impact_sensor_type io_fb_fl_impact_sensor;
  using _io_fb_fm_impact_sensor_type =
    bool;
  _io_fb_fm_impact_sensor_type io_fb_fm_impact_sensor;
  using _io_fb_fr_impact_sensor_type =
    bool;
  _io_fb_fr_impact_sensor_type io_fb_fr_impact_sensor;
  using _io_fb_rl_impact_sensor_type =
    bool;
  _io_fb_rl_impact_sensor_type io_fb_rl_impact_sensor;
  using _io_fb_rm_impact_sensor_type =
    bool;
  _io_fb_rm_impact_sensor_type io_fb_rm_impact_sensor;
  using _io_fb_rr_impact_sensor_type =
    bool;
  _io_fb_rr_impact_sensor_type io_fb_rr_impact_sensor;
  using _io_fb_fl_drop_sensor_type =
    bool;
  _io_fb_fl_drop_sensor_type io_fb_fl_drop_sensor;
  using _io_fb_fm_drop_sensor_type =
    bool;
  _io_fb_fm_drop_sensor_type io_fb_fm_drop_sensor;
  using _io_fb_fr_drop_sensor_type =
    bool;
  _io_fb_fr_drop_sensor_type io_fb_fr_drop_sensor;
  using _io_fb_rl_drop_sensor_type =
    bool;
  _io_fb_rl_drop_sensor_type io_fb_rl_drop_sensor;
  using _io_fb_rm_drop_sensor_type =
    bool;
  _io_fb_rm_drop_sensor_type io_fb_rm_drop_sensor;
  using _io_fb_rr_drop_sensor_type =
    bool;
  _io_fb_rr_drop_sensor_type io_fb_rr_drop_sensor;
  using _io_fb_estop_type =
    bool;
  _io_fb_estop_type io_fb_estop;
  using _io_fb_joypad_ctrl_type =
    bool;
  _io_fb_joypad_ctrl_type io_fb_joypad_ctrl;
  using _io_fb_charge_state_type =
    bool;
  _io_fb_charge_state_type io_fb_charge_state;
  using _io_fb_charger_sign_type =
    bool;
  _io_fb_charger_sign_type io_fb_charger_sign;
  using _io_fb_joypad_first_type =
    bool;
  _io_fb_joypad_first_type io_fb_joypad_first;
  using _io_fb_joypad_online_type =
    bool;
  _io_fb_joypad_online_type io_fb_joypad_online;

  // setters for named parameter idiom
  Type & set__io_fb_lamp_ctrl(
    const bool & _arg)
  {
    this->io_fb_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__io_fb_unlock(
    const bool & _arg)
  {
    this->io_fb_unlock = _arg;
    return *this;
  }
  Type & set__io_fb_low_power_enable(
    const bool & _arg)
  {
    this->io_fb_low_power_enable = _arg;
    return *this;
  }
  Type & set__io_fb_low_power_state(
    const bool & _arg)
  {
    this->io_fb_low_power_state = _arg;
    return *this;
  }
  Type & set__io_fb_lower_beam_headlamp(
    const bool & _arg)
  {
    this->io_fb_lower_beam_headlamp = _arg;
    return *this;
  }
  Type & set__io_fb_upper_beam_headlamp(
    const bool & _arg)
  {
    this->io_fb_upper_beam_headlamp = _arg;
    return *this;
  }
  Type & set__io_fb_turn_lamp(
    const int8_t & _arg)
  {
    this->io_fb_turn_lamp = _arg;
    return *this;
  }
  Type & set__io_fb_braking_lamp(
    const bool & _arg)
  {
    this->io_fb_braking_lamp = _arg;
    return *this;
  }
  Type & set__io_fb_clearance_lamp(
    const bool & _arg)
  {
    this->io_fb_clearance_lamp = _arg;
    return *this;
  }
  Type & set__io_fb_fog_lamp(
    const bool & _arg)
  {
    this->io_fb_fog_lamp = _arg;
    return *this;
  }
  Type & set__io_fb_speaker(
    const bool & _arg)
  {
    this->io_fb_speaker = _arg;
    return *this;
  }
  Type & set__io_fb_low_power_ratio(
    const uint8_t & _arg)
  {
    this->io_fb_low_power_ratio = _arg;
    return *this;
  }
  Type & set__io_fb_fl_impact_sensor(
    const bool & _arg)
  {
    this->io_fb_fl_impact_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_fm_impact_sensor(
    const bool & _arg)
  {
    this->io_fb_fm_impact_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_fr_impact_sensor(
    const bool & _arg)
  {
    this->io_fb_fr_impact_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_rl_impact_sensor(
    const bool & _arg)
  {
    this->io_fb_rl_impact_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_rm_impact_sensor(
    const bool & _arg)
  {
    this->io_fb_rm_impact_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_rr_impact_sensor(
    const bool & _arg)
  {
    this->io_fb_rr_impact_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_fl_drop_sensor(
    const bool & _arg)
  {
    this->io_fb_fl_drop_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_fm_drop_sensor(
    const bool & _arg)
  {
    this->io_fb_fm_drop_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_fr_drop_sensor(
    const bool & _arg)
  {
    this->io_fb_fr_drop_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_rl_drop_sensor(
    const bool & _arg)
  {
    this->io_fb_rl_drop_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_rm_drop_sensor(
    const bool & _arg)
  {
    this->io_fb_rm_drop_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_rr_drop_sensor(
    const bool & _arg)
  {
    this->io_fb_rr_drop_sensor = _arg;
    return *this;
  }
  Type & set__io_fb_estop(
    const bool & _arg)
  {
    this->io_fb_estop = _arg;
    return *this;
  }
  Type & set__io_fb_joypad_ctrl(
    const bool & _arg)
  {
    this->io_fb_joypad_ctrl = _arg;
    return *this;
  }
  Type & set__io_fb_charge_state(
    const bool & _arg)
  {
    this->io_fb_charge_state = _arg;
    return *this;
  }
  Type & set__io_fb_charger_sign(
    const bool & _arg)
  {
    this->io_fb_charger_sign = _arg;
    return *this;
  }
  Type & set__io_fb_joypad_first(
    const bool & _arg)
  {
    this->io_fb_joypad_first = _arg;
    return *this;
  }
  Type & set__io_fb_joypad_online(
    const bool & _arg)
  {
    this->io_fb_joypad_online = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::IoFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::IoFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::IoFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::IoFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__IoFb
    std::shared_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__IoFb
    std::shared_ptr<yhs_can_interfaces::msg::IoFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoFb_ & other) const
  {
    if (this->io_fb_lamp_ctrl != other.io_fb_lamp_ctrl) {
      return false;
    }
    if (this->io_fb_unlock != other.io_fb_unlock) {
      return false;
    }
    if (this->io_fb_low_power_enable != other.io_fb_low_power_enable) {
      return false;
    }
    if (this->io_fb_low_power_state != other.io_fb_low_power_state) {
      return false;
    }
    if (this->io_fb_lower_beam_headlamp != other.io_fb_lower_beam_headlamp) {
      return false;
    }
    if (this->io_fb_upper_beam_headlamp != other.io_fb_upper_beam_headlamp) {
      return false;
    }
    if (this->io_fb_turn_lamp != other.io_fb_turn_lamp) {
      return false;
    }
    if (this->io_fb_braking_lamp != other.io_fb_braking_lamp) {
      return false;
    }
    if (this->io_fb_clearance_lamp != other.io_fb_clearance_lamp) {
      return false;
    }
    if (this->io_fb_fog_lamp != other.io_fb_fog_lamp) {
      return false;
    }
    if (this->io_fb_speaker != other.io_fb_speaker) {
      return false;
    }
    if (this->io_fb_low_power_ratio != other.io_fb_low_power_ratio) {
      return false;
    }
    if (this->io_fb_fl_impact_sensor != other.io_fb_fl_impact_sensor) {
      return false;
    }
    if (this->io_fb_fm_impact_sensor != other.io_fb_fm_impact_sensor) {
      return false;
    }
    if (this->io_fb_fr_impact_sensor != other.io_fb_fr_impact_sensor) {
      return false;
    }
    if (this->io_fb_rl_impact_sensor != other.io_fb_rl_impact_sensor) {
      return false;
    }
    if (this->io_fb_rm_impact_sensor != other.io_fb_rm_impact_sensor) {
      return false;
    }
    if (this->io_fb_rr_impact_sensor != other.io_fb_rr_impact_sensor) {
      return false;
    }
    if (this->io_fb_fl_drop_sensor != other.io_fb_fl_drop_sensor) {
      return false;
    }
    if (this->io_fb_fm_drop_sensor != other.io_fb_fm_drop_sensor) {
      return false;
    }
    if (this->io_fb_fr_drop_sensor != other.io_fb_fr_drop_sensor) {
      return false;
    }
    if (this->io_fb_rl_drop_sensor != other.io_fb_rl_drop_sensor) {
      return false;
    }
    if (this->io_fb_rm_drop_sensor != other.io_fb_rm_drop_sensor) {
      return false;
    }
    if (this->io_fb_rr_drop_sensor != other.io_fb_rr_drop_sensor) {
      return false;
    }
    if (this->io_fb_estop != other.io_fb_estop) {
      return false;
    }
    if (this->io_fb_joypad_ctrl != other.io_fb_joypad_ctrl) {
      return false;
    }
    if (this->io_fb_charge_state != other.io_fb_charge_state) {
      return false;
    }
    if (this->io_fb_charger_sign != other.io_fb_charger_sign) {
      return false;
    }
    if (this->io_fb_joypad_first != other.io_fb_joypad_first) {
      return false;
    }
    if (this->io_fb_joypad_online != other.io_fb_joypad_online) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoFb_

// alias to use template instance with default allocator
using IoFb =
  yhs_can_interfaces::msg::IoFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__IO_FB__STRUCT_HPP_
