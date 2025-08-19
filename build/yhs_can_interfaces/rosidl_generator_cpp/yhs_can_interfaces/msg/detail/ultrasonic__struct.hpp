// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__Ultrasonic __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__Ultrasonic __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ultrasonic_
{
  using Type = Ultrasonic_<ContainerAllocator>;

  explicit Ultrasonic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0;
      this->front_right = 0;
      this->rear_left = 0;
      this->rear_right = 0;
      this->left_front = 0;
      this->left_rear = 0;
      this->right_front = 0;
      this->right_rear = 0;
    }
  }

  explicit Ultrasonic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0;
      this->front_right = 0;
      this->rear_left = 0;
      this->rear_right = 0;
      this->left_front = 0;
      this->left_rear = 0;
      this->right_front = 0;
      this->right_rear = 0;
    }
  }

  // field types and members
  using _front_left_type =
    uint16_t;
  _front_left_type front_left;
  using _front_right_type =
    uint16_t;
  _front_right_type front_right;
  using _rear_left_type =
    uint16_t;
  _rear_left_type rear_left;
  using _rear_right_type =
    uint16_t;
  _rear_right_type rear_right;
  using _left_front_type =
    uint16_t;
  _left_front_type left_front;
  using _left_rear_type =
    uint16_t;
  _left_rear_type left_rear;
  using _right_front_type =
    uint16_t;
  _right_front_type right_front;
  using _right_rear_type =
    uint16_t;
  _right_rear_type right_rear;

  // setters for named parameter idiom
  Type & set__front_left(
    const uint16_t & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const uint16_t & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const uint16_t & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_right(
    const uint16_t & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }
  Type & set__left_front(
    const uint16_t & _arg)
  {
    this->left_front = _arg;
    return *this;
  }
  Type & set__left_rear(
    const uint16_t & _arg)
  {
    this->left_rear = _arg;
    return *this;
  }
  Type & set__right_front(
    const uint16_t & _arg)
  {
    this->right_front = _arg;
    return *this;
  }
  Type & set__right_rear(
    const uint16_t & _arg)
  {
    this->right_rear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__Ultrasonic
    std::shared_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__Ultrasonic
    std::shared_ptr<yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ultrasonic_ & other) const
  {
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    if (this->left_front != other.left_front) {
      return false;
    }
    if (this->left_rear != other.left_rear) {
      return false;
    }
    if (this->right_front != other.right_front) {
      return false;
    }
    if (this->right_rear != other.right_rear) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ultrasonic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ultrasonic_

// alias to use template instance with default allocator
using Ultrasonic =
  yhs_can_interfaces::msg::Ultrasonic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__STRUCT_HPP_
