// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yhs_can_interfaces:msg/SteeringMotorCurrentFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__struct.hpp"

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
  const yhs_can_interfaces::msg::SteeringMotorCurrentFb & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: steering_motor_current_fb_lf
  cdr << ros_message.steering_motor_current_fb_lf;
  // Member: steering_motor_current_fb_lr
  cdr << ros_message.steering_motor_current_fb_lr;
  // Member: steering_motor_current_fb_rf
  cdr << ros_message.steering_motor_current_fb_rf;
  // Member: steering_motor_current_fb_rr
  cdr << ros_message.steering_motor_current_fb_rr;
  // Member: steering_motor_oc_flag_fb_lf
  cdr << (ros_message.steering_motor_oc_flag_fb_lf ? true : false);
  // Member: steering_motor_oc_flag_fb_lr
  cdr << (ros_message.steering_motor_oc_flag_fb_lr ? true : false);
  // Member: steering_motor_oc_flag_fb_rf
  cdr << (ros_message.steering_motor_oc_flag_fb_rf ? true : false);
  // Member: steering_motor_oc_flag_fb_rr
  cdr << (ros_message.steering_motor_oc_flag_fb_rr ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yhs_can_interfaces::msg::SteeringMotorCurrentFb & ros_message)
{
  // Member: steering_motor_current_fb_lf
  cdr >> ros_message.steering_motor_current_fb_lf;

  // Member: steering_motor_current_fb_lr
  cdr >> ros_message.steering_motor_current_fb_lr;

  // Member: steering_motor_current_fb_rf
  cdr >> ros_message.steering_motor_current_fb_rf;

  // Member: steering_motor_current_fb_rr
  cdr >> ros_message.steering_motor_current_fb_rr;

  // Member: steering_motor_oc_flag_fb_lf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steering_motor_oc_flag_fb_lf = tmp ? true : false;
  }

  // Member: steering_motor_oc_flag_fb_lr
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steering_motor_oc_flag_fb_lr = tmp ? true : false;
  }

  // Member: steering_motor_oc_flag_fb_rf
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steering_motor_oc_flag_fb_rf = tmp ? true : false;
  }

  // Member: steering_motor_oc_flag_fb_rr
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steering_motor_oc_flag_fb_rr = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
get_serialized_size(
  const yhs_can_interfaces::msg::SteeringMotorCurrentFb & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: steering_motor_current_fb_lf
  {
    size_t item_size = sizeof(ros_message.steering_motor_current_fb_lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_current_fb_lr
  {
    size_t item_size = sizeof(ros_message.steering_motor_current_fb_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_current_fb_rf
  {
    size_t item_size = sizeof(ros_message.steering_motor_current_fb_rf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_current_fb_rr
  {
    size_t item_size = sizeof(ros_message.steering_motor_current_fb_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_oc_flag_fb_lf
  {
    size_t item_size = sizeof(ros_message.steering_motor_oc_flag_fb_lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_oc_flag_fb_lr
  {
    size_t item_size = sizeof(ros_message.steering_motor_oc_flag_fb_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_oc_flag_fb_rf
  {
    size_t item_size = sizeof(ros_message.steering_motor_oc_flag_fb_rf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_motor_oc_flag_fb_rr
  {
    size_t item_size = sizeof(ros_message.steering_motor_oc_flag_fb_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yhs_can_interfaces
max_serialized_size_SteeringMotorCurrentFb(
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


  // Member: steering_motor_current_fb_lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_motor_current_fb_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_motor_current_fb_rf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_motor_current_fb_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_motor_oc_flag_fb_lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_motor_oc_flag_fb_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_motor_oc_flag_fb_rf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_motor_oc_flag_fb_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yhs_can_interfaces::msg::SteeringMotorCurrentFb;
    is_plain =
      (
      offsetof(DataType, steering_motor_oc_flag_fb_rr) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SteeringMotorCurrentFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yhs_can_interfaces::msg::SteeringMotorCurrentFb *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SteeringMotorCurrentFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yhs_can_interfaces::msg::SteeringMotorCurrentFb *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SteeringMotorCurrentFb__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yhs_can_interfaces::msg::SteeringMotorCurrentFb *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SteeringMotorCurrentFb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SteeringMotorCurrentFb(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SteeringMotorCurrentFb__callbacks = {
  "yhs_can_interfaces::msg",
  "SteeringMotorCurrentFb",
  _SteeringMotorCurrentFb__cdr_serialize,
  _SteeringMotorCurrentFb__cdr_deserialize,
  _SteeringMotorCurrentFb__get_serialized_size,
  _SteeringMotorCurrentFb__max_serialized_size
};

static rosidl_message_type_support_t _SteeringMotorCurrentFb__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SteeringMotorCurrentFb__callbacks,
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
get_message_type_support_handle<yhs_can_interfaces::msg::SteeringMotorCurrentFb>()
{
  return &yhs_can_interfaces::msg::typesupport_fastrtps_cpp::_SteeringMotorCurrentFb__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yhs_can_interfaces, msg, SteeringMotorCurrentFb)() {
  return &yhs_can_interfaces::msg::typesupport_fastrtps_cpp::_SteeringMotorCurrentFb__handle;
}

#ifdef __cplusplus
}
#endif
