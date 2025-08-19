// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/motor_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__MotorCmd__init(yhs_can_interfaces__msg__MotorCmd * msg)
{
  if (!msg) {
    return false;
  }
  // motor_cmd_drive_enable_lf
  // motor_cmd_drive_enable_lr
  // motor_cmd_drive_enable_rf
  // motor_cmd_drive_enable_rr
  // motor_cmd_steering_enable_lf
  // motor_cmd_steering_enable_lr
  // motor_cmd_steering_enable_rf
  // motor_cmd_steering_enable_rr
  // motor_cmd_power_restart
  return true;
}

void
yhs_can_interfaces__msg__MotorCmd__fini(yhs_can_interfaces__msg__MotorCmd * msg)
{
  if (!msg) {
    return;
  }
  // motor_cmd_drive_enable_lf
  // motor_cmd_drive_enable_lr
  // motor_cmd_drive_enable_rf
  // motor_cmd_drive_enable_rr
  // motor_cmd_steering_enable_lf
  // motor_cmd_steering_enable_lr
  // motor_cmd_steering_enable_rf
  // motor_cmd_steering_enable_rr
  // motor_cmd_power_restart
}

bool
yhs_can_interfaces__msg__MotorCmd__are_equal(const yhs_can_interfaces__msg__MotorCmd * lhs, const yhs_can_interfaces__msg__MotorCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_cmd_drive_enable_lf
  if (lhs->motor_cmd_drive_enable_lf != rhs->motor_cmd_drive_enable_lf) {
    return false;
  }
  // motor_cmd_drive_enable_lr
  if (lhs->motor_cmd_drive_enable_lr != rhs->motor_cmd_drive_enable_lr) {
    return false;
  }
  // motor_cmd_drive_enable_rf
  if (lhs->motor_cmd_drive_enable_rf != rhs->motor_cmd_drive_enable_rf) {
    return false;
  }
  // motor_cmd_drive_enable_rr
  if (lhs->motor_cmd_drive_enable_rr != rhs->motor_cmd_drive_enable_rr) {
    return false;
  }
  // motor_cmd_steering_enable_lf
  if (lhs->motor_cmd_steering_enable_lf != rhs->motor_cmd_steering_enable_lf) {
    return false;
  }
  // motor_cmd_steering_enable_lr
  if (lhs->motor_cmd_steering_enable_lr != rhs->motor_cmd_steering_enable_lr) {
    return false;
  }
  // motor_cmd_steering_enable_rf
  if (lhs->motor_cmd_steering_enable_rf != rhs->motor_cmd_steering_enable_rf) {
    return false;
  }
  // motor_cmd_steering_enable_rr
  if (lhs->motor_cmd_steering_enable_rr != rhs->motor_cmd_steering_enable_rr) {
    return false;
  }
  // motor_cmd_power_restart
  if (lhs->motor_cmd_power_restart != rhs->motor_cmd_power_restart) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__MotorCmd__copy(
  const yhs_can_interfaces__msg__MotorCmd * input,
  yhs_can_interfaces__msg__MotorCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_cmd_drive_enable_lf
  output->motor_cmd_drive_enable_lf = input->motor_cmd_drive_enable_lf;
  // motor_cmd_drive_enable_lr
  output->motor_cmd_drive_enable_lr = input->motor_cmd_drive_enable_lr;
  // motor_cmd_drive_enable_rf
  output->motor_cmd_drive_enable_rf = input->motor_cmd_drive_enable_rf;
  // motor_cmd_drive_enable_rr
  output->motor_cmd_drive_enable_rr = input->motor_cmd_drive_enable_rr;
  // motor_cmd_steering_enable_lf
  output->motor_cmd_steering_enable_lf = input->motor_cmd_steering_enable_lf;
  // motor_cmd_steering_enable_lr
  output->motor_cmd_steering_enable_lr = input->motor_cmd_steering_enable_lr;
  // motor_cmd_steering_enable_rf
  output->motor_cmd_steering_enable_rf = input->motor_cmd_steering_enable_rf;
  // motor_cmd_steering_enable_rr
  output->motor_cmd_steering_enable_rr = input->motor_cmd_steering_enable_rr;
  // motor_cmd_power_restart
  output->motor_cmd_power_restart = input->motor_cmd_power_restart;
  return true;
}

yhs_can_interfaces__msg__MotorCmd *
yhs_can_interfaces__msg__MotorCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__MotorCmd * msg = (yhs_can_interfaces__msg__MotorCmd *)allocator.allocate(sizeof(yhs_can_interfaces__msg__MotorCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__MotorCmd));
  bool success = yhs_can_interfaces__msg__MotorCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__MotorCmd__destroy(yhs_can_interfaces__msg__MotorCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__MotorCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__MotorCmd__Sequence__init(yhs_can_interfaces__msg__MotorCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__MotorCmd * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__MotorCmd *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__MotorCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__MotorCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__MotorCmd__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__MotorCmd__Sequence__fini(yhs_can_interfaces__msg__MotorCmd__Sequence * array)
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
      yhs_can_interfaces__msg__MotorCmd__fini(&array->data[i]);
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

yhs_can_interfaces__msg__MotorCmd__Sequence *
yhs_can_interfaces__msg__MotorCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__MotorCmd__Sequence * array = (yhs_can_interfaces__msg__MotorCmd__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__MotorCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__MotorCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__MotorCmd__Sequence__destroy(yhs_can_interfaces__msg__MotorCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__MotorCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__MotorCmd__Sequence__are_equal(const yhs_can_interfaces__msg__MotorCmd__Sequence * lhs, const yhs_can_interfaces__msg__MotorCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__MotorCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__MotorCmd__Sequence__copy(
  const yhs_can_interfaces__msg__MotorCmd__Sequence * input,
  yhs_can_interfaces__msg__MotorCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__MotorCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__MotorCmd * data =
      (yhs_can_interfaces__msg__MotorCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__MotorCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__MotorCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__MotorCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
