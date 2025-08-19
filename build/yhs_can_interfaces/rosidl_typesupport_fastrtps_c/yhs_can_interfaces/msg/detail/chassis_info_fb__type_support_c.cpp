// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/chassis_info_fb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yhs_can_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yhs_can_interfaces/msg/detail/chassis_info_fb__struct.h"
#include "yhs_can_interfaces/msg/detail/chassis_info_fb__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "yhs_can_interfaces/msg/detail/bms_fb__functions.h"  // bms_fb
#include "yhs_can_interfaces/msg/detail/bms_flag_fb__functions.h"  // bms_flag_fb
#include "yhs_can_interfaces/msg/detail/ctrl_fb__functions.h"  // ctrl_fb
#include "yhs_can_interfaces/msg/detail/drive_motor_current_fb__functions.h"  // drive_motor_current_fb
#include "yhs_can_interfaces/msg/detail/error_fb__functions.h"  // error_fb
#include "yhs_can_interfaces/msg/detail/front_angle_fb__functions.h"  // front_angle_fb
#include "yhs_can_interfaces/msg/detail/io_fb__functions.h"  // io_fb
#include "yhs_can_interfaces/msg/detail/lf_wheel_fb__functions.h"  // lf_wheel_fb
#include "yhs_can_interfaces/msg/detail/lr_wheel_fb__functions.h"  // lr_wheel_fb
#include "yhs_can_interfaces/msg/detail/motor_fb__functions.h"  // motor_fb
#include "yhs_can_interfaces/msg/detail/rear_angle_fb__functions.h"  // rear_angle_fb
#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__functions.h"  // rf_wheel_fb
#include "yhs_can_interfaces/msg/detail/rr_wheel_fb__functions.h"  // rr_wheel_fb
#include "yhs_can_interfaces/msg/detail/steering_ctrl_fb__functions.h"  // steering_ctrl_fb
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__functions.h"  // steering_motor_current_fb
#include "yhs_can_interfaces/msg/detail/ultrasonic__functions.h"  // ultrasonic

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yhs_can_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yhs_can_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yhs_can_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
size_t get_serialized_size_yhs_can_interfaces__msg__BmsFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__BmsFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, BmsFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__BmsFlagFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__BmsFlagFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, BmsFlagFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__CtrlFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__CtrlFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, CtrlFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__DriveMotorCurrentFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__DriveMotorCurrentFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, DriveMotorCurrentFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__ErrorFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__ErrorFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, ErrorFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__FrontAngleFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__FrontAngleFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, FrontAngleFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__IoFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__IoFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, IoFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__LfWheelFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__LfWheelFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, LfWheelFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__LrWheelFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__LrWheelFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, LrWheelFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__MotorFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__MotorFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, MotorFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__RearAngleFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__RearAngleFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RearAngleFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__RfWheelFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__RfWheelFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RfWheelFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__RrWheelFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__RrWheelFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RrWheelFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__SteeringCtrlFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__SteeringCtrlFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, SteeringCtrlFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__SteeringMotorCurrentFb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__SteeringMotorCurrentFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, SteeringMotorCurrentFb)();
size_t get_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, Ultrasonic)();


using _ChassisInfoFb__ros_msg_type = yhs_can_interfaces__msg__ChassisInfoFb;

