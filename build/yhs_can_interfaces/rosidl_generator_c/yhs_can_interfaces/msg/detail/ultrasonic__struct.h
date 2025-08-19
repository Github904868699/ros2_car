// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Ultrasonic in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__Ultrasonic
{
  uint16_t front_left;
  uint16_t front_right;
  uint16_t rear_left;
  uint16_t rear_right;
  uint16_t left_front;
  uint16_t left_rear;
  uint16_t right_front;
  uint16_t right_rear;
} yhs_can_interfaces__msg__Ultrasonic;

// Struct for a sequence of yhs_can_interfaces__msg__Ultrasonic.
typedef struct yhs_can_interfaces__msg__Ultrasonic__Sequence
{
  yhs_can_interfaces__msg__Ultrasonic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__Ultrasonic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__ULTRASONIC__STRUCT_H_
