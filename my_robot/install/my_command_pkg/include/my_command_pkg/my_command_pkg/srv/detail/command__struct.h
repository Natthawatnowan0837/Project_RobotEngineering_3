// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_command_pkg:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__COMMAND__STRUCT_H_
#define MY_COMMAND_PKG__SRV__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Command in the package my_command_pkg.
typedef struct my_command_pkg__srv__Command_Request
{
  rosidl_runtime_c__String command;
} my_command_pkg__srv__Command_Request;

// Struct for a sequence of my_command_pkg__srv__Command_Request.
typedef struct my_command_pkg__srv__Command_Request__Sequence
{
  my_command_pkg__srv__Command_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_command_pkg__srv__Command_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Command in the package my_command_pkg.
typedef struct my_command_pkg__srv__Command_Response
{
  int32_t pos_x;
  int32_t pos_y;
  int32_t pos_z;
} my_command_pkg__srv__Command_Response;

// Struct for a sequence of my_command_pkg__srv__Command_Response.
typedef struct my_command_pkg__srv__Command_Response__Sequence
{
  my_command_pkg__srv__Command_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_command_pkg__srv__Command_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_COMMAND_PKG__SRV__DETAIL__COMMAND__STRUCT_H_
