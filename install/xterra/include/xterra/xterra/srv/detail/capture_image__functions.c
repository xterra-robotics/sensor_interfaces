// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice
#include "xterra/srv/detail/capture_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `camera_name`
// Member `image_type`
#include "rosidl_runtime_c/string_functions.h"

bool
xterra__srv__CaptureImage_Request__init(xterra__srv__CaptureImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__init(&msg->camera_name)) {
    xterra__srv__CaptureImage_Request__fini(msg);
    return false;
  }
  // image_type
  if (!rosidl_runtime_c__String__init(&msg->image_type)) {
    xterra__srv__CaptureImage_Request__fini(msg);
    return false;
  }
  return true;
}

void
xterra__srv__CaptureImage_Request__fini(xterra__srv__CaptureImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_name
  rosidl_runtime_c__String__fini(&msg->camera_name);
  // image_type
  rosidl_runtime_c__String__fini(&msg->image_type);
}

bool
xterra__srv__CaptureImage_Request__are_equal(const xterra__srv__CaptureImage_Request * lhs, const xterra__srv__CaptureImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_name), &(rhs->camera_name)))
  {
    return false;
  }
  // image_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->image_type), &(rhs->image_type)))
  {
    return false;
  }
  return true;
}

bool
xterra__srv__CaptureImage_Request__copy(
  const xterra__srv__CaptureImage_Request * input,
  xterra__srv__CaptureImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_name), &(output->camera_name)))
  {
    return false;
  }
  // image_type
  if (!rosidl_runtime_c__String__copy(
      &(input->image_type), &(output->image_type)))
  {
    return false;
  }
  return true;
}

xterra__srv__CaptureImage_Request *
xterra__srv__CaptureImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__srv__CaptureImage_Request * msg = (xterra__srv__CaptureImage_Request *)allocator.allocate(sizeof(xterra__srv__CaptureImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__srv__CaptureImage_Request));
  bool success = xterra__srv__CaptureImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__srv__CaptureImage_Request__destroy(xterra__srv__CaptureImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__srv__CaptureImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__srv__CaptureImage_Request__Sequence__init(xterra__srv__CaptureImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__srv__CaptureImage_Request * data = NULL;

  if (size) {
    data = (xterra__srv__CaptureImage_Request *)allocator.zero_allocate(size, sizeof(xterra__srv__CaptureImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__srv__CaptureImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__srv__CaptureImage_Request__fini(&data[i - 1]);
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
xterra__srv__CaptureImage_Request__Sequence__fini(xterra__srv__CaptureImage_Request__Sequence * array)
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
      xterra__srv__CaptureImage_Request__fini(&array->data[i]);
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

xterra__srv__CaptureImage_Request__Sequence *
xterra__srv__CaptureImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__srv__CaptureImage_Request__Sequence * array = (xterra__srv__CaptureImage_Request__Sequence *)allocator.allocate(sizeof(xterra__srv__CaptureImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__srv__CaptureImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__srv__CaptureImage_Request__Sequence__destroy(xterra__srv__CaptureImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__srv__CaptureImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__srv__CaptureImage_Request__Sequence__are_equal(const xterra__srv__CaptureImage_Request__Sequence * lhs, const xterra__srv__CaptureImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__srv__CaptureImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__srv__CaptureImage_Request__Sequence__copy(
  const xterra__srv__CaptureImage_Request__Sequence * input,
  xterra__srv__CaptureImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__srv__CaptureImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__srv__CaptureImage_Request * data =
      (xterra__srv__CaptureImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__srv__CaptureImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__srv__CaptureImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__srv__CaptureImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `saved_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
xterra__srv__CaptureImage_Response__init(xterra__srv__CaptureImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reply
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    xterra__srv__CaptureImage_Response__fini(msg);
    return false;
  }
  // saved_path
  if (!rosidl_runtime_c__String__init(&msg->saved_path)) {
    xterra__srv__CaptureImage_Response__fini(msg);
    return false;
  }
  return true;
}

void
xterra__srv__CaptureImage_Response__fini(xterra__srv__CaptureImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // reply
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // saved_path
  rosidl_runtime_c__String__fini(&msg->saved_path);
}

bool
xterra__srv__CaptureImage_Response__are_equal(const xterra__srv__CaptureImage_Response * lhs, const xterra__srv__CaptureImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reply
  if (lhs->reply != rhs->reply) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // saved_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->saved_path), &(rhs->saved_path)))
  {
    return false;
  }
  return true;
}

bool
xterra__srv__CaptureImage_Response__copy(
  const xterra__srv__CaptureImage_Response * input,
  xterra__srv__CaptureImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reply
  output->reply = input->reply;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // saved_path
  if (!rosidl_runtime_c__String__copy(
      &(input->saved_path), &(output->saved_path)))
  {
    return false;
  }
  return true;
}

xterra__srv__CaptureImage_Response *
xterra__srv__CaptureImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__srv__CaptureImage_Response * msg = (xterra__srv__CaptureImage_Response *)allocator.allocate(sizeof(xterra__srv__CaptureImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__srv__CaptureImage_Response));
  bool success = xterra__srv__CaptureImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__srv__CaptureImage_Response__destroy(xterra__srv__CaptureImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__srv__CaptureImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__srv__CaptureImage_Response__Sequence__init(xterra__srv__CaptureImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__srv__CaptureImage_Response * data = NULL;

  if (size) {
    data = (xterra__srv__CaptureImage_Response *)allocator.zero_allocate(size, sizeof(xterra__srv__CaptureImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__srv__CaptureImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__srv__CaptureImage_Response__fini(&data[i - 1]);
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
xterra__srv__CaptureImage_Response__Sequence__fini(xterra__srv__CaptureImage_Response__Sequence * array)
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
      xterra__srv__CaptureImage_Response__fini(&array->data[i]);
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

xterra__srv__CaptureImage_Response__Sequence *
xterra__srv__CaptureImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__srv__CaptureImage_Response__Sequence * array = (xterra__srv__CaptureImage_Response__Sequence *)allocator.allocate(sizeof(xterra__srv__CaptureImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__srv__CaptureImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__srv__CaptureImage_Response__Sequence__destroy(xterra__srv__CaptureImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__srv__CaptureImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__srv__CaptureImage_Response__Sequence__are_equal(const xterra__srv__CaptureImage_Response__Sequence * lhs, const xterra__srv__CaptureImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__srv__CaptureImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__srv__CaptureImage_Response__Sequence__copy(
  const xterra__srv__CaptureImage_Response__Sequence * input,
  xterra__srv__CaptureImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__srv__CaptureImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__srv__CaptureImage_Response * data =
      (xterra__srv__CaptureImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__srv__CaptureImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__srv__CaptureImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__srv__CaptureImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
