// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/RearAngleFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__REAR_ANGLE_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__REAR_ANGLE_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RearAngleFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__RearAngleFb
{
  float rear_angle_fb_l;
  float rear_angle_fb_r;
} yhs_can_interfaces__msg__RearAngleFb;

// Struct for a sequence of yhs_can_interfaces__msg__RearAngleFb.
typedef struct yhs_can_interfaces__msg__RearAngleFb__Sequence
{
  yhs_can_interfaces__msg__RearAngleFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__RearAngleFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__REAR_ANGLE_FB__STRUCT_H_
