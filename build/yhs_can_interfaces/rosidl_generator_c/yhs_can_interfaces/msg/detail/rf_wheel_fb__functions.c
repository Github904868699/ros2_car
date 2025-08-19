// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/RfWheelFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/rf_wheel_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__RfWheelFb__init(yhs_can_interfaces__msg__RfWheelFb * msg)
{
  if (!msg) {
    return false;
  }
  // rf_wheel_fb_velocity
  // rf_wheel_fb_pulse
  return true;
}

void
yhs_can_interfaces__msg__RfWheelFb__fini(yhs_can_interfaces__msg__RfWheelFb * msg)
{
  if (!msg) {
    return;
  }
  // rf_wheel_fb_velocity
  // rf_wheel_fb_pulse
}

bool
yhs_can_interfaces__msg__RfWheelFb__are_equal(const yhs_can_interfaces__msg__RfWheelFb * lhs, const yhs_can_interfaces__msg__RfWheelFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rf_wheel_fb_velocity
  if (lhs->rf_wheel_fb_velocity != rhs->rf_wheel_fb_velocity) {
    return false;
  }
  // rf_wheel_fb_pulse
  if (lhs->rf_wheel_fb_pulse != rhs->rf_wheel_fb_pulse) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__RfWheelFb__copy(
  const yhs_can_interfaces__msg__RfWheelFb * input,
  yhs_can_interfaces__msg__RfWheelFb * output)
{
  if (!input || !output) {
    return false;
  }
  // rf_wheel_fb_velocity
  output->rf_wheel_fb_velocity = input->rf_wheel_fb_velocity;
  // rf_wheel_fb_pulse
  output->rf_wheel_fb_pulse = input->rf_wheel_fb_pulse;
  return true;
}

yhs_can_interfaces__msg__RfWheelFb *
yhs_can_interfaces__msg__RfWheelFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__RfWheelFb * msg = (yhs_can_interfaces__msg__RfWheelFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__RfWheelFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__RfWheelFb));
  bool success = yhs_can_interfaces__msg__RfWheelFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__RfWheelFb__destroy(yhs_can_interfaces__msg__RfWheelFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__RfWheelFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__RfWheelFb__Sequence__init(yhs_can_interfaces__msg__RfWheelFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__RfWheelFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__RfWheelFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__RfWheelFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__RfWheelFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__RfWheelFb__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__RfWheelFb__Sequence__fini(yhs_can_interfaces__msg__RfWheelFb__Sequence * array)
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
      yhs_can_interfaces__msg__RfWheelFb__fini(&array->data[i]);
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

yhs_can_interfaces__msg__RfWheelFb__Sequence *
yhs_can_interfaces__msg__RfWheelFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__RfWheelFb__Sequence * array = (yhs_can_interfaces__msg__RfWheelFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__RfWheelFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__RfWheelFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__RfWheelFb__Sequence__destroy(yhs_can_interfaces__msg__RfWheelFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__RfWheelFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__RfWheelFb__Sequence__are_equal(const yhs_can_interfaces__msg__RfWheelFb__Sequence * lhs, const yhs_can_interfaces__msg__RfWheelFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__RfWheelFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__RfWheelFb__Sequence__copy(
  const yhs_can_interfaces__msg__RfWheelFb__Sequence * input,
  yhs_can_interfaces__msg__RfWheelFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__RfWheelFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__RfWheelFb * data =
      (yhs_can_interfaces__msg__RfWheelFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__RfWheelFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__RfWheelFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__RfWheelFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
