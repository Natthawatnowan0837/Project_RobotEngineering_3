// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_command_pkg:srv/SendPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__BUILDER_HPP_
#define MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_command_pkg/srv/detail/send_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_command_pkg
{

namespace srv
{

namespace builder
{

class Init_SendPosition_Request_send_z
{
public:
  explicit Init_SendPosition_Request_send_z(::my_command_pkg::srv::SendPosition_Request & msg)
  : msg_(msg)
  {}
  ::my_command_pkg::srv::SendPosition_Request send_z(::my_command_pkg::srv::SendPosition_Request::_send_z_type arg)
  {
    msg_.send_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_command_pkg::srv::SendPosition_Request msg_;
};

class Init_SendPosition_Request_send_y
{
public:
  explicit Init_SendPosition_Request_send_y(::my_command_pkg::srv::SendPosition_Request & msg)
  : msg_(msg)
  {}
  Init_SendPosition_Request_send_z send_y(::my_command_pkg::srv::SendPosition_Request::_send_y_type arg)
  {
    msg_.send_y = std::move(arg);
    return Init_SendPosition_Request_send_z(msg_);
  }

private:
  ::my_command_pkg::srv::SendPosition_Request msg_;
};

class Init_SendPosition_Request_send_x
{
public:
  Init_SendPosition_Request_send_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendPosition_Request_send_y send_x(::my_command_pkg::srv::SendPosition_Request::_send_x_type arg)
  {
    msg_.send_x = std::move(arg);
    return Init_SendPosition_Request_send_y(msg_);
  }

private:
  ::my_command_pkg::srv::SendPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_command_pkg::srv::SendPosition_Request>()
{
  return my_command_pkg::srv::builder::Init_SendPosition_Request_send_x();
}

}  // namespace my_command_pkg


namespace my_command_pkg
{

namespace srv
{

namespace builder
{

class Init_SendPosition_Response_success
{
public:
  explicit Init_SendPosition_Response_success(::my_command_pkg::srv::SendPosition_Response & msg)
  : msg_(msg)
  {}
  ::my_command_pkg::srv::SendPosition_Response success(::my_command_pkg::srv::SendPosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_command_pkg::srv::SendPosition_Response msg_;
};

class Init_SendPosition_Response_message
{
public:
  Init_SendPosition_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendPosition_Response_success message(::my_command_pkg::srv::SendPosition_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SendPosition_Response_success(msg_);
  }

private:
  ::my_command_pkg::srv::SendPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_command_pkg::srv::SendPosition_Response>()
{
  return my_command_pkg::srv::builder::Init_SendPosition_Response_message();
}

}  // namespace my_command_pkg

#endif  // MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__BUILDER_HPP_