static bool _ChassisInfoFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChassisInfoFb__ros_msg_type * ros_message = static_cast<const _ChassisInfoFb__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: ctrl_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, CtrlFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ctrl_fb, cdr))
    {
      return false;
    }
  }

  // Field name: steering_ctrl_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, SteeringCtrlFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering_ctrl_fb, cdr))
    {
      return false;
    }
  }

  // Field name: io_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, IoFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->io_fb, cdr))
    {
      return false;
    }
  }

  // Field name: motor_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, MotorFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->motor_fb, cdr))
    {
      return false;
    }
  }

  // Field name: lr_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, LrWheelFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lr_wheel_fb, cdr))
    {
      return false;
    }
  }

  // Field name: rr_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RrWheelFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rr_wheel_fb, cdr))
    {
      return false;
    }
  }

  // Field name: lf_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, LfWheelFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lf_wheel_fb, cdr))
    {
      return false;
    }
  }

  // Field name: rf_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RfWheelFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rf_wheel_fb, cdr))
    {
      return false;
    }
  }

  // Field name: front_angle_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, FrontAngleFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front_angle_fb, cdr))
    {
      return false;
    }
  }

  // Field name: rear_angle_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RearAngleFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_angle_fb, cdr))
    {
      return false;
    }
  }

  // Field name: bms_flag_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, BmsFlagFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bms_flag_fb, cdr))
    {
      return false;
    }
  }

  // Field name: bms_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, BmsFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bms_fb, cdr))
    {
      return false;
    }
  }

  // Field name: drive_motor_current_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, DriveMotorCurrentFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->drive_motor_current_fb, cdr))
    {
      return false;
    }
  }

  // Field name: steering_motor_current_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, SteeringMotorCurrentFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering_motor_current_fb, cdr))
    {
      return false;
    }
  }

  // Field name: error_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, ErrorFb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error_fb, cdr))
    {
      return false;
    }
  }

  // Field name: ultrasonic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, Ultrasonic
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ultrasonic, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ChassisInfoFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChassisInfoFb__ros_msg_type * ros_message = static_cast<_ChassisInfoFb__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: ctrl_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, CtrlFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ctrl_fb))
    {
      return false;
    }
  }

  // Field name: steering_ctrl_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, SteeringCtrlFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering_ctrl_fb))
    {
      return false;
    }
  }

  // Field name: io_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, IoFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->io_fb))
    {
      return false;
    }
  }

  // Field name: motor_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, MotorFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->motor_fb))
    {
      return false;
    }
  }

  // Field name: lr_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, LrWheelFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lr_wheel_fb))
    {
      return false;
    }
  }

  // Field name: rr_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RrWheelFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rr_wheel_fb))
    {
      return false;
    }
  }

  // Field name: lf_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, LfWheelFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lf_wheel_fb))
    {
      return false;
    }
  }

  // Field name: rf_wheel_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RfWheelFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rf_wheel_fb))
    {
      return false;
    }
  }

  // Field name: front_angle_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, FrontAngleFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front_angle_fb))
    {
      return false;
    }
  }

  // Field name: rear_angle_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, RearAngleFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_angle_fb))
    {
      return false;
    }
  }

  // Field name: bms_flag_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, BmsFlagFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bms_flag_fb))
    {
      return false;
    }
  }

  // Field name: bms_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, BmsFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bms_fb))
    {
      return false;
    }
  }

  // Field name: drive_motor_current_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, DriveMotorCurrentFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->drive_motor_current_fb))
    {
      return false;
    }
  }

  // Field name: steering_motor_current_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, SteeringMotorCurrentFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering_motor_current_fb))
    {
      return false;
    }
  }

  // Field name: error_fb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, ErrorFb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error_fb))
    {
      return false;
    }
  }

  // Field name: ultrasonic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, Ultrasonic
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ultrasonic))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yhs_can_interfaces
size_t get_serialized_size_yhs_can_interfaces__msg__ChassisInfoFb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChassisInfoFb__ros_msg_type * ros_message = static_cast<const _ChassisInfoFb__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ctrl_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__CtrlFb(
    &(ros_message->ctrl_fb), current_alignment);
  // field.name steering_ctrl_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__SteeringCtrlFb(
    &(ros_message->steering_ctrl_fb), current_alignment);
  // field.name io_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__IoFb(
    &(ros_message->io_fb), current_alignment);
  // field.name motor_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__MotorFb(
    &(ros_message->motor_fb), current_alignment);
  // field.name lr_wheel_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__LrWheelFb(
    &(ros_message->lr_wheel_fb), current_alignment);
  // field.name rr_wheel_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__RrWheelFb(
    &(ros_message->rr_wheel_fb), current_alignment);
  // field.name lf_wheel_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__LfWheelFb(
    &(ros_message->lf_wheel_fb), current_alignment);
  // field.name rf_wheel_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__RfWheelFb(
    &(ros_message->rf_wheel_fb), current_alignment);
  // field.name front_angle_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__FrontAngleFb(
    &(ros_message->front_angle_fb), current_alignment);
  // field.name rear_angle_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__RearAngleFb(
    &(ros_message->rear_angle_fb), current_alignment);
  // field.name bms_flag_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__BmsFlagFb(
    &(ros_message->bms_flag_fb), current_alignment);
  // field.name bms_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__BmsFb(
    &(ros_message->bms_fb), current_alignment);
  // field.name drive_motor_current_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__DriveMotorCurrentFb(
    &(ros_message->drive_motor_current_fb), current_alignment);
  // field.name steering_motor_current_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__SteeringMotorCurrentFb(
    &(ros_message->steering_motor_current_fb), current_alignment);
  // field.name error_fb

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__ErrorFb(
    &(ros_message->error_fb), current_alignment);
  // field.name ultrasonic

  current_alignment += get_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
    &(ros_message->ultrasonic), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ChassisInfoFb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yhs_can_interfaces__msg__ChassisInfoFb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yhs_can_interfaces
size_t max_serialized_size_yhs_can_interfaces__msg__ChassisInfoFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ctrl_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__CtrlFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: steering_ctrl_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__SteeringCtrlFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: io_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__IoFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: motor_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__MotorFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lr_wheel_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__LrWheelFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rr_wheel_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__RrWheelFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lf_wheel_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__LfWheelFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rf_wheel_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__RfWheelFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: front_angle_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__FrontAngleFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rear_angle_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__RearAngleFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bms_flag_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__BmsFlagFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bms_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__BmsFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: drive_motor_current_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__DriveMotorCurrentFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: steering_motor_current_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__SteeringMotorCurrentFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: error_fb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__ErrorFb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ultrasonic
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yhs_can_interfaces__msg__ChassisInfoFb;
    is_plain =
      (
      offsetof(DataType, ultrasonic) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChassisInfoFb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yhs_can_interfaces__msg__ChassisInfoFb(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChassisInfoFb = {
  "yhs_can_interfaces::msg",
  "ChassisInfoFb",
  _ChassisInfoFb__cdr_serialize,
  _ChassisInfoFb__cdr_deserialize,
  _ChassisInfoFb__get_serialized_size,
  _ChassisInfoFb__max_serialized_size
};

static rosidl_message_type_support_t _ChassisInfoFb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChassisInfoFb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, ChassisInfoFb)() {
  return &_ChassisInfoFb__type_support;
}

#if defined(__cplusplus)
}
#endif
