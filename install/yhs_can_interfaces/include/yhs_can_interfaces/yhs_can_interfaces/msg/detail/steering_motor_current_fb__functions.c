// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/SteeringMotorCurrentFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__SteeringMotorCurrentFb__init(yhs_can_interfaces__msg__SteeringMotorCurrentFb * msg)
{
  if (!msg) {
    return false;
  }
  // steering_motor_current_fb_lf
  // steering_motor_current_fb_lr
  // steering_motor_current_fb_rf
  // steering_motor_current_fb_rr
  // steering_motor_oc_flag_fb_lf
  // steering_motor_oc_flag_fb_lr
  // steering_motor_oc_flag_fb_rf
  // steering_motor_oc_flag_fb_rr
  return true;
}

void
yhs_can_interfaces__msg__SteeringMotorCurrentFb__fini(yhs_can_interfaces__msg__SteeringMotorCurrentFb * msg)
{
  if (!msg) {
    return;
  }
  // steering_motor_current_fb_lf
  // steering_motor_current_fb_lr
  // steering_motor_current_fb_rf
  // steering_motor_current_fb_rr
  // steering_motor_oc_flag_fb_lf
  // steering_motor_oc_flag_fb_lr
  // steering_motor_oc_flag_fb_rf
  // steering_motor_oc_flag_fb_rr
}

bool
yhs_can_interfaces__msg__SteeringMotorCurrentFb__are_equal(const yhs_can_interfaces__msg__SteeringMotorCurrentFb * lhs, const yhs_can_interfaces__msg__SteeringMotorCurrentFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steering_motor_current_fb_lf
  if (lhs->steering_motor_current_fb_lf != rhs->steering_motor_current_fb_lf) {
    return false;
  }
  // steering_motor_current_fb_lr
  if (lhs->steering_motor_current_fb_lr != rhs->steering_motor_current_fb_lr) {
    return false;
  }
  // steering_motor_current_fb_rf
  if (lhs->steering_motor_current_fb_rf != rhs->steering_motor_current_fb_rf) {
    return false;
  }
  // steering_motor_current_fb_rr
  if (lhs->steering_motor_current_fb_rr != rhs->steering_motor_current_fb_rr) {
    return false;
  }
  // steering_motor_oc_flag_fb_lf
  if (lhs->steering_motor_oc_flag_fb_lf != rhs->steering_motor_oc_flag_fb_lf) {
    return false;
  }
  // steering_motor_oc_flag_fb_lr
  if (lhs->steering_motor_oc_flag_fb_lr != rhs->steering_motor_oc_flag_fb_lr) {
    return false;
  }
  // steering_motor_oc_flag_fb_rf
  if (lhs->steering_motor_oc_flag_fb_rf != rhs->steering_motor_oc_flag_fb_rf) {
    return false;
  }
  // steering_motor_oc_flag_fb_rr
  if (lhs->steering_motor_oc_flag_fb_rr != rhs->steering_motor_oc_flag_fb_rr) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__SteeringMotorCurrentFb__copy(
  const yhs_can_interfaces__msg__SteeringMotorCurrentFb * input,
  yhs_can_interfaces__msg__SteeringMotorCurrentFb * output)
{
  if (!input || !output) {
    return false;
  }
  // steering_motor_current_fb_lf
  output->steering_motor_current_fb_lf = input->steering_motor_current_fb_lf;
  // steering_motor_current_fb_lr
  output->steering_motor_current_fb_lr = input->steering_motor_current_fb_lr;
  // steering_motor_current_fb_rf
  output->steering_motor_current_fb_rf = input->steering_motor_current_fb_rf;
  // steering_motor_current_fb_rr
  output->steering_motor_current_fb_rr = input->steering_motor_current_fb_rr;
  // steering_motor_oc_flag_fb_lf
  output->steering_motor_oc_flag_fb_lf = input->steering_motor_oc_flag_fb_lf;
  // steering_motor_oc_flag_fb_lr
  output->steering_motor_oc_flag_fb_lr = input->steering_motor_oc_flag_fb_lr;
  // steering_motor_oc_flag_fb_rf
  output->steering_motor_oc_flag_fb_rf = input->steering_motor_oc_flag_fb_rf;
  // steering_motor_oc_flag_fb_rr
  output->steering_motor_oc_flag_fb_rr = input->steering_motor_oc_flag_fb_rr;
  return true;
}

yhs_can_interfaces__msg__SteeringMotorCurrentFb *
yhs_can_interfaces__msg__SteeringMotorCurrentFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__SteeringMotorCurrentFb * msg = (yhs_can_interfaces__msg__SteeringMotorCurrentFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__SteeringMotorCurrentFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__SteeringMotorCurrentFb));
  bool success = yhs_can_interfaces__msg__SteeringMotorCurrentFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__SteeringMotorCurrentFb__destroy(yhs_can_interfaces__msg__SteeringMotorCurrentFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__SteeringMotorCurrentFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__init(yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__SteeringMotorCurrentFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__SteeringMotorCurrentFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__SteeringMotorCurrentFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__SteeringMotorCurrentFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__SteeringMotorCurrentFb__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__fini(yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * array)
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
      yhs_can_interfaces__msg__SteeringMotorCurrentFb__fini(&array->data[i]);
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

yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence *
yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * array = (yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__destroy(yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__are_equal(const yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * lhs, const yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__SteeringMotorCurrentFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence__copy(
  const yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * input,
  yhs_can_interfaces__msg__SteeringMotorCurrentFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__SteeringMotorCurrentFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__SteeringMotorCurrentFb * data =
      (yhs_can_interfaces__msg__SteeringMotorCurrentFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__SteeringMotorCurrentFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__SteeringMotorCurrentFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__SteeringMotorCurrentFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
