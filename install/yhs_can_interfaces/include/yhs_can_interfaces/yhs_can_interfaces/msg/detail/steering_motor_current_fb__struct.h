// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/SteeringMotorCurrentFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SteeringMotorCurrentFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__SteeringMotorCurrentFb
{
  float steering_motor_current_fb_lf;
  float steering_motor_current_fb_lr;
  float steering_motor_current_fb_rf;
  float steering_motor_current_fb_rr;
  bool steering_motor_oc_flag_fb_lf;
  bool steering_motor_oc_flag_fb_lr;
  bool steering_motor_oc_flag_fb_rf;
  bool steering_motor_oc_flag_fb_rr;
} yhs_can_interfaces__msg__SteeringMotorCurrentFb;

// Struct for a sequence of yhs_can_interfaces__msg__SteeringMotorCurrentFb.
typedef struct yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence
{
  yhs_can_interfaces__msg__SteeringMotorCurrentFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__STEERING_MOTOR_CURRENT_FB__STRUCT_H_
