// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/DriveMotorCurrentFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/drive_motor_current_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__DriveMotorCurrentFb__init(yhs_can_interfaces__msg__DriveMotorCurrentFb * msg)
{
  if (!msg) {
    return false;
  }
  // drive_motor_current_fb_lf
  // drive_motor_current_fb_lr
  // drive_motor_current_fb_rf
  // drive_motor_current_fb_rr
  // drive_motor_oc_flag_fb_lf
  // drive_motor_oc_flag_fb_lr
  // drive_motor_oc_flag_fb_rf
  // drive_motor_oc_flag_fb_rr
  return true;
}

void
yhs_can_interfaces__msg__DriveMotorCurrentFb__fini(yhs_can_interfaces__msg__DriveMotorCurrentFb * msg)
{
  if (!msg) {
    return;
  }
  // drive_motor_current_fb_lf
  // drive_motor_current_fb_lr
  // drive_motor_current_fb_rf
  // drive_motor_current_fb_rr
  // drive_motor_oc_flag_fb_lf
  // drive_motor_oc_flag_fb_lr
  // drive_motor_oc_flag_fb_rf
  // drive_motor_oc_flag_fb_rr
}

bool
yhs_can_interfaces__msg__DriveMotorCurrentFb__are_equal(const yhs_can_interfaces__msg__DriveMotorCurrentFb * lhs, const yhs_can_interfaces__msg__DriveMotorCurrentFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drive_motor_current_fb_lf
  if (lhs->drive_motor_current_fb_lf != rhs->drive_motor_current_fb_lf) {
    return false;
  }
  // drive_motor_current_fb_lr
  if (lhs->drive_motor_current_fb_lr != rhs->drive_motor_current_fb_lr) {
    return false;
  }
  // drive_motor_current_fb_rf
  if (lhs->drive_motor_current_fb_rf != rhs->drive_motor_current_fb_rf) {
    return false;
  }
  // drive_motor_current_fb_rr
  if (lhs->drive_motor_current_fb_rr != rhs->drive_motor_current_fb_rr) {
    return false;
  }
  // drive_motor_oc_flag_fb_lf
  if (lhs->drive_motor_oc_flag_fb_lf != rhs->drive_motor_oc_flag_fb_lf) {
    return false;
  }
  // drive_motor_oc_flag_fb_lr
  if (lhs->drive_motor_oc_flag_fb_lr != rhs->drive_motor_oc_flag_fb_lr) {
    return false;
  }
  // drive_motor_oc_flag_fb_rf
  if (lhs->drive_motor_oc_flag_fb_rf != rhs->drive_motor_oc_flag_fb_rf) {
    return false;
  }
  // drive_motor_oc_flag_fb_rr
  if (lhs->drive_motor_oc_flag_fb_rr != rhs->drive_motor_oc_flag_fb_rr) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__DriveMotorCurrentFb__copy(
  const yhs_can_interfaces__msg__DriveMotorCurrentFb * input,
  yhs_can_interfaces__msg__DriveMotorCurrentFb * output)
{
  if (!input || !output) {
    return false;
  }
  // drive_motor_current_fb_lf
  output->drive_motor_current_fb_lf = input->drive_motor_current_fb_lf;
  // drive_motor_current_fb_lr
  output->drive_motor_current_fb_lr = input->drive_motor_current_fb_lr;
  // drive_motor_current_fb_rf
  output->drive_motor_current_fb_rf = input->drive_motor_current_fb_rf;
  // drive_motor_current_fb_rr
  output->drive_motor_current_fb_rr = input->drive_motor_current_fb_rr;
  // drive_motor_oc_flag_fb_lf
  output->drive_motor_oc_flag_fb_lf = input->drive_motor_oc_flag_fb_lf;
  // drive_motor_oc_flag_fb_lr
  output->drive_motor_oc_flag_fb_lr = input->drive_motor_oc_flag_fb_lr;
  // drive_motor_oc_flag_fb_rf
  output->drive_motor_oc_flag_fb_rf = input->drive_motor_oc_flag_fb_rf;
  // drive_motor_oc_flag_fb_rr
  output->drive_motor_oc_flag_fb_rr = input->drive_motor_oc_flag_fb_rr;
  return true;
}

yhs_can_interfaces__msg__DriveMotorCurrentFb *
yhs_can_interfaces__msg__DriveMotorCurrentFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__DriveMotorCurrentFb * msg = (yhs_can_interfaces__msg__DriveMotorCurrentFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__DriveMotorCurrentFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__DriveMotorCurrentFb));
  bool success = yhs_can_interfaces__msg__DriveMotorCurrentFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__DriveMotorCurrentFb__destroy(yhs_can_interfaces__msg__DriveMotorCurrentFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__DriveMotorCurrentFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__init(yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__DriveMotorCurrentFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__DriveMotorCurrentFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__DriveMotorCurrentFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__DriveMotorCurrentFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__DriveMotorCurrentFb__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__fini(yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * array)
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
      yhs_can_interfaces__msg__DriveMotorCurrentFb__fini(&array->data[i]);
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

yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence *
yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * array = (yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__destroy(yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__are_equal(const yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * lhs, const yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__DriveMotorCurrentFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence__copy(
  const yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * input,
  yhs_can_interfaces__msg__DriveMotorCurrentFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__DriveMotorCurrentFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__DriveMotorCurrentFb * data =
      (yhs_can_interfaces__msg__DriveMotorCurrentFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__DriveMotorCurrentFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__DriveMotorCurrentFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__DriveMotorCurrentFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
