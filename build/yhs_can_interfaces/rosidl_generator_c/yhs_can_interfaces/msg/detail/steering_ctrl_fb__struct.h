// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/SteeringCtrlFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_CTRL_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_CTRL_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SteeringCtrlFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__SteeringCtrlFb
{
  uint8_t steering_ctrl_fb_gear;
  float steering_ctrl_fb_lrspeed;
  float steering_ctrl_fb_rfspeed;
  float steering_ctrl_fb_steering;
} yhs_can_interfaces__msg__SteeringCtrlFb;

// Struct for a sequence of yhs_can_interfaces__msg__SteeringCtrlFb.
typedef struct yhs_can_interfaces__msg__SteeringCtrlFb__Sequence
{
  yhs_can_interfaces__msg__SteeringCtrlFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__SteeringCtrlFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_CTRL_FB__STRUCT_H_
