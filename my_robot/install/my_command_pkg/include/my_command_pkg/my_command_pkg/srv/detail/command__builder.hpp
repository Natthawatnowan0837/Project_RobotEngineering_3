// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_command_pkg:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__COMMAND__BUILDER_HPP_
#define MY_COMMAND_PKG__SRV__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_command_pkg/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_command_pkg
{

namespace srv
{

namespace builder
{

class Init_Command_Request_command
{
public:
  Init_Command_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_command_pkg::srv::Command_Request command(::my_command_pkg::srv::Command_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_command_pkg::srv::Command_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_command_pkg::srv::Command_Request>()
{
  return my_command_pkg::srv::builder::Init_Command_Request_command();
}

}  // namespace my_command_pkg


namespace my_command_pkg
{

namespace srv
{

namespace builder
{

class Init_Command_Response_pos_z
{
public:
  explicit Init_Command_Response_pos_z(::my_command_pkg::srv::Command_Response & msg)
  : msg_(msg)
  {}
  ::my_command_pkg::srv::Command_Response pos_z(::my_command_pkg::srv::Command_Response::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_command_pkg::srv::Command_Response msg_;
};

class Init_Command_Response_pos_y
{
public:
  explicit Init_Command_Response_pos_y(::my_command_pkg::srv::Command_Response & msg)
  : msg_(msg)
  {}
  Init_Command_Response_pos_z pos_y(::my_command_pkg::srv::Command_Response::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Command_Response_pos_z(msg_);
  }

private:
  ::my_command_pkg::srv::Command_Response msg_;
};

class Init_Command_Response_pos_x
{
public:
  Init_Command_Response_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_Response_pos_y pos_x(::my_command_pkg::srv::Command_Response::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Command_Response_pos_y(msg_);
  }

private:
  ::my_command_pkg::srv::Command_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_command_pkg::srv::Command_Response>()
{
  return my_command_pkg::srv::builder::Init_Command_Response_pos_x();
}

}  // namespace my_command_pkg

#endif  // MY_COMMAND_PKG__SRV__DETAIL__COMMAND__BUILDER_HPP_
