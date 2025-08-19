// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/chassis_info_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ctrl_fb`
#include "yhs_can_interfaces/msg/detail/ctrl_fb__functions.h"
// Member `steering_ctrl_fb`
#include "yhs_can_interfaces/msg/detail/steering_ctrl_fb__functions.h"
// Member `io_fb`
#include "yhs_can_interfaces/msg/detail/io_fb__functions.h"
// Member `motor_fb`
#include "yhs_can_interfaces/msg/detail/motor_fb__functions.h"
// Member `lr_wheel_fb`
#include "yhs_can_interfaces/msg/detail/lr_wheel_fb__functions.h"
// Member `rr_wheel_fb`
#include "yhs_can_interfaces/msg/detail/rr_wheel_fb__functions.h"
// Member `lf_wheel_fb`
#include "yhs_can_interfaces/msg/detail/lf_wheel_fb__functions.h"
// Member `rf_wheel_fb`
#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__functions.h"
// Member `front_angle_fb`
#include "yhs_can_interfaces/msg/detail/front_angle_fb__functions.h"
// Member `rear_angle_fb`
#include "yhs_can_interfaces/msg/detail/rear_angle_fb__functions.h"
// Member `bms_flag_fb`
#include "yhs_can_interfaces/msg/detail/bms_flag_fb__functions.h"
// Member `bms_fb`
#include "yhs_can_interfaces/msg/detail/bms_fb__functions.h"
// Member `drive_motor_current_fb`
#include "yhs_can_interfaces/msg/detail/drive_motor_current_fb__functions.h"
// Member `steering_motor_current_fb`
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__functions.h"
// Member `error_fb`
#include "yhs_can_interfaces/msg/detail/error_fb__functions.h"
// Member `ultrasonic`
#include "yhs_can_interfaces/msg/detail/ultrasonic__functions.h"

