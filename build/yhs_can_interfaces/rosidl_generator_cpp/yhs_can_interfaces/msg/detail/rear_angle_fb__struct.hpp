// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/RearAngleFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__REAR_ANGLE_FB__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__REAR_ANGLE_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__RearAngleFb __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__RearAngleFb __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RearAngleFb_
{
  using Type = RearAngleFb_<ContainerAllocator>;

  explicit RearAngleFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rear_angle_fb_l = 0.0f;
      this->rear_angle_fb_r = 0.0f;
    }
  }

  explicit RearAngleFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rear_angle_fb_l = 0.0f;
      this->rear_angle_fb_r = 0.0f;
    }
  }

  // field types and members
  using _rear_angle_fb_l_type =
    float;
  _rear_angle_fb_l_type rear_angle_fb_l;
  using _rear_angle_fb_r_type =
    float;
  _rear_angle_fb_r_type rear_angle_fb_r;

  // setters for named parameter idiom
  Type & set__rear_angle_fb_l(
    const float & _arg)
  {
    this->rear_angle_fb_l = _arg;
    return *this;
  }
  Type & set__rear_angle_fb_r(
    const float & _arg)
  {
    this->rear_angle_fb_r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__RearAngleFb
    std::shared_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__RearAngleFb
    std::shared_ptr<yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RearAngleFb_ & other) const
  {
    if (this->rear_angle_fb_l != other.rear_angle_fb_l) {
      return false;
    }
    if (this->rear_angle_fb_r != other.rear_angle_fb_r) {
      return false;
    }
    return true;
  }
  bool operator!=(const RearAngleFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RearAngleFb_

// alias to use template instance with default allocator
using RearAngleFb =
  yhs_can_interfaces::msg::RearAngleFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__REAR_ANGLE_FB__STRUCT_HPP_
