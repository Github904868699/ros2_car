// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/FrontAngleFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/front_angle_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__FrontAngleFb__init(yhs_can_interfaces__msg__FrontAngleFb * msg)
{
  if (!msg) {
    return false;
  }
  // front_angle_fb_l
  // front_angle_fb_r
  return true;
}

void
yhs_can_interfaces__msg__FrontAngleFb__fini(yhs_can_interfaces__msg__FrontAngleFb * msg)
{
  if (!msg) {
    return;
  }
  // front_angle_fb_l
  // front_angle_fb_r
}

bool
yhs_can_interfaces__msg__FrontAngleFb__are_equal(const yhs_can_interfaces__msg__FrontAngleFb * lhs, const yhs_can_interfaces__msg__FrontAngleFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_angle_fb_l
  if (lhs->front_angle_fb_l != rhs->front_angle_fb_l) {
    return false;
  }
  // front_angle_fb_r
  if (lhs->front_angle_fb_r != rhs->front_angle_fb_r) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__FrontAngleFb__copy(
  const yhs_can_interfaces__msg__FrontAngleFb * input,
  yhs_can_interfaces__msg__FrontAngleFb * output)
{
  if (!input || !output) {
    return false;
  }
  // front_angle_fb_l
  output->front_angle_fb_l = input->front_angle_fb_l;
  // front_angle_fb_r
  output->front_angle_fb_r = input->front_angle_fb_r;
  return true;
}

yhs_can_interfaces__msg__FrontAngleFb *
yhs_can_interfaces__msg__FrontAngleFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__FrontAngleFb * msg = (yhs_can_interfaces__msg__FrontAngleFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__FrontAngleFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__FrontAngleFb));
  bool success = yhs_can_interfaces__msg__FrontAngleFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__FrontAngleFb__destroy(yhs_can_interfaces__msg__FrontAngleFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__FrontAngleFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__FrontAngleFb__Sequence__init(yhs_can_interfaces__msg__FrontAngleFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__FrontAngleFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__FrontAngleFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__FrontAngleFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__FrontAngleFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__FrontAngleFb__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__FrontAngleFb__Sequence__fini(yhs_can_interfaces__msg__FrontAngleFb__Sequence * array)
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
      yhs_can_interfaces__msg__FrontAngleFb__fini(&array->data[i]);
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

yhs_can_interfaces__msg__FrontAngleFb__Sequence *
yhs_can_interfaces__msg__FrontAngleFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__FrontAngleFb__Sequence * array = (yhs_can_interfaces__msg__FrontAngleFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__FrontAngleFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__FrontAngleFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__FrontAngleFb__Sequence__destroy(yhs_can_interfaces__msg__FrontAngleFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__FrontAngleFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__FrontAngleFb__Sequence__are_equal(const yhs_can_interfaces__msg__FrontAngleFb__Sequence * lhs, const yhs_can_interfaces__msg__FrontAngleFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__FrontAngleFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__FrontAngleFb__Sequence__copy(
  const yhs_can_interfaces__msg__FrontAngleFb__Sequence * input,
  yhs_can_interfaces__msg__FrontAngleFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__FrontAngleFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__FrontAngleFb * data =
      (yhs_can_interfaces__msg__FrontAngleFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__FrontAngleFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__FrontAngleFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__FrontAngleFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
