// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yhs_can_interfaces/msg/detail/ultrasonic__rosidl_typesupport_introspection_c.h"
#include "yhs_can_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yhs_can_interfaces/msg/detail/ultrasonic__functions.h"
#include "yhs_can_interfaces/msg/detail/ultrasonic__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yhs_can_interfaces__msg__Ultrasonic__init(message_memory);
}

void yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_fini_function(void * message_memory)
{
  yhs_can_interfaces__msg__Ultrasonic__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_member_array[8] = {
  {
    "front_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, front_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, front_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, rear_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, rear_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, left_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, left_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, right_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces__msg__Ultrasonic, right_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_members = {
  "yhs_can_interfaces__msg",  // message namespace
  "Ultrasonic",  // message name
  8,  // number of fields
  sizeof(yhs_can_interfaces__msg__Ultrasonic),
  yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_member_array,  // message members
  yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_init_function,  // function to initialize message memory (memory has to be allocated)
  yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_type_support_handle = {
  0,
  &yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yhs_can_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yhs_can_interfaces, msg, Ultrasonic)() {
  if (!yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_type_support_handle.typesupport_identifier) {
    yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yhs_can_interfaces__msg__Ultrasonic__rosidl_typesupport_introspection_c__Ultrasonic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
