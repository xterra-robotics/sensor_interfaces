// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/Point3D.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/point3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__Point3D__init(xterra__msg__Point3D * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
xterra__msg__Point3D__fini(xterra__msg__Point3D * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
xterra__msg__Point3D__are_equal(const xterra__msg__Point3D * lhs, const xterra__msg__Point3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
xterra__msg__Point3D__copy(
  const xterra__msg__Point3D * input,
  xterra__msg__Point3D * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

xterra__msg__Point3D *
xterra__msg__Point3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__Point3D * msg = (xterra__msg__Point3D *)allocator.allocate(sizeof(xterra__msg__Point3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__Point3D));
  bool success = xterra__msg__Point3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__Point3D__destroy(xterra__msg__Point3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__Point3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__Point3D__Sequence__init(xterra__msg__Point3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__Point3D * data = NULL;

  if (size) {
    data = (xterra__msg__Point3D *)allocator.zero_allocate(size, sizeof(xterra__msg__Point3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__Point3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__Point3D__fini(&data[i - 1]);
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
xterra__msg__Point3D__Sequence__fini(xterra__msg__Point3D__Sequence * array)
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
      xterra__msg__Point3D__fini(&array->data[i]);
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

xterra__msg__Point3D__Sequence *
xterra__msg__Point3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__Point3D__Sequence * array = (xterra__msg__Point3D__Sequence *)allocator.allocate(sizeof(xterra__msg__Point3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__Point3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__Point3D__Sequence__destroy(xterra__msg__Point3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__Point3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__Point3D__Sequence__are_equal(const xterra__msg__Point3D__Sequence * lhs, const xterra__msg__Point3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__Point3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__Point3D__Sequence__copy(
  const xterra__msg__Point3D__Sequence * input,
  xterra__msg__Point3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__Point3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__Point3D * data =
      (xterra__msg__Point3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__Point3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__Point3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__Point3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
