// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/solver_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__SolverStats__init(xterra__msg__SolverStats * msg)
{
  if (!msg) {
    return false;
  }
  // iters
  // max_iters
  // residual
  // constraint_violation
  // time_ms
  return true;
}

void
xterra__msg__SolverStats__fini(xterra__msg__SolverStats * msg)
{
  if (!msg) {
    return;
  }
  // iters
  // max_iters
  // residual
  // constraint_violation
  // time_ms
}

bool
xterra__msg__SolverStats__are_equal(const xterra__msg__SolverStats * lhs, const xterra__msg__SolverStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iters
  if (lhs->iters != rhs->iters) {
    return false;
  }
  // max_iters
  if (lhs->max_iters != rhs->max_iters) {
    return false;
  }
  // residual
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->residual[i] != rhs->residual[i]) {
      return false;
    }
  }
  // constraint_violation
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->constraint_violation[i] != rhs->constraint_violation[i]) {
      return false;
    }
  }
  // time_ms
  if (lhs->time_ms != rhs->time_ms) {
    return false;
  }
  return true;
}

bool
xterra__msg__SolverStats__copy(
  const xterra__msg__SolverStats * input,
  xterra__msg__SolverStats * output)
{
  if (!input || !output) {
    return false;
  }
  // iters
  output->iters = input->iters;
  // max_iters
  output->max_iters = input->max_iters;
  // residual
  for (size_t i = 0; i < 6; ++i) {
    output->residual[i] = input->residual[i];
  }
  // constraint_violation
  for (size_t i = 0; i < 4; ++i) {
    output->constraint_violation[i] = input->constraint_violation[i];
  }
  // time_ms
  output->time_ms = input->time_ms;
  return true;
}

xterra__msg__SolverStats *
xterra__msg__SolverStats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__SolverStats * msg = (xterra__msg__SolverStats *)allocator.allocate(sizeof(xterra__msg__SolverStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__SolverStats));
  bool success = xterra__msg__SolverStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__SolverStats__destroy(xterra__msg__SolverStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__SolverStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__SolverStats__Sequence__init(xterra__msg__SolverStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__SolverStats * data = NULL;

  if (size) {
    data = (xterra__msg__SolverStats *)allocator.zero_allocate(size, sizeof(xterra__msg__SolverStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__SolverStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__SolverStats__fini(&data[i - 1]);
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
xterra__msg__SolverStats__Sequence__fini(xterra__msg__SolverStats__Sequence * array)
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
      xterra__msg__SolverStats__fini(&array->data[i]);
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

xterra__msg__SolverStats__Sequence *
xterra__msg__SolverStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__SolverStats__Sequence * array = (xterra__msg__SolverStats__Sequence *)allocator.allocate(sizeof(xterra__msg__SolverStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__SolverStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__SolverStats__Sequence__destroy(xterra__msg__SolverStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__SolverStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__SolverStats__Sequence__are_equal(const xterra__msg__SolverStats__Sequence * lhs, const xterra__msg__SolverStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__SolverStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__SolverStats__Sequence__copy(
  const xterra__msg__SolverStats__Sequence * input,
  xterra__msg__SolverStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__SolverStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__SolverStats * data =
      (xterra__msg__SolverStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__SolverStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__SolverStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__SolverStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
