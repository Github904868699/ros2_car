// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/ultrasonic__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yhs_can_interfaces/msg/detail/ultrasonic__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace yhs_can_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
cdr_serialize(
  const yhs_can_interfaces::msg::Ultrasonic & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front_left
  cdr << ros_message.front_left;
  // Member: front_right
  cdr << ros_message.front_right;
  // Member: rear_left
  cdr << ros_message.rear_left;
  // Member: rear_right
  cdr << ros_message.rear_right;
  // Member: left_front
  cdr << ros_message.left_front;
  // Member: left_rear
  cdr << ros_message.left_rear;
  // Member: right_front
  cdr << ros_message.right_front;
  // Member: right_rear
  cdr << ros_message.right_rear;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yhs_can_interfaces::msg::Ultrasonic & ros_message)
{
  // Member: front_left
  cdr >> ros_message.front_left;

  // Member: front_right
  cdr >> ros_message.front_right;

  // Member: rear_left
  cdr >> ros_message.rear_left;

  // Member: rear_right
  cdr >> ros_message.rear_right;

  // Member: left_front
  cdr >> ros_message.left_front;

  // Member: left_rear
  cdr >> ros_message.left_rear;

  // Member: right_front
  cdr >> ros_message.right_front;

  // Member: right_rear
  cdr >> ros_message.right_rear;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
get_serialized_size(
  const yhs_can_interfaces::msg::Ultrasonic & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front_left
  {
    size_t item_size = sizeof(ros_message.front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_right
  {
    size_t item_size = sizeof(ros_message.front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_left
  {
    size_t item_size = sizeof(ros_message.rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_right
  {
    size_t item_size = sizeof(ros_message.rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_front
  {
    size_t item_size = sizeof(ros_message.left_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_rear
  {
    size_t item_size = sizeof(ros_message.left_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_front
  {
    size_t item_size = sizeof(ros_message.right_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_rear
  {
    size_t item_size = sizeof(ros_message.right_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
max_serialized_size_Ultrasonic(
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


  // Member: front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rear_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_rear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_rear
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
    using DataType = yhs_can_interfaces::msg::Ultrasonic;
    is_plain =
      (
      offsetof(DataType, right_rear) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Ultrasonic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yhs_can_interfaces::msg::Ultrasonic *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Ultrasonic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yhs_can_interfaces::msg::Ultrasonic *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Ultrasonic__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yhs_can_interfaces::msg::Ultrasonic *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Ultrasonic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Ultrasonic(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Ultrasonic__callbacks = {
  "yhs_can_interfaces::msg",
  "Ultrasonic",
  _Ultrasonic__cdr_serialize,
  _Ultrasonic__cdr_deserialize,
  _Ultrasonic__get_serialized_size,
  _Ultrasonic__max_serialized_size
};

static rosidl_message_type_support_t _Ultrasonic__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ultrasonic__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yhs_can_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yhs_can_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<yhs_can_interfaces::msg::Ultrasonic>()
{
  return &yhs_can_interfaces::msg::typesupport_fastrtps_cpp::_Ultrasonic__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yhs_can_interfaces, msg, Ultrasonic)() {
  return &yhs_can_interfaces::msg::typesupport_fastrtps_cpp::_Ultrasonic__handle;
}

#ifdef __cplusplus
}
#endif
