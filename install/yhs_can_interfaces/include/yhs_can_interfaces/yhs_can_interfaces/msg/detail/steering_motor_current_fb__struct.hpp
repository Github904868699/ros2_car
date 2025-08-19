// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/SteeringMotorCurrentFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__SteeringMotorCurrentFb __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__SteeringMotorCurrentFb __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringMotorCurrentFb_
{
  using Type = SteeringMotorCurrentFb_<ContainerAllocator>;

  explicit SteeringMotorCurrentFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_motor_current_fb_lf = 0.0f;
      this->steering_motor_current_fb_lr = 0.0f;
      this->steering_motor_current_fb_rf = 0.0f;
      this->steering_motor_current_fb_rr = 0.0f;
      this->steering_motor_oc_flag_fb_lf = false;
      this->steering_motor_oc_flag_fb_lr = false;
      this->steering_motor_oc_flag_fb_rf = false;
      this->steering_motor_oc_flag_fb_rr = false;
    }
  }

  explicit SteeringMotorCurrentFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_motor_current_fb_lf = 0.0f;
      this->steering_motor_current_fb_lr = 0.0f;
      this->steering_motor_current_fb_rf = 0.0f;
      this->steering_motor_current_fb_rr = 0.0f;
      this->steering_motor_oc_flag_fb_lf = false;
      this->steering_motor_oc_flag_fb_lr = false;
      this->steering_motor_oc_flag_fb_rf = false;
      this->steering_motor_oc_flag_fb_rr = false;
    }
  }

  // field types and members
  using _steering_motor_current_fb_lf_type =
    float;
  _steering_motor_current_fb_lf_type steering_motor_current_fb_lf;
  using _steering_motor_current_fb_lr_type =
    float;
  _steering_motor_current_fb_lr_type steering_motor_current_fb_lr;
  using _steering_motor_current_fb_rf_type =
    float;
  _steering_motor_current_fb_rf_type steering_motor_current_fb_rf;
  using _steering_motor_current_fb_rr_type =
    float;
  _steering_motor_current_fb_rr_type steering_motor_current_fb_rr;
  using _steering_motor_oc_flag_fb_lf_type =
    bool;
  _steering_motor_oc_flag_fb_lf_type steering_motor_oc_flag_fb_lf;
  using _steering_motor_oc_flag_fb_lr_type =
    bool;
  _steering_motor_oc_flag_fb_lr_type steering_motor_oc_flag_fb_lr;
  using _steering_motor_oc_flag_fb_rf_type =
    bool;
  _steering_motor_oc_flag_fb_rf_type steering_motor_oc_flag_fb_rf;
  using _steering_motor_oc_flag_fb_rr_type =
    bool;
  _steering_motor_oc_flag_fb_rr_type steering_motor_oc_flag_fb_rr;

  // setters for named parameter idiom
  Type & set__steering_motor_current_fb_lf(
    const float & _arg)
  {
    this->steering_motor_current_fb_lf = _arg;
    return *this;
  }
  Type & set__steering_motor_current_fb_lr(
    const float & _arg)
  {
    this->steering_motor_current_fb_lr = _arg;
    return *this;
  }
  Type & set__steering_motor_current_fb_rf(
    const float & _arg)
  {
    this->steering_motor_current_fb_rf = _arg;
    return *this;
  }
  Type & set__steering_motor_current_fb_rr(
    const float & _arg)
  {
    this->steering_motor_current_fb_rr = _arg;
    return *this;
  }
  Type & set__steering_motor_oc_flag_fb_lf(
    const bool & _arg)
  {
    this->steering_motor_oc_flag_fb_lf = _arg;
    return *this;
  }
  Type & set__steering_motor_oc_flag_fb_lr(
    const bool & _arg)
  {
    this->steering_motor_oc_flag_fb_lr = _arg;
    return *this;
  }
  Type & set__steering_motor_oc_flag_fb_rf(
    const bool & _arg)
  {
    this->steering_motor_oc_flag_fb_rf = _arg;
    return *this;
  }
  Type & set__steering_motor_oc_flag_fb_rr(
    const bool & _arg)
  {
    this->steering_motor_oc_flag_fb_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__SteeringMotorCurrentFb
    std::shared_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__SteeringMotorCurrentFb
    std::shared_ptr<yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringMotorCurrentFb_ & other) const
  {
    if (this->steering_motor_current_fb_lf != other.steering_motor_current_fb_lf) {
      return false;
    }
    if (this->steering_motor_current_fb_lr != other.steering_motor_current_fb_lr) {
      return false;
    }
    if (this->steering_motor_current_fb_rf != other.steering_motor_current_fb_rf) {
      return false;
    }
    if (this->steering_motor_current_fb_rr != other.steering_motor_current_fb_rr) {
      return false;
    }
    if (this->steering_motor_oc_flag_fb_lf != other.steering_motor_oc_flag_fb_lf) {
      return false;
    }
    if (this->steering_motor_oc_flag_fb_lr != other.steering_motor_oc_flag_fb_lr) {
      return false;
    }
    if (this->steering_motor_oc_flag_fb_rf != other.steering_motor_oc_flag_fb_rf) {
      return false;
    }
    if (this->steering_motor_oc_flag_fb_rr != other.steering_motor_oc_flag_fb_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringMotorCurrentFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringMotorCurrentFb_

// alias to use template instance with default allocator
using SteeringMotorCurrentFb =
  yhs_can_interfaces::msg::SteeringMotorCurrentFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__STRUCT_HPP_
