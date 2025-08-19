// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/ErrorFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ErrorFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__ErrorFb
{
  uint8_t error_fb_level;
  uint8_t error_fb_device_type;
  uint8_t error_fb_devive_id;
  uint8_t error_fb_emergency_code;
  uint16_t error_fb_register_code;
} yhs_can_interfaces__msg__ErrorFb;

// Struct for a sequence of yhs_can_interfaces__msg__ErrorFb.
typedef struct yhs_can_interfaces__msg__ErrorFb__Sequence
{
  yhs_can_interfaces__msg__ErrorFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__ErrorFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ERROR_FB__STRUCT_H_
