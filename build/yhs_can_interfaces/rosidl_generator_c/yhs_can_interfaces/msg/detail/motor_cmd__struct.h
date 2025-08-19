// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCmd in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__MotorCmd
{
  bool motor_cmd_drive_enable_lf;
  bool motor_cmd_drive_enable_lr;
  bool motor_cmd_drive_enable_rf;
  bool motor_cmd_drive_enable_rr;
  bool motor_cmd_steering_enable_lf;
  bool motor_cmd_steering_enable_lr;
  bool motor_cmd_steering_enable_rf;
  bool motor_cmd_steering_enable_rr;
  bool motor_cmd_power_restart;
} yhs_can_interfaces__msg__MotorCmd;

// Struct for a sequence of yhs_can_interfaces__msg__MotorCmd.
typedef struct yhs_can_interfaces__msg__MotorCmd__Sequence
{
  yhs_can_interfaces__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
