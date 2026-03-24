// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xterra/srv/detail/capture_image__rosidl_typesupport_introspection_c.h"
#include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xterra/srv/detail/capture_image__functions.h"
#include "xterra/srv/detail/capture_image__struct.h"


// Include directives for member types
// Member `camera_name`
// Member `image_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xterra__srv__CaptureImage_Request__init(message_memory);
}

void xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_fini_function(void * message_memory)
{
  xterra__srv__CaptureImage_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_member_array[2] = {
  {
    "camera_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__srv__CaptureImage_Request, camera_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__srv__CaptureImage_Request, image_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_members = {
  "xterra__srv",  // message namespace
  "CaptureImage_Request",  // message name
  2,  // number of fields
  sizeof(xterra__srv__CaptureImage_Request),
  xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_member_array,  // message members
  xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_type_support_handle = {
  0,
  &xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage_Request)() {
  if (!xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_type_support_handle.typesupport_identifier) {
    xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xterra__srv__CaptureImage_Request__rosidl_typesupport_introspection_c__CaptureImage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xterra/srv/detail/capture_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xterra/srv/detail/capture_image__functions.h"
// already included above
// #include "xterra/srv/detail/capture_image__struct.h"


// Include directives for member types
// Member `message`
// Member `saved_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xterra__srv__CaptureImage_Response__init(message_memory);
}

void xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_fini_function(void * message_memory)
{
  xterra__srv__CaptureImage_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_member_array[3] = {
  {
    "reply",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__srv__CaptureImage_Response, reply),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__srv__CaptureImage_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "saved_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__srv__CaptureImage_Response, saved_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_members = {
  "xterra__srv",  // message namespace
  "CaptureImage_Response",  // message name
  3,  // number of fields
  sizeof(xterra__srv__CaptureImage_Response),
  xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_member_array,  // message members
  xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_type_support_handle = {
  0,
  &xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage_Response)() {
  if (!xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_type_support_handle.typesupport_identifier) {
    xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xterra__srv__CaptureImage_Response__rosidl_typesupport_introspection_c__CaptureImage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xterra/srv/detail/capture_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_members = {
  "xterra__srv",  // service namespace
  "CaptureImage",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_Request_message_type_support_handle,
  NULL  // response message
  // xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_Response_message_type_support_handle
};

static rosidl_service_type_support_t xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_type_support_handle = {
  0,
  &xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage)() {
  if (!xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_type_support_handle.typesupport_identifier) {
    xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, srv, CaptureImage_Response)()->data;
  }

  return &xterra__srv__detail__capture_image__rosidl_typesupport_introspection_c__CaptureImage_service_type_support_handle;
}
