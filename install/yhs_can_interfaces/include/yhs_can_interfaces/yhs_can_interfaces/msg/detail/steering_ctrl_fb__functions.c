// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/SteeringCtrlFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/steering_ctrl_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__SteeringCtrlFb__init(yhs_can_interfaces__msg__SteeringCtrlFb * msg)
{
  if (!msg) {
    return false;
  }
  // steering_ctrl_fb_gear
  // steering_ctrl_fb_lrspeed
  // steering_ctrl_fb_rfspeed
  // steering_ctrl_fb_steering
  return true;
}

void
yhs_can_interfaces__msg__SteeringCtrlFb__fini(yhs_can_interfaces__msg__SteeringCtrlFb * msg)
{
  if (!msg) {
    return;
  }
  // steering_ctrl_fb_gear
  // steering_ctrl_fb_lrspeed
  // steering_ctrl_fb_rfspeed
  // steering_ctrl_fb_steering
}

bool
yhs_can_interfaces__msg__SteeringCtrlFb__are_equal(const yhs_can_interfaces__msg__SteeringCtrlFb * lhs, const yhs_can_interfaces__msg__SteeringCtrlFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steering_ctrl_fb_gear
  if (lhs->steering_ctrl_fb_gear != rhs->steering_ctrl_fb_gear) {
    return false;
  }
  // steering_ctrl_fb_lrspeed
  if (lhs->steering_ctrl_fb_lrspeed != rhs->steering_ctrl_fb_lrspeed) {
    return false;
  }
  // steering_ctrl_fb_rfspeed
  if (lhs->steering_ctrl_fb_rfspeed != rhs->steering_ctrl_fb_rfspeed) {
    return false;
  }
  // steering_ctrl_fb_steering
  if (lhs->steering_ctrl_fb_steering != rhs->steering_ctrl_fb_steering) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__SteeringCtrlFb__copy(
  const yhs_can_interfaces__msg__SteeringCtrlFb * input,
  yhs_can_interfaces__msg__SteeringCtrlFb * output)
{
  if (!input || !output) {
    return false;
  }
  // steering_ctrl_fb_gear
  output->steering_ctrl_fb_gear = input->steering_ctrl_fb_gear;
  // steering_ctrl_fb_lrspeed
  output->steering_ctrl_fb_lrspeed = input->steering_ctrl_fb_lrspeed;
  // steering_ctrl_fb_rfspeed
  output->steering_ctrl_fb_rfspeed = input->steering_ctrl_fb_rfspeed;
  // steering_ctrl_fb_steering
  output->steering_ctrl_fb_steering = input->steering_ctrl_fb_steering;
  return true;
}

yhs_can_interfaces__msg__SteeringCtrlFb *
yhs_can_interfaces__msg__SteeringCtrlFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__SteeringCtrlFb * msg = (yhs_can_interfaces__msg__SteeringCtrlFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__SteeringCtrlFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__SteeringCtrlFb));
  bool success = yhs_can_interfaces__msg__SteeringCtrlFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__SteeringCtrlFb__destroy(yhs_can_interfaces__msg__SteeringCtrlFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__SteeringCtrlFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__init(yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__SteeringCtrlFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__SteeringCtrlFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__SteeringCtrlFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__SteeringCtrlFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__SteeringCtrlFb__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__fini(yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * array)
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
      yhs_can_interfaces__msg__SteeringCtrlFb__fini(&array->data[i]);
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

yhs_can_interfaces__msg__SteeringCtrlFb__Sequence *
yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * array = (yhs_can_interfaces__msg__SteeringCtrlFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__SteeringCtrlFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__destroy(yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__are_equal(const yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * lhs, const yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__SteeringCtrlFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__SteeringCtrlFb__Sequence__copy(
  const yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * input,
  yhs_can_interfaces__msg__SteeringCtrlFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__SteeringCtrlFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__SteeringCtrlFb * data =
      (yhs_can_interfaces__msg__SteeringCtrlFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__SteeringCtrlFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__SteeringCtrlFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__SteeringCtrlFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
