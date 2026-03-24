// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_H_
#define XTERRA__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_name'
// Member 'image_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureImage in the package xterra.
typedef struct xterra__srv__CaptureImage_Request
{
  rosidl_runtime_c__String camera_name;
  rosidl_runtime_c__String image_type;
} xterra__srv__CaptureImage_Request;

// Struct for a sequence of xterra__srv__CaptureImage_Request.
typedef struct xterra__srv__CaptureImage_Request__Sequence
{
  xterra__srv__CaptureImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__srv__CaptureImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'saved_path'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureImage in the package xterra.
typedef struct xterra__srv__CaptureImage_Response
{
  bool reply;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String saved_path;
} xterra__srv__CaptureImage_Response;

// Struct for a sequence of xterra__srv__CaptureImage_Response.
typedef struct xterra__srv__CaptureImage_Response__Sequence
{
  xterra__srv__CaptureImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__srv__CaptureImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_H_
