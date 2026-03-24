// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xterra:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__FUNCTIONS_H_
#define XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xterra/msg/rosidl_generator_c__visibility_control.h"

#include "xterra/msg/detail/motor_gain_multiplier__struct.h"

/// Initialize msg/MotorGainMultiplier message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xterra__msg__MotorGainMultiplier
 * )) before or use
 * xterra__msg__MotorGainMultiplier__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__MotorGainMultiplier__init(xterra__msg__MotorGainMultiplier * msg);

/// Finalize msg/MotorGainMultiplier message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__MotorGainMultiplier__fini(xterra__msg__MotorGainMultiplier * msg);

/// Create msg/MotorGainMultiplier message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xterra__msg__MotorGainMultiplier__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__MotorGainMultiplier *
xterra__msg__MotorGainMultiplier__create();

/// Destroy msg/MotorGainMultiplier message.
/**
 * It calls
 * xterra__msg__MotorGainMultiplier__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__MotorGainMultiplier__destroy(xterra__msg__MotorGainMultiplier * msg);

/// Check for msg/MotorGainMultiplier message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__MotorGainMultiplier__are_equal(const xterra__msg__MotorGainMultiplier * lhs, const xterra__msg__MotorGainMultiplier * rhs);

/// Copy a msg/MotorGainMultiplier message.
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
xterra__msg__MotorGainMultiplier__copy(
  const xterra__msg__MotorGainMultiplier * input,
  xterra__msg__MotorGainMultiplier * output);

/// Initialize array of msg/MotorGainMultiplier messages.
/**
 * It allocates the memory for the number of elements and calls
 * xterra__msg__MotorGainMultiplier__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__MotorGainMultiplier__Sequence__init(xterra__msg__MotorGainMultiplier__Sequence * array, size_t size);

/// Finalize array of msg/MotorGainMultiplier messages.
/**
 * It calls
 * xterra__msg__MotorGainMultiplier__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__MotorGainMultiplier__Sequence__fini(xterra__msg__MotorGainMultiplier__Sequence * array);

/// Create array of msg/MotorGainMultiplier messages.
/**
 * It allocates the memory for the array and calls
 * xterra__msg__MotorGainMultiplier__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__MotorGainMultiplier__Sequence *
xterra__msg__MotorGainMultiplier__Sequence__create(size_t size);

/// Destroy array of msg/MotorGainMultiplier messages.
/**
 * It calls
 * xterra__msg__MotorGainMultiplier__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__MotorGainMultiplier__Sequence__destroy(xterra__msg__MotorGainMultiplier__Sequence * array);

/// Check for msg/MotorGainMultiplier message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__MotorGainMultiplier__Sequence__are_equal(const xterra__msg__MotorGainMultiplier__Sequence * lhs, const xterra__msg__MotorGainMultiplier__Sequence * rhs);

/// Copy an array of msg/MotorGainMultiplier messages.
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
xterra__msg__MotorGainMultiplier__Sequence__copy(
  const xterra__msg__MotorGainMultiplier__Sequence * input,
  xterra__msg__MotorGainMultiplier__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__FUNCTIONS_H_
