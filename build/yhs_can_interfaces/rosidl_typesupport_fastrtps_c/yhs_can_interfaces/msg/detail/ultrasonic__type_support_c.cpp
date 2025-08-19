// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/ultrasonic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yhs_can_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yhs_can_interfaces/msg/detail/ultrasonic__struct.h"
#include "yhs_can_interfaces/msg/detail/ultrasonic__functions.h"
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


// forward declare type support functions


using _Ultrasonic__ros_msg_type = yhs_can_interfaces__msg__Ultrasonic;

static bool _Ultrasonic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ultrasonic__ros_msg_type * ros_message = static_cast<const _Ultrasonic__ros_msg_type *>(untyped_ros_message);
  // Field name: front_left
  {
    cdr << ros_message->front_left;
  }

  // Field name: front_right
  {
    cdr << ros_message->front_right;
  }

  // Field name: rear_left
  {
    cdr << ros_message->rear_left;
  }

  // Field name: rear_right
  {
    cdr << ros_message->rear_right;
  }

  // Field name: left_front
  {
    cdr << ros_message->left_front;
  }

  // Field name: left_rear
  {
    cdr << ros_message->left_rear;
  }

  // Field name: right_front
  {
    cdr << ros_message->right_front;
  }

  // Field name: right_rear
  {
    cdr << ros_message->right_rear;
  }

  return true;
}

static bool _Ultrasonic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ultrasonic__ros_msg_type * ros_message = static_cast<_Ultrasonic__ros_msg_type *>(untyped_ros_message);
  // Field name: front_left
  {
    cdr >> ros_message->front_left;
  }

  // Field name: front_right
  {
    cdr >> ros_message->front_right;
  }

  // Field name: rear_left
  {
    cdr >> ros_message->rear_left;
  }

  // Field name: rear_right
  {
    cdr >> ros_message->rear_right;
  }

  // Field name: left_front
  {
    cdr >> ros_message->left_front;
  }

  // Field name: left_rear
  {
    cdr >> ros_message->left_rear;
  }

  // Field name: right_front
  {
    cdr >> ros_message->right_front;
  }

  // Field name: right_rear
  {
    cdr >> ros_message->right_rear;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yhs_can_interfaces
size_t get_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ultrasonic__ros_msg_type * ros_message = static_cast<const _Ultrasonic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name front_left
  {
    size_t item_size = sizeof(ros_message->front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right
  {
    size_t item_size = sizeof(ros_message->front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_left
  {
    size_t item_size = sizeof(ros_message->rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_right
  {
    size_t item_size = sizeof(ros_message->rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_front
  {
    size_t item_size = sizeof(ros_message->left_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_rear
  {
    size_t item_size = sizeof(ros_message->left_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_front
  {
    size_t item_size = sizeof(ros_message->right_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_rear
  {
    size_t item_size = sizeof(ros_message->right_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ultrasonic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yhs_can_interfaces
size_t max_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
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

  // member: front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rear_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_rear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_rear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yhs_can_interfaces__msg__Ultrasonic;
    is_plain =
      (
      offsetof(DataType, right_rear) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Ultrasonic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yhs_can_interfaces__msg__Ultrasonic(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ultrasonic = {
  "yhs_can_interfaces::msg",
  "Ultrasonic",
  _Ultrasonic__cdr_serialize,
  _Ultrasonic__cdr_deserialize,
  _Ultrasonic__get_serialized_size,
  _Ultrasonic__max_serialized_size
};

static rosidl_message_type_support_t _Ultrasonic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ultrasonic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yhs_can_interfaces, msg, Ultrasonic)() {
  return &_Ultrasonic__type_support;
}

#if defined(__cplusplus)
}
#endif
