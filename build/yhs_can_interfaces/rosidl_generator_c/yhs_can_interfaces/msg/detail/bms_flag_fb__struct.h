// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yhs_can_interfaces:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice

#ifndef YHS_CAN_INTERFACES__MSG__DETAIL__BMS_FLAG_FB__STRUCT_H_
#define YHS_CAN_INTERFACES__MSG__DETAIL__BMS_FLAG_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BmsFlagFb in the package yhs_can_interfaces.
typedef struct yhs_can_interfaces__msg__BmsFlagFb
{
  uint8_t bms_flag_fb_soc;
  bool bms_flag_fb_single_ov;
  bool bms_flag_fb_single_uv;
  bool bms_flag_fb_ov;
  bool bms_flag_fb_uv;
  bool bms_flag_fb_charge_ot;
  bool bms_flag_fb_charge_ut;
  bool bms_flag_fb_discharge_ot;
  bool bms_flag_fb_discharge_ut;
  bool bms_flag_fb_charge_oc;
  bool bms_flag_fb_discharge_oc;
  bool bms_flag_fb_short;
  bool bms_flag_fb_ic_error;
  bool bms_flag_fb_lock_mos;
  bool bms_flag_fb_charge_flag;
  bool bms_flag_fb_heating_flag;
  float bms_flag_fb_hight_temperature;
  float bms_flag_fb_low_temperature;
} yhs_can_interfaces__msg__BmsFlagFb;

// Struct for a sequence of yhs_can_interfaces__msg__BmsFlagFb.
typedef struct yhs_can_interfaces__msg__BmsFlagFb__Sequence
{
  yhs_can_interfaces__msg__BmsFlagFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yhs_can_interfaces__msg__BmsFlagFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YHS_CAN_INTERFACES__MSG__DETAIL__BMS_FLAG_FB__STRUCT_H_
