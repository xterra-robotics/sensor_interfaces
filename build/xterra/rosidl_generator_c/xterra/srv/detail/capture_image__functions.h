// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__SRV__DETAIL__CAPTURE_IMAGE__FUNCTIONS_H_
#define XTERRA__SRV__DETAIL__CAPTURE_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xterra/msg/rosidl_generator_c__visibility_control.h"

#include "xterra/srv/detail/capture_image__struct.h"

/// Initialize srv/CaptureImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xterra__srv__CaptureImage_Request
 * )) before or use
 * xterra__srv__CaptureImage_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Request__init(xterra__srv__CaptureImage_Request * msg);

/// Finalize srv/CaptureImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Request__fini(xterra__srv__CaptureImage_Request * msg);

/// Create srv/CaptureImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xterra__srv__CaptureImage_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__srv__CaptureImage_Request *
xterra__srv__CaptureImage_Request__create();

/// Destroy srv/CaptureImage message.
/**
 * It calls
 * xterra__srv__CaptureImage_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Request__destroy(xterra__srv__CaptureImage_Request * msg);

/// Check for srv/CaptureImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Request__are_equal(const xterra__srv__CaptureImage_Request * lhs, const xterra__srv__CaptureImage_Request * rhs);

/// Copy a srv/CaptureImage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Request__copy(
  const xterra__srv__CaptureImage_Request * input,
  xterra__srv__CaptureImage_Request * output);

/// Initialize array of srv/CaptureImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * xterra__srv__CaptureImage_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Request__Sequence__init(xterra__srv__CaptureImage_Request__Sequence * array, size_t size);

/// Finalize array of srv/CaptureImage messages.
/**
 * It calls
 * xterra__srv__CaptureImage_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Request__Sequence__fini(xterra__srv__CaptureImage_Request__Sequence * array);

/// Create array of srv/CaptureImage messages.
/**
 * It allocates the memory for the array and calls
 * xterra__srv__CaptureImage_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__srv__CaptureImage_Request__Sequence *
xterra__srv__CaptureImage_Request__Sequence__create(size_t size);

/// Destroy array of srv/CaptureImage messages.
/**
 * It calls
 * xterra__srv__CaptureImage_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Request__Sequence__destroy(xterra__srv__CaptureImage_Request__Sequence * array);

/// Check for srv/CaptureImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Request__Sequence__are_equal(const xterra__srv__CaptureImage_Request__Sequence * lhs, const xterra__srv__CaptureImage_Request__Sequence * rhs);

/// Copy an array of srv/CaptureImage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Request__Sequence__copy(
  const xterra__srv__CaptureImage_Request__Sequence * input,
  xterra__srv__CaptureImage_Request__Sequence * output);

/// Initialize srv/CaptureImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xterra__srv__CaptureImage_Response
 * )) before or use
 * xterra__srv__CaptureImage_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Response__init(xterra__srv__CaptureImage_Response * msg);

/// Finalize srv/CaptureImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Response__fini(xterra__srv__CaptureImage_Response * msg);

/// Create srv/CaptureImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xterra__srv__CaptureImage_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__srv__CaptureImage_Response *
xterra__srv__CaptureImage_Response__create();

/// Destroy srv/CaptureImage message.
/**
 * It calls
 * xterra__srv__CaptureImage_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Response__destroy(xterra__srv__CaptureImage_Response * msg);

/// Check for srv/CaptureImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Response__are_equal(const xterra__srv__CaptureImage_Response * lhs, const xterra__srv__CaptureImage_Response * rhs);

/// Copy a srv/CaptureImage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Response__copy(
  const xterra__srv__CaptureImage_Response * input,
  xterra__srv__CaptureImage_Response * output);

/// Initialize array of srv/CaptureImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * xterra__srv__CaptureImage_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Response__Sequence__init(xterra__srv__CaptureImage_Response__Sequence * array, size_t size);

/// Finalize array of srv/CaptureImage messages.
/**
 * It calls
 * xterra__srv__CaptureImage_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Response__Sequence__fini(xterra__srv__CaptureImage_Response__Sequence * array);

/// Create array of srv/CaptureImage messages.
/**
 * It allocates the memory for the array and calls
 * xterra__srv__CaptureImage_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__srv__CaptureImage_Response__Sequence *
xterra__srv__CaptureImage_Response__Sequence__create(size_t size);

/// Destroy array of srv/CaptureImage messages.
/**
 * It calls
 * xterra__srv__CaptureImage_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__srv__CaptureImage_Response__Sequence__destroy(xterra__srv__CaptureImage_Response__Sequence * array);

/// Check for srv/CaptureImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Response__Sequence__are_equal(const xterra__srv__CaptureImage_Response__Sequence * lhs, const xterra__srv__CaptureImage_Response__Sequence * rhs);

/// Copy an array of srv/CaptureImage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__srv__CaptureImage_Response__Sequence__copy(
  const xterra__srv__CaptureImage_Response__Sequence * input,
  xterra__srv__CaptureImage_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__SRV__DETAIL__CAPTURE_IMAGE__FUNCTIONS_H_
