// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yhs_can_interfaces:msg/SteeringCtrlCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yhs_can_interfaces/msg/detail/steering_ctrl_cmd__struct.hpp"
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

void SteeringCtrlCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yhs_can_interfaces::msg::SteeringCtrlCmd(_init);
}

void SteeringCtrlCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yhs_can_interfaces::msg::SteeringCtrlCmd *>(message_memory);
  typed_message->~SteeringCtrlCmd();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SteeringCtrlCmd_message_member_array[3] = {
  {
    "ctrl_cmd_gear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::SteeringCtrlCmd, ctrl_cmd_gear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_ctrl_cmd_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::SteeringCtrlCmd, steering_ctrl_cmd_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_ctrl_cmd_steering",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yhs_can_interfaces::msg::SteeringCtrlCmd, steering_ctrl_cmd_steering),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SteeringCtrlCmd_message_members = {
  "yhs_can_interfaces::msg",  // message namespace
  "SteeringCtrlCmd",  // message name
  3,  // number of fields
  sizeof(yhs_can_interfaces::msg::SteeringCtrlCmd),
  SteeringCtrlCmd_message_member_array,  // message members
  SteeringCtrlCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  SteeringCtrlCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SteeringCtrlCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SteeringCtrlCmd_message_members,
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
get_message_type_support_handle<yhs_can_interfaces::msg::SteeringCtrlCmd>()
{
  return &::yhs_can_interfaces::msg::rosidl_typesupport_introspection_cpp::SteeringCtrlCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yhs_can_interfaces, msg, SteeringCtrlCmd)() {
  return &::yhs_can_interfaces::msg::rosidl_typesupport_introspection_cpp::SteeringCtrlCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
