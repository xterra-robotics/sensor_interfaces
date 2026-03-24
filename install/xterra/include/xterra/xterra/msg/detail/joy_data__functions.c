// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/JoyData.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/joy_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__JoyData__init(xterra__msg__JoyData * msg)
{
  if (!msg) {
    return false;
  }
  // priority
  // axes
  // buttons
  return true;
}

void
xterra__msg__JoyData__fini(xterra__msg__JoyData * msg)
{
  if (!msg) {
    return;
  }
  // priority
  // axes
  // buttons
}

bool
xterra__msg__JoyData__are_equal(const xterra__msg__JoyData * lhs, const xterra__msg__JoyData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // axes
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->axes[i] != rhs->axes[i]) {
      return false;
    }
  }
  // buttons
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->buttons[i] != rhs->buttons[i]) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__JoyData__copy(
  const xterra__msg__JoyData * input,
  xterra__msg__JoyData * output)
{
  if (!input || !output) {
    return false;
  }
  // priority
  output->priority = input->priority;
  // axes
  for (size_t i = 0; i < 6; ++i) {
    output->axes[i] = input->axes[i];
  }
  // buttons
  for (size_t i = 0; i < 12; ++i) {
    output->buttons[i] = input->buttons[i];
  }
  return true;
}

xterra__msg__JoyData *
xterra__msg__JoyData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__JoyData * msg = (xterra__msg__JoyData *)allocator.allocate(sizeof(xterra__msg__JoyData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__JoyData));
  bool success = xterra__msg__JoyData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__JoyData__destroy(xterra__msg__JoyData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__JoyData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__JoyData__Sequence__init(xterra__msg__JoyData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__JoyData * data = NULL;

  if (size) {
    data = (xterra__msg__JoyData *)allocator.zero_allocate(size, sizeof(xterra__msg__JoyData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__JoyData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__JoyData__fini(&data[i - 1]);
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
xterra__msg__JoyData__Sequence__fini(xterra__msg__JoyData__Sequence * array)
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
      xterra__msg__JoyData__fini(&array->data[i]);
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

xterra__msg__JoyData__Sequence *
xterra__msg__JoyData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__JoyData__Sequence * array = (xterra__msg__JoyData__Sequence *)allocator.allocate(sizeof(xterra__msg__JoyData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__JoyData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__JoyData__Sequence__destroy(xterra__msg__JoyData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__JoyData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__JoyData__Sequence__are_equal(const xterra__msg__JoyData__Sequence * lhs, const xterra__msg__JoyData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__JoyData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__JoyData__Sequence__copy(
  const xterra__msg__JoyData__Sequence * input,
  xterra__msg__JoyData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__JoyData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__JoyData * data =
      (xterra__msg__JoyData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__JoyData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__JoyData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__JoyData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
