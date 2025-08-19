// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/ErrorFb.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/error_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__ErrorFb__init(yhs_can_interfaces__msg__ErrorFb * msg)
{
  if (!msg) {
    return false;
  }
  // error_fb_level
  // error_fb_device_type
  // error_fb_devive_id
  // error_fb_emergency_code
  // error_fb_register_code
  return true;
}

void
yhs_can_interfaces__msg__ErrorFb__fini(yhs_can_interfaces__msg__ErrorFb * msg)
{
  if (!msg) {
    return;
  }
  // error_fb_level
  // error_fb_device_type
  // error_fb_devive_id
  // error_fb_emergency_code
  // error_fb_register_code
}

bool
yhs_can_interfaces__msg__ErrorFb__are_equal(const yhs_can_interfaces__msg__ErrorFb * lhs, const yhs_can_interfaces__msg__ErrorFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_fb_level
  if (lhs->error_fb_level != rhs->error_fb_level) {
    return false;
  }
  // error_fb_device_type
  if (lhs->error_fb_device_type != rhs->error_fb_device_type) {
    return false;
  }
  // error_fb_devive_id
  if (lhs->error_fb_devive_id != rhs->error_fb_devive_id) {
    return false;
  }
  // error_fb_emergency_code
  if (lhs->error_fb_emergency_code != rhs->error_fb_emergency_code) {
    return false;
  }
  // error_fb_register_code
  if (lhs->error_fb_register_code != rhs->error_fb_register_code) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__ErrorFb__copy(
  const yhs_can_interfaces__msg__ErrorFb * input,
  yhs_can_interfaces__msg__ErrorFb * output)
{
  if (!input || !output) {
    return false;
  }
  // error_fb_level
  output->error_fb_level = input->error_fb_level;
  // error_fb_device_type
  output->error_fb_device_type = input->error_fb_device_type;
  // error_fb_devive_id
  output->error_fb_devive_id = input->error_fb_devive_id;
  // error_fb_emergency_code
  output->error_fb_emergency_code = input->error_fb_emergency_code;
  // error_fb_register_code
  output->error_fb_register_code = input->error_fb_register_code;
  return true;
}

yhs_can_interfaces__msg__ErrorFb *
yhs_can_interfaces__msg__ErrorFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__ErrorFb * msg = (yhs_can_interfaces__msg__ErrorFb *)allocator.allocate(sizeof(yhs_can_interfaces__msg__ErrorFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__ErrorFb));
  bool success = yhs_can_interfaces__msg__ErrorFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__ErrorFb__destroy(yhs_can_interfaces__msg__ErrorFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__ErrorFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__ErrorFb__Sequence__init(yhs_can_interfaces__msg__ErrorFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__ErrorFb * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__ErrorFb *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__ErrorFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__ErrorFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__ErrorFb__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__ErrorFb__Sequence__fini(yhs_can_interfaces__msg__ErrorFb__Sequence * array)
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
      yhs_can_interfaces__msg__ErrorFb__fini(&array->data[i]);
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

yhs_can_interfaces__msg__ErrorFb__Sequence *
yhs_can_interfaces__msg__ErrorFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__ErrorFb__Sequence * array = (yhs_can_interfaces__msg__ErrorFb__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__ErrorFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__ErrorFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__ErrorFb__Sequence__destroy(yhs_can_interfaces__msg__ErrorFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__ErrorFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__ErrorFb__Sequence__are_equal(const yhs_can_interfaces__msg__ErrorFb__Sequence * lhs, const yhs_can_interfaces__msg__ErrorFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__ErrorFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__ErrorFb__Sequence__copy(
  const yhs_can_interfaces__msg__ErrorFb__Sequence * input,
  yhs_can_interfaces__msg__ErrorFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__ErrorFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__ErrorFb * data =
      (yhs_can_interfaces__msg__ErrorFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__ErrorFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__ErrorFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__ErrorFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
