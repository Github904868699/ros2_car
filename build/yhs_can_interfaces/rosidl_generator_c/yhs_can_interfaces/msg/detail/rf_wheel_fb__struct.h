// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/RfWheelFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RfWheelFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__RfWheelFb
{
  float rf_wheel_fb_velocity;
  int32_t rf_wheel_fb_pulse;
} yhs_can_interfaces__msg__RfWheelFb;

// Struct for a sequence of yhs_can_interfaces__msg__RfWheelFb.
typedef struct yhs_can_interfaces__msg__RfWheelFb__Sequence
{
  yhs_can_interfaces__msg__RfWheelFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__RfWheelFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__RF_WHEEL_FB__STRUCT_H_