bool
yhs_can_interfaces__msg__ChassisInfoFb__init(yhs_can_interfaces__msg__ChassisInfoFb * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // ctrl_fb
  if (!yhs_can_interfaces__msg__CtrlFb__init(&msg->ctrl_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // steering_ctrl_fb
  if (!yhs_can_interfaces__msg__SteeringCtrlFb__init(&msg->steering_ctrl_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // io_fb
  if (!yhs_can_interfaces__msg__IoFb__init(&msg->io_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // motor_fb
  if (!yhs_can_interfaces__msg__MotorFb__init(&msg->motor_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // lr_wheel_fb
  if (!yhs_can_interfaces__msg__LrWheelFb__init(&msg->lr_wheel_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // rr_wheel_fb
  if (!yhs_can_interfaces__msg__RrWheelFb__init(&msg->rr_wheel_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // lf_wheel_fb
  if (!yhs_can_interfaces__msg__LfWheelFb__init(&msg->lf_wheel_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // rf_wheel_fb
  if (!yhs_can_interfaces__msg__RfWheelFb__init(&msg->rf_wheel_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // front_angle_fb
  if (!yhs_can_interfaces__msg__FrontAngleFb__init(&msg->front_angle_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // rear_angle_fb
  if (!yhs_can_interfaces__msg__RearAngleFb__init(&msg->rear_angle_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // bms_flag_fb
  if (!yhs_can_interfaces__msg__BmsFlagFb__init(&msg->bms_flag_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // bms_fb
  if (!yhs_can_interfaces__msg__BmsFb__init(&msg->bms_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // drive_motor_current_fb
  if (!yhs_can_interfaces__msg__DriveMotorCurrentFb__init(&msg->drive_motor_current_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // steering_motor_current_fb
  if (!yhs_can_interfaces__msg__SteeringMotorCurrentFb__init(&msg->steering_motor_current_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // error_fb
  if (!yhs_can_interfaces__msg__ErrorFb__init(&msg->error_fb)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  // ultrasonic
  if (!yhs_can_interfaces__msg__Ultrasonic__init(&msg->ultrasonic)) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
    return false;
  }
  return true;
}

void
yhs_can_interfaces__msg__ChassisInfoFb__fini(yhs_can_interfaces__msg__ChassisInfoFb * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ctrl_fb
  yhs_can_interfaces__msg__CtrlFb__fini(&msg->ctrl_fb);
  // steering_ctrl_fb
  yhs_can_interfaces__msg__SteeringCtrlFb__fini(&msg->steering_ctrl_fb);
  // io_fb
  yhs_can_interfaces__msg__IoFb__fini(&msg->io_fb);
  // motor_fb
  yhs_can_interfaces__msg__MotorFb__fini(&msg->motor_fb);
  // lr_wheel_fb
  yhs_can_interfaces__msg__LrWheelFb__fini(&msg->lr_wheel_fb);
  // rr_wheel_fb
  yhs_can_interfaces__msg__RrWheelFb__fini(&msg->rr_wheel_fb);
  // lf_wheel_fb
  yhs_can_interfaces__msg__LfWheelFb__fini(&msg->lf_wheel_fb);
  // rf_wheel_fb
  yhs_can_interfaces__msg__RfWheelFb__fini(&msg->rf_wheel_fb);
  // front_angle_fb
  yhs_can_interfaces__msg__FrontAngleFb__fini(&msg->front_angle_fb);
  // rear_angle_fb
  yhs_can_interfaces__msg__RearAngleFb__fini(&msg->rear_angle_fb);
  // bms_flag_fb
  yhs_can_interfaces__msg__BmsFlagFb__fini(&msg->bms_flag_fb);
  // bms_fb
  yhs_can_interfaces__msg__BmsFb__fini(&msg->bms_fb);
  // drive_motor_current_fb
  yhs_can_interfaces__msg__DriveMotorCurrentFb__fini(&msg->drive_motor_current_fb);
  // steering_motor_current_fb
  yhs_can_interfaces__msg__SteeringMotorCurrentFb__fini(&msg->steering_motor_current_fb);
  // error_fb
  yhs_can_interfaces__msg__ErrorFb__fini(&msg->error_fb);
  // ultrasonic
  yhs_can_interfaces__msg__Ultrasonic__fini(&msg->ultrasonic);
}

bool
yhs_can_interfaces__msg__ChassisInfoFb__are_equal(const yhs_can_interfaces__msg__ChassisInfoFb * lhs, const yhs_can_interfaces__msg__ChassisInfoFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // ctrl_fb
  if (!yhs_can_interfaces__msg__CtrlFb__are_equal(
      &(lhs->ctrl_fb), &(rhs->ctrl_fb)))
  {
    return false;
  }
  // steering_ctrl_fb
  if (!yhs_can_interfaces__msg__SteeringCtrlFb__are_equal(
      &(lhs->steering_ctrl_fb), &(rhs->steering_ctrl_fb)))
  {
    return false;
  }
  // io_fb
  if (!yhs_can_interfaces__msg__IoFb__are_equal(
      &(lhs->io_fb), &(rhs->io_fb)))
  {
    return false;
  }
  // motor_fb
  if (!yhs_can_interfaces__msg__MotorFb__are_equal(
      &(lhs->motor_fb), &(rhs->motor_fb)))
  {
    return false;
  }
  // lr_wheel_fb
  if (!yhs_can_interfaces__msg__LrWheelFb__are_equal(
      &(lhs->lr_wheel_fb), &(rhs->lr_wheel_fb)))
  {
    return false;
  }
  // rr_wheel_fb
  if (!yhs_can_interfaces__msg__RrWheelFb__are_equal(
      &(lhs->rr_wheel_fb), &(rhs->rr_wheel_fb)))
  {
    return false;
  }
  // lf_wheel_fb
  if (!yhs_can_interfaces__msg__LfWheelFb__are_equal(
      &(lhs->lf_wheel_fb), &(rhs->lf_wheel_fb)))
  {
    return false;
  }
  // rf_wheel_fb
  if (!yhs_can_interfaces__msg__RfWheelFb__are_equal(
      &(lhs->rf_wheel_fb), &(rhs->rf_wheel_fb)))
  {
    return false;
  }
  // front_angle_fb
  if (!yhs_can_interfaces__msg__FrontAngleFb__are_equal(
      &(lhs->front_angle_fb), &(rhs->front_angle_fb)))
  {
    return false;
  }
  // rear_angle_fb
  if (!yhs_can_interfaces__msg__RearAngleFb__are_equal(
      &(lhs->rear_angle_fb), &(rhs->rear_angle_fb)))
  {
    return false;
  }
  // bms_flag_fb
  if (!yhs_can_interfaces__msg__BmsFlagFb__are_equal(
      &(lhs->bms_flag_fb), &(rhs->bms_flag_fb)))
  {
    return false;
  }
  // bms_fb
  if (!yhs_can_interfaces__msg__BmsFb__are_equal(
      &(lhs->bms_fb), &(rhs->bms_fb)))
  {
    return false;
  }
  // drive_motor_current_fb
  if (!yhs_can_interfaces__msg__DriveMotorCurrentFb__are_equal(
      &(lhs->drive_motor_current_fb), &(rhs->drive_motor_current_fb)))
  {
    return false;
  }
  // steering_motor_current_fb
  if (!yhs_can_interfaces__msg__SteeringMotorCurrentFb__are_equal(
      &(lhs->steering_motor_current_fb), &(rhs->steering_motor_current_fb)))
  {
    return false;
  }
  // error_fb
  if (!yhs_can_interfaces__msg__ErrorFb__are_equal(
      &(lhs->error_fb), &(rhs->error_fb)))
  {
    return false;
  }
  // ultrasonic
  if (!yhs_can_interfaces__msg__Ultrasonic__are_equal(
      &(lhs->ultrasonic), &(rhs->ultrasonic)))
  {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__ChassisInfoFb__copy(
  const yhs_can_interfaces__msg__ChassisInfoFb * input,
  yhs_can_interfaces__msg__ChassisInfoFb * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // ctrl_fb
  if (!yhs_can_interfaces__msg__CtrlFb__copy(
      &(input->ctrl_fb), &(output->ctrl_fb)))
  {
    return false;
  }
  // steering_ctrl_fb
  if (!yhs_can_interfaces__msg__SteeringCtrlFb__copy(
      &(input->steering_ctrl_fb), &(output->steering_ctrl_fb)))
  {
    return false;
  }
  // io_fb
  if (!yhs_can_interfaces__msg__IoFb__copy(
      &(input->io_fb), &(output->io_fb)))
  {
    return false;
  }
  // motor_fb
  if (!yhs_can_interfaces__msg__MotorFb__copy(
      &(input->motor_fb), &(output->motor_fb)))
  {
    return false;
  }
  // lr_wheel_fb
  if (!yhs_can_interfaces__msg__LrWheelFb__copy(
      &(input->lr_wheel_fb), &(output->lr_wheel_fb)))
  {
    return false;
  }
  // rr_wheel_fb
  if (!yhs_can_interfaces__msg__RrWheelFb__copy(
      &(input->rr_wheel_fb), &(output->rr_wheel_fb)))
  {
    return false;
  }
  // lf_wheel_fb
  if (!yhs_can_interfaces__msg__LfWheelFb__copy(
      &(input->lf_wheel_fb), &(output->lf_wheel_fb)))
  {
    return false;
  }
  // rf_wheel_fb
  if (!yhs_can_interfaces__msg__RfWheelFb__copy(
      &(input->rf_wheel_fb), &(output->rf_wheel_fb)))
  {
    return false;
  }
  // front_angle_fb
  if (!yhs_can_interfaces__msg__FrontAngleFb__copy(
      &(input->front_angle_fb), &(output->front_angle_fb)))
  {
    return false;
  }
  // rear_angle_fb
  if (!yhs_can_interfaces__msg__RearAngleFb__copy(
      &(input->rear_angle_fb), &(output->rear_angle_fb)))
  {
    return false;
  }
  // bms_flag_fb
  if (!yhs_can_interfaces__msg__BmsFlagFb__copy(
      &(input->bms_flag_fb), &(output->bms_flag_fb)))
  {
    return false;
  }
  // bms_fb
  if (!yhs_can_interfaces__msg__BmsFb__copy(
      &(input->bms_fb), &(output->bms_fb)))
  {
    return false;
  }
  // drive_motor_current_fb
  if (!yhs_can_interfaces__msg__DriveMotorCurrentFb__copy(
      &(input->drive_motor_current_fb), &(output->drive_motor_current_fb)))
  {
    return false;
  }
  // steering_motor_current_fb
  if (!yhs_can_interfaces__msg__SteeringMotorCurrentFb__copy(
      &(input->steering_motor_current_fb), &(output->steering_motor_current_fb)))
  {
    return false;
  }
  // error_fb
  if (!yhs_can_interfaces__msg__ErrorFb__copy(
      &(input->error_fb), &(output->error_fb)))
  {
    return false;
  }
  // ultrasonic
  if (!yhs_can_interfaces__msg__Ultrasonic__copy(
      &(input->ultrasonic), &(output->ultrasonic)))
  {
    return false;
  }
  return true;
}

yhs_can_interfaces__msg__ChassisInfoFb *
yhs_can_interfaces__msg__ChassisInfoFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__ChassisInfoFb * msg = (yhs_can_interfaces__msg__ChassisInfoFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__ChassisInfoFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__ChassisInfoFb));
  bool success = yhs_can_interfaces__msg__ChassisInfoFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__ChassisInfoFb__destroy(yhs_can_interfaces__msg__ChassisInfoFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__ChassisInfoFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__ChassisInfoFb__Sequence__init(yhs_can_interfaces__msg__ChassisInfoFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__ChassisInfoFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__ChassisInfoFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__ChassisInfoFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__ChassisInfoFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__ChassisInfoFb__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yhs_can_interfaces__msg__ChassisInfoFb__Sequence__fini(yhs_can_interfaces__msg__ChassisInfoFb__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yhs_can_interfaces__msg__ChassisInfoFb__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yhs_can_interfaces__msg__ChassisInfoFb__Sequence *
yhs_can_interfaces__msg__ChassisInfoFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__ChassisInfoFb__Sequence * array = (yhs_can_interfaces__msg__ChassisInfoFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__ChassisInfoFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__ChassisInfoFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__ChassisInfoFb__Sequence__destroy(yhs_can_interfaces__msg__ChassisInfoFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__ChassisInfoFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__ChassisInfoFb__Sequence__are_equal(const yhs_can_interfaces__msg__ChassisInfoFb__Sequence * lhs, const yhs_can_interfaces__msg__ChassisInfoFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__ChassisInfoFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__ChassisInfoFb__Sequence__copy(
  const yhs_can_interfaces__msg__ChassisInfoFb__Sequence * input,
  yhs_can_interfaces__msg__ChassisInfoFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__ChassisInfoFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__ChassisInfoFb * data =
      (yhs_can_interfaces__msg__ChassisInfoFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__ChassisInfoFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__ChassisInfoFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__ChassisInfoFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
