// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__STRUCT_HPP_
#define YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'ctrl_fb'
#include "yhs_can_interfaces/msg/detail/ctrl_fb__struct.hpp"
// Member 'steering_ctrl_fb'
#include "yhs_can_interfaces/msg/detail/steering_ctrl_fb__struct.hpp"
// Member 'io_fb'
#include "yhs_can_interfaces/msg/detail/io_fb__struct.hpp"
// Member 'motor_fb'
#include "yhs_can_interfaces/msg/detail/motor_fb__struct.hpp"
// Member 'lr_wheel_fb'
#include "yhs_can_interfaces/msg/detail/lr_wheel_fb__struct.hpp"
// Member 'rr_wheel_fb'
#include "yhs_can_interfaces/msg/detail/rr_wheel_fb__struct.hpp"
// Member 'lf_wheel_fb'
#include "yhs_can_interfaces/msg/detail/lf_wheel_fb__struct.hpp"
// Member 'rf_wheel_fb'
#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__struct.hpp"
// Member 'front_angle_fb'
#include "yhs_can_interfaces/msg/detail/front_angle_fb__struct.hpp"
// Member 'rear_angle_fb'
#include "yhs_can_interfaces/msg/detail/rear_angle_fb__struct.hpp"
// Member 'bms_flag_fb'
#include "yhs_can_interfaces/msg/detail/bms_flag_fb__struct.hpp"
// Member 'bms_fb'
#include "yhs_can_interfaces/msg/detail/bms_fb__struct.hpp"
// Member 'drive_motor_current_fb'
#include "yhs_can_interfaces/msg/detail/drive_motor_current_fb__struct.hpp"
// Member 'steering_motor_current_fb'
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__struct.hpp"
// Member 'error_fb'
#include "yhs_can_interfaces/msg/detail/error_fb__struct.hpp"
// Member 'ultrasonic'
#include "yhs_can_interfaces/msg/detail/ultrasonic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yhs_can_interfaces__msg__ChassisInfoFb __attribute__((deprecated))
#else
# define DEPRECATED__yhs_can_interfaces__msg__ChassisInfoFb __declspec(deprecated)
#endif

namespace yhs_can_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChassisInfoFb_
{
  using Type = ChassisInfoFb_<ContainerAllocator>;

  explicit ChassisInfoFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ctrl_fb(_init),
    steering_ctrl_fb(_init),
    io_fb(_init),
    motor_fb(_init),
    lr_wheel_fb(_init),
    rr_wheel_fb(_init),
    lf_wheel_fb(_init),
    rf_wheel_fb(_init),
    front_angle_fb(_init),
    rear_angle_fb(_init),
    bms_flag_fb(_init),
    bms_fb(_init),
    drive_motor_current_fb(_init),
    steering_motor_current_fb(_init),
    error_fb(_init),
    ultrasonic(_init)
  {
    (void)_init;
  }

