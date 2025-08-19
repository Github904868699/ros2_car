// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/ErrorFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__ErrorFb __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__ErrorFb __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorFb_
{
  using Type = ErrorFb_<ContainerAllocator>;

  explicit ErrorFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_fb_level = 0;
      this->error_fb_device_type = 0;
      this->error_fb_devive_id = 0;
      this->error_fb_emergency_code = 0;
      this->error_fb_register_code = 0;
    }
  }

  explicit ErrorFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_fb_level = 0;
      this->error_fb_device_type = 0;
      this->error_fb_devive_id = 0;
      this->error_fb_emergency_code = 0;
      this->error_fb_register_code = 0;
    }
  }

  // field types and members
  using _error_fb_level_type =
    uint8_t;
  _error_fb_level_type error_fb_level;
  using _error_fb_device_type_type =
    uint8_t;
  _error_fb_device_type_type error_fb_device_type;
  using _error_fb_devive_id_type =
    uint8_t;
  _error_fb_devive_id_type error_fb_devive_id;
  using _error_fb_emergency_code_type =
    uint8_t;
  _error_fb_emergency_code_type error_fb_emergency_code;
  using _error_fb_register_code_type =
    uint16_t;
  _error_fb_register_code_type error_fb_register_code;

  // setters for named parameter idiom
  Type & set__error_fb_level(
    const uint8_t & _arg)
  {
    this->error_fb_level = _arg;
    return *this;
  }
  Type & set__error_fb_device_type(
    const uint8_t & _arg)
  {
    this->error_fb_device_type = _arg;
    return *this;
  }
  Type & set__error_fb_devive_id(
    const uint8_t & _arg)
  {
    this->error_fb_devive_id = _arg;
    return *this;
  }
  Type & set__error_fb_emergency_code(
    const uint8_t & _arg)
  {
    this->error_fb_emergency_code = _arg;
    return *this;
  }
  Type & set__error_fb_register_code(
    const uint16_t & _arg)
  {
    this->error_fb_register_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__ErrorFb
    std::shared_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__ErrorFb
    std::shared_ptr<yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorFb_ & other) const
  {
    if (this->error_fb_level != other.error_fb_level) {
      return false;
    }
    if (this->error_fb_device_type != other.error_fb_device_type) {
      return false;
    }
    if (this->error_fb_devive_id != other.error_fb_devive_id) {
      return false;
    }
    if (this->error_fb_emergency_code != other.error_fb_emergency_code) {
      return false;
    }
    if (this->error_fb_register_code != other.error_fb_register_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorFb_

// alias to use template instance with default allocator
using ErrorFb =
  yhs_can_interfaces::msg::ErrorFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__STRUCT_HPP_
