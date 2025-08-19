// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yhs_can_interfaces:msg/Ultrasonic.idl
// generated code does not contain a copyright notice
#include "yhs_can_interfaces/msg/detail/ultrasonic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yhs_can_interfaces__msg__Ultrasonic__init(yhs_can_interfaces__msg__Ultrasonic * msg)
{
  if (!msg) {
    return false;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  // left_front
  // left_rear
  // right_front
  // right_rear
  return true;
}

void
yhs_can_interfaces__msg__Ultrasonic__fini(yhs_can_interfaces__msg__Ultrasonic * msg)
{
  if (!msg) {
    return;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  // left_front
  // left_rear
  // right_front
  // right_rear
}

bool
yhs_can_interfaces__msg__Ultrasonic__are_equal(const yhs_can_interfaces__msg__Ultrasonic * lhs, const yhs_can_interfaces__msg__Ultrasonic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // rear_left
  if (lhs->rear_left != rhs->rear_left) {
    return false;
  }
  // rear_right
  if (lhs->rear_right != rhs->rear_right) {
    return false;
  }
  // left_front
  if (lhs->left_front != rhs->left_front) {
    return false;
  }
  // left_rear
  if (lhs->left_rear != rhs->left_rear) {
    return false;
  }
  // right_front
  if (lhs->right_front != rhs->right_front) {
    return false;
  }
  // right_rear
  if (lhs->right_rear != rhs->right_rear) {
    return false;
  }
  return true;
}

bool
yhs_can_interfaces__msg__Ultrasonic__copy(
  const yhs_can_interfaces__msg__Ultrasonic * input,
  yhs_can_interfaces__msg__Ultrasonic * output)
{
  if (!input || !output) {
    return false;
  }
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // rear_left
  output->rear_left = input->rear_left;
  // rear_right
  output->rear_right = input->rear_right;
  // left_front
  output->left_front = input->left_front;
  // left_rear
  output->left_rear = input->left_rear;
  // right_front
  output->right_front = input->right_front;
  // right_rear
  output->right_rear = input->right_rear;
  return true;
}

yhs_can_interfaces__msg__Ultrasonic *
yhs_can_interfaces__msg__Ultrasonic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__Ultrasonic * msg = (yhs_can_interfaces__msg__Ultrasonic *)allocator.allocate(sizeof(yhs_can_interfaces__msg__Ultrasonic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yhs_can_interfaces__msg__Ultrasonic));
  bool success = yhs_can_interfaces__msg__Ultrasonic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yhs_can_interfaces__msg__Ultrasonic__destroy(yhs_can_interfaces__msg__Ultrasonic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yhs_can_interfaces__msg__Ultrasonic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yhs_can_interfaces__msg__Ultrasonic__Sequence__init(yhs_can_interfaces__msg__Ultrasonic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__Ultrasonic * data = NULL;

  if (size) {
    data = (yhs_can_interfaces__msg__Ultrasonic *)allocator.zero_allocate(size, sizeof(yhs_can_interfaces__msg__Ultrasonic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yhs_can_interfaces__msg__Ultrasonic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yhs_can_interfaces__msg__Ultrasonic__fini(&data[i - 1]);
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
yhs_can_interfaces__msg__Ultrasonic__Sequence__fini(yhs_can_interfaces__msg__Ultrasonic__Sequence * array)
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
      yhs_can_interfaces__msg__Ultrasonic__fini(&array->data[i]);
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

yhs_can_interfaces__msg__Ultrasonic__Sequence *
yhs_can_interfaces__msg__Ultrasonic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yhs_can_interfaces__msg__Ultrasonic__Sequence * array = (yhs_can_interfaces__msg__Ultrasonic__Sequence *)allocator.allocate(sizeof(yhs_can_interfaces__msg__Ultrasonic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yhs_can_interfaces__msg__Ultrasonic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yhs_can_interfaces__msg__Ultrasonic__Sequence__destroy(yhs_can_interfaces__msg__Ultrasonic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yhs_can_interfaces__msg__Ultrasonic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yhs_can_interfaces__msg__Ultrasonic__Sequence__are_equal(const yhs_can_interfaces__msg__Ultrasonic__Sequence * lhs, const yhs_can_interfaces__msg__Ultrasonic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yhs_can_interfaces__msg__Ultrasonic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yhs_can_interfaces__msg__Ultrasonic__Sequence__copy(
  const yhs_can_interfaces__msg__Ultrasonic__Sequence * input,
  yhs_can_interfaces__msg__Ultrasonic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yhs_can_interfaces__msg__Ultrasonic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yhs_can_interfaces__msg__Ultrasonic * data =
      (yhs_can_interfaces__msg__Ultrasonic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yhs_can_interfaces__msg__Ultrasonic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yhs_can_interfaces__msg__Ultrasonic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yhs_can_interfaces__msg__Ultrasonic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