  explicit ChassisInfoFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ctrl_fb(_alloc, _init),
    steering_ctrl_fb(_alloc, _init),
    io_fb(_alloc, _init),
    motor_fb(_alloc, _init),
    lr_wheel_fb(_alloc, _init),
    rr_wheel_fb(_alloc, _init),
    lf_wheel_fb(_alloc, _init),
    rf_wheel_fb(_alloc, _init),
    front_angle_fb(_alloc, _init),
    rear_angle_fb(_alloc, _init),
    bms_flag_fb(_alloc, _init),
    bms_fb(_alloc, _init),
    drive_motor_current_fb(_alloc, _init),
    steering_motor_current_fb(_alloc, _init),
    error_fb(_alloc, _init),
    ultrasonic(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ctrl_fb_type =
    yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator>;
  _ctrl_fb_type ctrl_fb;
  using _steering_ctrl_fb_type =
    yhs_can_interfaces::msg::SteeringCtrlFb_<ContainerAllocator>;
  _steering_ctrl_fb_type steering_ctrl_fb;
  using _io_fb_type =
    yhs_can_interfaces::msg::IoFb_<ContainerAllocator>;
  _io_fb_type io_fb;
  using _motor_fb_type =
    yhs_can_interfaces::msg::MotorFb_<ContainerAllocator>;
  _motor_fb_type motor_fb;
  using _lr_wheel_fb_type =
    yhs_can_interfaces::msg::LrWheelFb_<ContainerAllocator>;
  _lr_wheel_fb_type lr_wheel_fb;
  using _rr_wheel_fb_type =
    yhs_can_interfaces::msg::RrWheelFb_<ContainerAllocator>;
  _rr_wheel_fb_type rr_wheel_fb;
  using _lf_wheel_fb_type =
    yhs_can_interfaces::msg::LfWheelFb_<ContainerAllocator>;
  _lf_wheel_fb_type lf_wheel_fb;
  using _rf_wheel_fb_type =
    yhs_can_interfaces::msg::RfWheelFb_<ContainerAllocator>;
  _rf_wheel_fb_type rf_wheel_fb;
  using _front_angle_fb_type =
    yhs_can_interfaces::msg::FrontAngleFb_<ContainerAllocator>;
  _front_angle_fb_type front_angle_fb;
  using _rear_angle_fb_type =
    yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator>;
  _rear_angle_fb_type rear_angle_fb;
  using _bms_flag_fb_type =
    yhs_can_interfaces::msg::BmsFlagFb_<ContainerAllocator>;
  _bms_flag_fb_type bms_flag_fb;
  using _bms_fb_type =
    yhs_can_interfaces::msg::BmsFb_<ContainerAllocator>;
  _bms_fb_type bms_fb;
  using _drive_motor_current_fb_type =
    yhs_can_interfaces::msg::DriveMotorCurrentFb_<ContainerAllocator>;
  _drive_motor_current_fb_type drive_motor_current_fb;
  using _steering_motor_current_fb_type =
    yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator>;
  _steering_motor_current_fb_type steering_motor_current_fb;
  using _error_fb_type =
    yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator>;
  _error_fb_type error_fb;
  using _ultrasonic_type =
    yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator>;
  _ultrasonic_type ultrasonic;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ctrl_fb(
    const yhs_can_interfaces::msg::CtrlFb_<ContainerAllocator> & _arg)
  {
    this->ctrl_fb = _arg;
    return *this;
  }
  Type & set__steering_ctrl_fb(
    const yhs_can_interfaces::msg::SteeringCtrlFb_<ContainerAllocator> & _arg)
  {
    this->steering_ctrl_fb = _arg;
    return *this;
  }
  Type & set__io_fb(
    const yhs_can_interfaces::msg::IoFb_<ContainerAllocator> & _arg)
  {
    this->io_fb = _arg;
    return *this;
  }
  Type & set__motor_fb(
    const yhs_can_interfaces::msg::MotorFb_<ContainerAllocator> & _arg)
  {
    this->motor_fb = _arg;
    return *this;
  }
  Type & set__lr_wheel_fb(
    const yhs_can_interfaces::msg::LrWheelFb_<ContainerAllocator> & _arg)
  {
    this->lr_wheel_fb = _arg;
    return *this;
  }
  Type & set__rr_wheel_fb(
    const yhs_can_interfaces::msg::RrWheelFb_<ContainerAllocator> & _arg)
  {
    this->rr_wheel_fb = _arg;
    return *this;
  }
  Type & set__lf_wheel_fb(
    const yhs_can_interfaces::msg::LfWheelFb_<ContainerAllocator> & _arg)
  {
    this->lf_wheel_fb = _arg;
    return *this;
  }
  Type & set__rf_wheel_fb(
    const yhs_can_interfaces::msg::RfWheelFb_<ContainerAllocator> & _arg)
  {
    this->rf_wheel_fb = _arg;
    return *this;
  }
  Type & set__front_angle_fb(
    const yhs_can_interfaces::msg::FrontAngleFb_<ContainerAllocator> & _arg)
  {
    this->front_angle_fb = _arg;
    return *this;
  }
  Type & set__rear_angle_fb(
    const yhs_can_interfaces::msg::RearAngleFb_<ContainerAllocator> & _arg)
  {
    this->rear_angle_fb = _arg;
    return *this;
  }
  Type & set__bms_flag_fb(
    const yhs_can_interfaces::msg::BmsFlagFb_<ContainerAllocator> & _arg)
  {
    this->bms_flag_fb = _arg;
    return *this;
  }
  Type & set__bms_fb(
    const yhs_can_interfaces::msg::BmsFb_<ContainerAllocator> & _arg)
  {
    this->bms_fb = _arg;
    return *this;
  }
  Type & set__drive_motor_current_fb(
    const yhs_can_interfaces::msg::DriveMotorCurrentFb_<ContainerAllocator> & _arg)
  {
    this->drive_motor_current_fb = _arg;
    return *this;
  }
  Type & set__steering_motor_current_fb(
    const yhs_can_interfaces::msg::SteeringMotorCurrentFb_<ContainerAllocator> & _arg)
  {
    this->steering_motor_current_fb = _arg;
    return *this;
  }
  Type & set__error_fb(
    const yhs_can_interfaces::msg::ErrorFb_<ContainerAllocator> & _arg)
  {
    this->error_fb = _arg;
    return *this;
  }
  Type & set__ultrasonic(
    const yhs_can_interfaces::msg::Ultrasonic_<ContainerAllocator> & _arg)
  {
    this->ultrasonic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yhs_can_interfaces__msg__ChassisInfoFb
    std::shared_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yhs_can_interfaces__msg__ChassisInfoFb
    std::shared_ptr<yhs_can_interfaces::msg::ChassisInfoFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisInfoFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ctrl_fb != other.ctrl_fb) {
      return false;
    }
    if (this->steering_ctrl_fb != other.steering_ctrl_fb) {
      return false;
    }
    if (this->io_fb != other.io_fb) {
      return false;
    }
    if (this->motor_fb != other.motor_fb) {
      return false;
    }
    if (this->lr_wheel_fb != other.lr_wheel_fb) {
      return false;
    }
    if (this->rr_wheel_fb != other.rr_wheel_fb) {
      return false;
    }
    if (this->lf_wheel_fb != other.lf_wheel_fb) {
      return false;
    }
    if (this->rf_wheel_fb != other.rf_wheel_fb) {
      return false;
    }
    if (this->front_angle_fb != other.front_angle_fb) {
      return false;
    }
    if (this->rear_angle_fb != other.rear_angle_fb) {
      return false;
    }
    if (this->bms_flag_fb != other.bms_flag_fb) {
      return false;
    }
    if (this->bms_fb != other.bms_fb) {
      return false;
    }
    if (this->drive_motor_current_fb != other.drive_motor_current_fb) {
      return false;
    }
    if (this->steering_motor_current_fb != other.steering_motor_current_fb) {
      return false;
    }
    if (this->error_fb != other.error_fb) {
      return false;
    }
    if (this->ultrasonic != other.ultrasonic) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisInfoFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisInfoFb_

// alias to use template instance with default allocator
using ChassisInfoFb =
  yhs_can_interfaces::msg::ChassisInfoFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yhs_can_interfaces

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__CHASSIS_INFO_FB__STRUCT_HPP_
