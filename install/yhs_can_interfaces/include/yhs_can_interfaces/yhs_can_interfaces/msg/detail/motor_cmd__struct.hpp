// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__MotorCmd __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__MotorCmd __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCmd_
{
  using Type = MotorCmd_<ContainerAllocator>;

  explicit MotorCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd_drive_enable_lf = false;
      this->motor_cmd_drive_enable_lr = false;
      this->motor_cmd_drive_enable_rf = false;
      this->motor_cmd_drive_enable_rr = false;
      this->motor_cmd_steering_enable_lf = false;
      this->motor_cmd_steering_enable_lr = false;
      this->motor_cmd_steering_enable_rf = false;
      this->motor_cmd_steering_enable_rr = false;
      this->motor_cmd_power_restart = false;
    }
  }

  explicit MotorCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd_drive_enable_lf = false;
      this->motor_cmd_drive_enable_lr = false;
      this->motor_cmd_drive_enable_rf = false;
      this->motor_cmd_drive_enable_rr = false;
      this->motor_cmd_steering_enable_lf = false;
      this->motor_cmd_steering_enable_lr = false;
      this->motor_cmd_steering_enable_rf = false;
      this->motor_cmd_steering_enable_rr = false;
      this->motor_cmd_power_restart = false;
    }
  }

  // field types and members
  using _motor_cmd_drive_enable_lf_type =
    bool;
  _motor_cmd_drive_enable_lf_type motor_cmd_drive_enable_lf;
  using _motor_cmd_drive_enable_lr_type =
    bool;
  _motor_cmd_drive_enable_lr_type motor_cmd_drive_enable_lr;
  using _motor_cmd_drive_enable_rf_type =
    bool;
  _motor_cmd_drive_enable_rf_type motor_cmd_drive_enable_rf;
  using _motor_cmd_drive_enable_rr_type =
    bool;
  _motor_cmd_drive_enable_rr_type motor_cmd_drive_enable_rr;
  using _motor_cmd_steering_enable_lf_type =
    bool;
  _motor_cmd_steering_enable_lf_type motor_cmd_steering_enable_lf;
  using _motor_cmd_steering_enable_lr_type =
    bool;
  _motor_cmd_steering_enable_lr_type motor_cmd_steering_enable_lr;
  using _motor_cmd_steering_enable_rf_type =
    bool;
  _motor_cmd_steering_enable_rf_type motor_cmd_steering_enable_rf;
  using _motor_cmd_steering_enable_rr_type =
    bool;
  _motor_cmd_steering_enable_rr_type motor_cmd_steering_enable_rr;
  using _motor_cmd_power_restart_type =
    bool;
  _motor_cmd_power_restart_type motor_cmd_power_restart;

  // setters for named parameter idiom
  Type & set__motor_cmd_drive_enable_lf(
    const bool & _arg)
  {
    this->motor_cmd_drive_enable_lf = _arg;
    return *this;
  }
  Type & set__motor_cmd_drive_enable_lr(
    const bool & _arg)
  {
    this->motor_cmd_drive_enable_lr = _arg;
    return *this;
  }
  Type & set__motor_cmd_drive_enable_rf(
    const bool & _arg)
  {
    this->motor_cmd_drive_enable_rf = _arg;
    return *this;
  }
  Type & set__motor_cmd_drive_enable_rr(
    const bool & _arg)
  {
    this->motor_cmd_drive_enable_rr = _arg;
    return *this;
  }
  Type & set__motor_cmd_steering_enable_lf(
    const bool & _arg)
  {
    this->motor_cmd_steering_enable_lf = _arg;
    return *this;
  }
  Type & set__motor_cmd_steering_enable_lr(
    const bool & _arg)
  {
    this->motor_cmd_steering_enable_lr = _arg;
    return *this;
  }
  Type & set__motor_cmd_steering_enable_rf(
    const bool & _arg)
  {
    this->motor_cmd_steering_enable_rf = _arg;
    return *this;
  }
  Type & set__motor_cmd_steering_enable_rr(
    const bool & _arg)
  {
    this->motor_cmd_steering_enable_rr = _arg;
    return *this;
  }
  Type & set__motor_cmd_power_restart(
    const bool & _arg)
  {
    this->motor_cmd_power_restart = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__MotorCmd
    std::shared_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__MotorCmd
    std::shared_ptr<yhs_can_interfaces::msg::MotorCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCmd_ & other) const
  {
    if (this->motor_cmd_drive_enable_lf != other.motor_cmd_drive_enable_lf) {
      return false;
    }
    if (this->motor_cmd_drive_enable_lr != other.motor_cmd_drive_enable_lr) {
      return false;
    }
    if (this->motor_cmd_drive_enable_rf != other.motor_cmd_drive_enable_rf) {
      return false;
    }
    if (this->motor_cmd_drive_enable_rr != other.motor_cmd_drive_enable_rr) {
      return false;
    }
    if (this->motor_cmd_steering_enable_lf != other.motor_cmd_steering_enable_lf) {
      return false;
    }
    if (this->motor_cmd_steering_enable_lr != other.motor_cmd_steering_enable_lr) {
      return false;
    }
    if (this->motor_cmd_steering_enable_rf != other.motor_cmd_steering_enable_rf) {
      return false;
    }
    if (this->motor_cmd_steering_enable_rr != other.motor_cmd_steering_enable_rr) {
      return false;
    }
    if (this->motor_cmd_power_restart != other.motor_cmd_power_restart) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCmd_

// alias to use template instance with default allocator
using MotorCmd =
  yhs_can_interfaces::msg::MotorCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
