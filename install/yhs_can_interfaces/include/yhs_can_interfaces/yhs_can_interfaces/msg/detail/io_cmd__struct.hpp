// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/IoCmd.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__IO_CMD__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__IO_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__IoCmd __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__IoCmd __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IoCmd_
{
  using Type = IoCmd_<ContainerAllocator>;

  explicit IoCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io_cmd_lamp_ctrl = false;
      this->io_cmd_unlock = false;
      this->io_cmd_low_power_enable = false;
      this->io_cmd_lower_beam_headlamp = false;
      this->io_cmd_upper_beam_headlamp = false;
      this->io_cmd_turn_lamp = 0;
      this->io_cmd_braking_lamp = false;
      this->io_cmd_clearance_lamp = false;
      this->io_cmd_fog_lamp = false;
      this->io_cmd_speaker = false;
      this->io_cmd_low_power_ratio = 0;
    }
  }

  explicit IoCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io_cmd_lamp_ctrl = false;
      this->io_cmd_unlock = false;
      this->io_cmd_low_power_enable = false;
      this->io_cmd_lower_beam_headlamp = false;
      this->io_cmd_upper_beam_headlamp = false;
      this->io_cmd_turn_lamp = 0;
      this->io_cmd_braking_lamp = false;
      this->io_cmd_clearance_lamp = false;
      this->io_cmd_fog_lamp = false;
      this->io_cmd_speaker = false;
      this->io_cmd_low_power_ratio = 0;
    }
  }

  // field types and members
  using _io_cmd_lamp_ctrl_type =
    bool;
  _io_cmd_lamp_ctrl_type io_cmd_lamp_ctrl;
  using _io_cmd_unlock_type =
    bool;
  _io_cmd_unlock_type io_cmd_unlock;
  using _io_cmd_low_power_enable_type =
    bool;
  _io_cmd_low_power_enable_type io_cmd_low_power_enable;
  using _io_cmd_lower_beam_headlamp_type =
    bool;
  _io_cmd_lower_beam_headlamp_type io_cmd_lower_beam_headlamp;
  using _io_cmd_upper_beam_headlamp_type =
    bool;
  _io_cmd_upper_beam_headlamp_type io_cmd_upper_beam_headlamp;
  using _io_cmd_turn_lamp_type =
    uint8_t;
  _io_cmd_turn_lamp_type io_cmd_turn_lamp;
  using _io_cmd_braking_lamp_type =
    bool;
  _io_cmd_braking_lamp_type io_cmd_braking_lamp;
  using _io_cmd_clearance_lamp_type =
    bool;
  _io_cmd_clearance_lamp_type io_cmd_clearance_lamp;
  using _io_cmd_fog_lamp_type =
    bool;
  _io_cmd_fog_lamp_type io_cmd_fog_lamp;
  using _io_cmd_speaker_type =
    bool;
  _io_cmd_speaker_type io_cmd_speaker;
  using _io_cmd_low_power_ratio_type =
    uint8_t;
  _io_cmd_low_power_ratio_type io_cmd_low_power_ratio;

  // setters for named parameter idiom
  Type & set__io_cmd_lamp_ctrl(
    const bool & _arg)
  {
    this->io_cmd_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__io_cmd_unlock(
    const bool & _arg)
  {
    this->io_cmd_unlock = _arg;
    return *this;
  }
  Type & set__io_cmd_low_power_enable(
    const bool & _arg)
  {
    this->io_cmd_low_power_enable = _arg;
    return *this;
  }
  Type & set__io_cmd_lower_beam_headlamp(
    const bool & _arg)
  {
    this->io_cmd_lower_beam_headlamp = _arg;
    return *this;
  }
  Type & set__io_cmd_upper_beam_headlamp(
    const bool & _arg)
  {
    this->io_cmd_upper_beam_headlamp = _arg;
    return *this;
  }
  Type & set__io_cmd_turn_lamp(
    const uint8_t & _arg)
  {
    this->io_cmd_turn_lamp = _arg;
    return *this;
  }
  Type & set__io_cmd_braking_lamp(
    const bool & _arg)
  {
    this->io_cmd_braking_lamp = _arg;
    return *this;
  }
  Type & set__io_cmd_clearance_lamp(
    const bool & _arg)
  {
    this->io_cmd_clearance_lamp = _arg;
    return *this;
  }
  Type & set__io_cmd_fog_lamp(
    const bool & _arg)
  {
    this->io_cmd_fog_lamp = _arg;
    return *this;
  }
  Type & set__io_cmd_speaker(
    const bool & _arg)
  {
    this->io_cmd_speaker = _arg;
    return *this;
  }
  Type & set__io_cmd_low_power_ratio(
    const uint8_t & _arg)
  {
    this->io_cmd_low_power_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::IoCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::IoCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::IoCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::IoCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__IoCmd
    std::shared_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__IoCmd
    std::shared_ptr<yhs_can_interfaces::msg::IoCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoCmd_ & other) const
  {
    if (this->io_cmd_lamp_ctrl != other.io_cmd_lamp_ctrl) {
      return false;
    }
    if (this->io_cmd_unlock != other.io_cmd_unlock) {
      return false;
    }
    if (this->io_cmd_low_power_enable != other.io_cmd_low_power_enable) {
      return false;
    }
    if (this->io_cmd_lower_beam_headlamp != other.io_cmd_lower_beam_headlamp) {
      return false;
    }
    if (this->io_cmd_upper_beam_headlamp != other.io_cmd_upper_beam_headlamp) {
      return false;
    }
    if (this->io_cmd_turn_lamp != other.io_cmd_turn_lamp) {
      return false;
    }
    if (this->io_cmd_braking_lamp != other.io_cmd_braking_lamp) {
      return false;
    }
    if (this->io_cmd_clearance_lamp != other.io_cmd_clearance_lamp) {
      return false;
    }
    if (this->io_cmd_fog_lamp != other.io_cmd_fog_lamp) {
      return false;
    }
    if (this->io_cmd_speaker != other.io_cmd_speaker) {
      return false;
    }
    if (this->io_cmd_low_power_ratio != other.io_cmd_low_power_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoCmd_

// alias to use template instance with default allocator
using IoCmd =
  yhs_can_interfaces::msg::IoCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__IO_CMD__STRUCT_HPP_
