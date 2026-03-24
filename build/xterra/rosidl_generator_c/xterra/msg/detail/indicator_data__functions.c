// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/IndicatorData.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/indicator_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__IndicatorData__init(xterra__msg__IndicatorData * msg)
{
  if (!msg) {
    return false;
  }
  // led1
  // led2
  // led3
  // buzzer
  return true;
}

void
xterra__msg__IndicatorData__fini(xterra__msg__IndicatorData * msg)
{
  if (!msg) {
    return;
  }
  // led1
  // led2
  // led3
  // buzzer
}

bool
xterra__msg__IndicatorData__are_equal(const xterra__msg__IndicatorData * lhs, const xterra__msg__IndicatorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led1
  if (lhs->led1 != rhs->led1) {
    return false;
  }
  // led2
  if (lhs->led2 != rhs->led2) {
    return false;
  }
  // led3
  if (lhs->led3 != rhs->led3) {
    return false;
  }
  // buzzer
  if (lhs->buzzer != rhs->buzzer) {
    return false;
  }
  return true;
}

bool
xterra__msg__IndicatorData__copy(
  const xterra__msg__IndicatorData * input,
  xterra__msg__IndicatorData * output)
{
  if (!input || !output) {
    return false;
  }
  // led1
  output->led1 = input->led1;
  // led2
  output->led2 = input->led2;
  // led3
  output->led3 = input->led3;
  // buzzer
  output->buzzer = input->buzzer;
  return true;
}

xterra__msg__IndicatorData *
xterra__msg__IndicatorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__IndicatorData * msg = (xterra__msg__IndicatorData *)allocator.allocate(sizeof(xterra__msg__IndicatorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__IndicatorData));
  bool success = xterra__msg__IndicatorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__IndicatorData__destroy(xterra__msg__IndicatorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__IndicatorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__IndicatorData__Sequence__init(xterra__msg__IndicatorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__IndicatorData * data = NULL;

  if (size) {
    data = (xterra__msg__IndicatorData *)allocator.zero_allocate(size, sizeof(xterra__msg__IndicatorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__IndicatorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__IndicatorData__fini(&data[i - 1]);
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
xterra__msg__IndicatorData__Sequence__fini(xterra__msg__IndicatorData__Sequence * array)
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
      xterra__msg__IndicatorData__fini(&array->data[i]);
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

xterra__msg__IndicatorData__Sequence *
xterra__msg__IndicatorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__IndicatorData__Sequence * array = (xterra__msg__IndicatorData__Sequence *)allocator.allocate(sizeof(xterra__msg__IndicatorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__IndicatorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__IndicatorData__Sequence__destroy(xterra__msg__IndicatorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__IndicatorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__IndicatorData__Sequence__are_equal(const xterra__msg__IndicatorData__Sequence * lhs, const xterra__msg__IndicatorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__IndicatorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__IndicatorData__Sequence__copy(
  const xterra__msg__IndicatorData__Sequence * input,
  xterra__msg__IndicatorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__IndicatorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__IndicatorData * data =
      (xterra__msg__IndicatorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__IndicatorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__IndicatorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__IndicatorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
