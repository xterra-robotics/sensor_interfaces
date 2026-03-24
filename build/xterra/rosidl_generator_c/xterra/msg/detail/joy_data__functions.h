// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xterra:msg/JoyData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__JOY_DATA__FUNCTIONS_H_
#define XTERRA__MSG__DETAIL__JOY_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xterra/msg/rosidl_generator_c__visibility_control.h"

#include "xterra/msg/detail/joy_data__struct.h"

/// Initialize msg/JoyData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xterra__msg__JoyData
 * )) before or use
 * xterra__msg__JoyData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__JoyData__init(xterra__msg__JoyData * msg);

/// Finalize msg/JoyData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__JoyData__fini(xterra__msg__JoyData * msg);

/// Create msg/JoyData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xterra__msg__JoyData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__JoyData *
xterra__msg__JoyData__create();

/// Destroy msg/JoyData message.
/**
 * It calls
 * xterra__msg__JoyData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__JoyData__destroy(xterra__msg__JoyData * msg);

/// Check for msg/JoyData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__JoyData__are_equal(const xterra__msg__JoyData * lhs, const xterra__msg__JoyData * rhs);

/// Copy a msg/JoyData message.
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
xterra__msg__JoyData__copy(
  const xterra__msg__JoyData * input,
  xterra__msg__JoyData * output);

/// Initialize array of msg/JoyData messages.
/**
 * It allocates the memory for the number of elements and calls
 * xterra__msg__JoyData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__JoyData__Sequence__init(xterra__msg__JoyData__Sequence * array, size_t size);

/// Finalize array of msg/JoyData messages.
/**
 * It calls
 * xterra__msg__JoyData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__JoyData__Sequence__fini(xterra__msg__JoyData__Sequence * array);

/// Create array of msg/JoyData messages.
/**
 * It allocates the memory for the array and calls
 * xterra__msg__JoyData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__JoyData__Sequence *
xterra__msg__JoyData__Sequence__create(size_t size);

/// Destroy array of msg/JoyData messages.
/**
 * It calls
 * xterra__msg__JoyData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__JoyData__Sequence__destroy(xterra__msg__JoyData__Sequence * array);

/// Check for msg/JoyData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__JoyData__Sequence__are_equal(const xterra__msg__JoyData__Sequence * lhs, const xterra__msg__JoyData__Sequence * rhs);

/// Copy an array of msg/JoyData messages.
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
xterra__msg__JoyData__Sequence__copy(
  const xterra__msg__JoyData__Sequence * input,
  xterra__msg__JoyData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__JOY_DATA__FUNCTIONS_H_
