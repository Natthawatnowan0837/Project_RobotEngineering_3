// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_srv_pkg:srv/DivideIntegers.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__BUILDER_HPP_
#define MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_srv_pkg/srv/detail/divide_integers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_srv_pkg
{

namespace srv
{

namespace builder
{

class Init_DivideIntegers_Request_divisor
{
public:
  explicit Init_DivideIntegers_Request_divisor(::my_custom_srv_pkg::srv::DivideIntegers_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_srv_pkg::srv::DivideIntegers_Request divisor(::my_custom_srv_pkg::srv::DivideIntegers_Request::_divisor_type arg)
  {
    msg_.divisor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_srv_pkg::srv::DivideIntegers_Request msg_;
};

class Init_DivideIntegers_Request_dividend
{
public:
  Init_DivideIntegers_Request_dividend()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivideIntegers_Request_divisor dividend(::my_custom_srv_pkg::srv::DivideIntegers_Request::_dividend_type arg)
  {
    msg_.dividend = std::move(arg);
    return Init_DivideIntegers_Request_divisor(msg_);
  }

private:
  ::my_custom_srv_pkg::srv::DivideIntegers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_srv_pkg::srv::DivideIntegers_Request>()
{
  return my_custom_srv_pkg::srv::builder::Init_DivideIntegers_Request_dividend();
}

}  // namespace my_custom_srv_pkg


namespace my_custom_srv_pkg
{

namespace srv
{

namespace builder
{

class Init_DivideIntegers_Response_message
{
public:
  explicit Init_DivideIntegers_Response_message(::my_custom_srv_pkg::srv::DivideIntegers_Response & msg)
  : msg_(msg)
  {}
  ::my_custom_srv_pkg::srv::DivideIntegers_Response message(::my_custom_srv_pkg::srv::DivideIntegers_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_srv_pkg::srv::DivideIntegers_Response msg_;
};

class Init_DivideIntegers_Response_success
{
public:
  explicit Init_DivideIntegers_Response_success(::my_custom_srv_pkg::srv::DivideIntegers_Response & msg)
  : msg_(msg)
  {}
  Init_DivideIntegers_Response_message success(::my_custom_srv_pkg::srv::DivideIntegers_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DivideIntegers_Response_message(msg_);
  }

private:
  ::my_custom_srv_pkg::srv::DivideIntegers_Response msg_;
};

class Init_DivideIntegers_Response_result
{
public:
  Init_DivideIntegers_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivideIntegers_Response_success result(::my_custom_srv_pkg::srv::DivideIntegers_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_DivideIntegers_Response_success(msg_);
  }

private:
  ::my_custom_srv_pkg::srv::DivideIntegers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_srv_pkg::srv::DivideIntegers_Response>()
{
  return my_custom_srv_pkg::srv::builder::Init_DivideIntegers_Response_result();
}

}  // namespace my_custom_srv_pkg

#endif  // MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__BUILDER_HPP_
