// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yhs_can_interfaces:msg/DriveMotorCurrentFb.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yhs_can_interfaces/msg/detail/drive_motor_current_fb__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yhs_can_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DriveMotorCurrentFb_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yhs_can_interfaces::msg::DriveMotorCurrentFb(_init);
}

void DriveMotorCurrentFb_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yhs_can_interfaces::msg::DriveMotorCurrentFb *>(message_memory);
  typed_message->~DriveMotorCurrentFb();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DriveMotorCurrentFb_message_member_array[8] = {
  {
    "drive_motor_current_fb_lf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_current_fb_lf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_current_fb_lr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_current_fb_lr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_current_fb_rf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_current_fb_rf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_current_fb_rr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_current_fb_rr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_oc_flag_fb_lf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_oc_flag_fb_lf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_oc_flag_fb_lr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_oc_flag_fb_lr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_oc_flag_fb_rf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_oc_flag_fb_rf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_motor_oc_flag_fb_rr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::DriveMotorCurrentFb, drive_motor_oc_flag_fb_rr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DriveMotorCurrentFb_message_members = {
  "yhs_can_interfaces::msg",  // message namespace
  "DriveMotorCurrentFb",  // message name
  8,  // number of fields
  sizeof(yhs_can_interfaces::msg::DriveMotorCurrentFb),
  DriveMotorCurrentFb_message_member_array,  // message members
  DriveMotorCurrentFb_init_function,  // function to initialize message memory (memory has to be allocated)
  DriveMotorCurrentFb_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DriveMotorCurrentFb_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DriveMotorCurrentFb_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yhs_can_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yhs_can_interfaces::msg::DriveMotorCurrentFb>()
{
  return &::yhs_can_interfaces::msg::rosidl_typesupport_introspection_cpp::DriveMotorCurrentFb_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yhs_can_interfaces, msg, DriveMotorCurrentFb)() {
  return &::yhs_can_interfaces::msg::rosidl_typesupport_introspection_cpp::DriveMotorCurrentFb_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
