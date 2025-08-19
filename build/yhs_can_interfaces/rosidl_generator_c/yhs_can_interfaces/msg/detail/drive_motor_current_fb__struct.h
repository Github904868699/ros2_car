// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/DriveMotorCurrentFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__DRIVE_MOTOR_CURRENT_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__DRIVE_MOTOR_CURRENT_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DriveMotorCurrentFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__DriveMotorCurrentFb
{
  float drive_motor_current_fb_lf;
  float drive_motor_current_fb_lr;
  float drive_motor_current_fb_rf;
  float drive_motor_current_fb_rr;
  bool drive_motor_oc_flag_fb_lf;
  bool drive_motor_oc_flag_fb_lr;
  bool drive_motor_oc_flag_fb_rf;
  bool drive_motor_oc_flag_fb_rr;
} yhs_can_interfaces__msg__DriveMotorCurrentFb;

// Struct for a sequence of yhs_can_interfaces__msg__DriveMotorCurrentFb.
typedef struct yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence
{
  yhs_can_interfaces__msg__DriveMotorCurrentFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__DRIVE_MOTOR_CURRENT_FB__STRUCT_H_
