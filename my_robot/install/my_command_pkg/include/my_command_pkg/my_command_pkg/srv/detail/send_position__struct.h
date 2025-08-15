// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_command_pkg:srv/SendPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__STRUCT_H_
#define MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendPosition in the package my_command_pkg.
typedef struct my_command_pkg__srv__SendPosition_Request
{
  int32_t send_x;
  int32_t send_y;
  int32_t send_z;
} my_command_pkg__srv__SendPosition_Request;

// Struct for a sequence of my_command_pkg__srv__SendPosition_Request.
typedef struct my_command_pkg__srv__SendPosition_Request__Sequence
{
  my_command_pkg__srv__SendPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_command_pkg__srv__SendPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendPosition in the package my_command_pkg.
typedef struct my_command_pkg__srv__SendPosition_Response
{
  rosidl_runtime_c__String message;
  bool success;
} my_command_pkg__srv__SendPosition_Response;

// Struct for a sequence of my_command_pkg__srv__SendPosition_Response.
typedef struct my_command_pkg__srv__SendPosition_Response__Sequence
{
  my_command_pkg__srv__SendPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_command_pkg__srv__SendPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__STRUCT_H_
