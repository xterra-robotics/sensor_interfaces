// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/base_orientation_wrench_debug__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__BaseOrientationWrenchDebug__init(xterra__msg__BaseOrientationWrenchDebug * msg)
{
  if (!msg) {
    return false;
  }
  // base_wrench_base_tra
  // base_wrench_base_ori
  // base_wrench_legs
  // base_wrench_full
  return true;
}

void
xterra__msg__BaseOrientationWrenchDebug__fini(xterra__msg__BaseOrientationWrenchDebug * msg)
{
  if (!msg) {
    return;
  }
  // base_wrench_base_tra
  // base_wrench_base_ori
  // base_wrench_legs
  // base_wrench_full
}

bool
xterra__msg__BaseOrientationWrenchDebug__are_equal(const xterra__msg__BaseOrientationWrenchDebug * lhs, const xterra__msg__BaseOrientationWrenchDebug * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_wrench_base_tra
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->base_wrench_base_tra[i] != rhs->base_wrench_base_tra[i]) {
      return false;
    }
  }
  // base_wrench_base_ori
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->base_wrench_base_ori[i] != rhs->base_wrench_base_ori[i]) {
      return false;
    }
  }
  // base_wrench_legs
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->base_wrench_legs[i] != rhs->base_wrench_legs[i]) {
      return false;
    }
  }
  // base_wrench_full
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->base_wrench_full[i] != rhs->base_wrench_full[i]) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__BaseOrientationWrenchDebug__copy(
  const xterra__msg__BaseOrientationWrenchDebug * input,
  xterra__msg__BaseOrientationWrenchDebug * output)
{
  if (!input || !output) {
    return false;
  }
  // base_wrench_base_tra
  for (size_t i = 0; i < 3; ++i) {
    output->base_wrench_base_tra[i] = input->base_wrench_base_tra[i];
  }
  // base_wrench_base_ori
  for (size_t i = 0; i < 3; ++i) {
    output->base_wrench_base_ori[i] = input->base_wrench_base_ori[i];
  }
  // base_wrench_legs
  for (size_t i = 0; i < 3; ++i) {
    output->base_wrench_legs[i] = input->base_wrench_legs[i];
  }
  // base_wrench_full
  for (size_t i = 0; i < 3; ++i) {
    output->base_wrench_full[i] = input->base_wrench_full[i];
  }
  return true;
}

xterra__msg__BaseOrientationWrenchDebug *
xterra__msg__BaseOrientationWrenchDebug__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__BaseOrientationWrenchDebug * msg = (xterra__msg__BaseOrientationWrenchDebug *)allocator.allocate(sizeof(xterra__msg__BaseOrientationWrenchDebug), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__BaseOrientationWrenchDebug));
  bool success = xterra__msg__BaseOrientationWrenchDebug__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__BaseOrientationWrenchDebug__destroy(xterra__msg__BaseOrientationWrenchDebug * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__BaseOrientationWrenchDebug__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__BaseOrientationWrenchDebug__Sequence__init(xterra__msg__BaseOrientationWrenchDebug__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__BaseOrientationWrenchDebug * data = NULL;

  if (size) {
    data = (xterra__msg__BaseOrientationWrenchDebug *)allocator.zero_allocate(size, sizeof(xterra__msg__BaseOrientationWrenchDebug), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__BaseOrientationWrenchDebug__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__BaseOrientationWrenchDebug__fini(&data[i - 1]);
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
xterra__msg__BaseOrientationWrenchDebug__Sequence__fini(xterra__msg__BaseOrientationWrenchDebug__Sequence * array)
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
      xterra__msg__BaseOrientationWrenchDebug__fini(&array->data[i]);
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

xterra__msg__BaseOrientationWrenchDebug__Sequence *
xterra__msg__BaseOrientationWrenchDebug__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__BaseOrientationWrenchDebug__Sequence * array = (xterra__msg__BaseOrientationWrenchDebug__Sequence *)allocator.allocate(sizeof(xterra__msg__BaseOrientationWrenchDebug__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__BaseOrientationWrenchDebug__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__BaseOrientationWrenchDebug__Sequence__destroy(xterra__msg__BaseOrientationWrenchDebug__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__BaseOrientationWrenchDebug__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__BaseOrientationWrenchDebug__Sequence__are_equal(const xterra__msg__BaseOrientationWrenchDebug__Sequence * lhs, const xterra__msg__BaseOrientationWrenchDebug__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__BaseOrientationWrenchDebug__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__BaseOrientationWrenchDebug__Sequence__copy(
  const xterra__msg__BaseOrientationWrenchDebug__Sequence * input,
  xterra__msg__BaseOrientationWrenchDebug__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__BaseOrientationWrenchDebug);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__BaseOrientationWrenchDebug * data =
      (xterra__msg__BaseOrientationWrenchDebug *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__BaseOrientationWrenchDebug__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__BaseOrientationWrenchDebug__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__BaseOrientationWrenchDebug__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
