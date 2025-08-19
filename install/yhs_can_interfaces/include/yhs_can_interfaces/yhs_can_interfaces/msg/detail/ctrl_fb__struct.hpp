// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/CtrlFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__CTRL_FB__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__CTRL_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__CtrlFb __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__CtrlFb __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtrlFb_
{
  using Type = CtrlFb_<ContainerAllocator>;

  explicit CtrlFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_fb_gear = 0;
      this->ctrl_fb_x_linear = 0.0f;
      this->ctrl_fb_z_angular = 0.0f;
      this->ctrl_fb_y_linear = 0.0f;
    }
  }

  explicit CtrlFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_fb_gear = 0;
      this->ctrl_fb_x_linear = 0.0f;
      this->ctrl_fb_z_angular = 0.0f;
      this->ctrl_fb_y_linear = 0.0f;
    }
  }

  // field types and members
  using _ctrl_fb_gear_type =
    uint8_t;
  _ctrl_fb_gear_type ctrl_fb_gear;
  using _ctrl_fb_x_linear_type =
    float;
  _ctrl_fb_x_linear_type ctrl_fb_x_linear;
  using _ctrl_fb_z_angular_type =
    float;
  _ctrl_fb_z_angular_type ctrl_fb_z_angular;
  using _ctrl_fb_y_linear_type =
    float;
  _ctrl_fb_y_linear_type ctrl_fb_y_linear;

  // setters for named parameter idiom
  Type & set__ctrl_fb_gear(
    const uint8_t & _arg)
  {
    this->ctrl_fb_gear = _arg;
    return *this;
  }
  Type & set__ctrl_fb_x_linear(
    const float & _arg)
  {
    this->ctrl_fb_x_linear = _arg;
    return *this;
  }
  Type & set__ctrl_fb_z_angular(
    const float & _arg)
  {
    this->ctrl_fb_z_angular = _arg;
    return *this;
  }
  Type & set__ctrl_fb_y_linear(
    const float & _arg)
  {
    this->ctrl_fb_y_linear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__CtrlFb
    std::shared_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__CtrlFb
    std::shared_ptr<yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtrlFb_ & other) const
  {
    if (this->ctrl_fb_gear != other.ctrl_fb_gear) {
      return false;
    }
    if (this->ctrl_fb_x_linear != other.ctrl_fb_x_linear) {
      return false;
    }
    if (this->ctrl_fb_z_angular != other.ctrl_fb_z_angular) {
      return false;
    }
    if (this->ctrl_fb_y_linear != other.ctrl_fb_y_linear) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtrlFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtrlFb_

// alias to use template instance with default allocator
using CtrlFb =
  yhs_can_interfaces::msg::CtrlFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__CTRL_FB__STRUCT_HPP_
