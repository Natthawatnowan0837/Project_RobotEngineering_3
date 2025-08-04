// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_srv_pkg:srv/DivideIntegers.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__STRUCT_HPP_
#define MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Request __declspec(deprecated)
#endif

namespace my_custom_srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DivideIntegers_Request_
{
  using Type = DivideIntegers_Request_<ContainerAllocator>;

  explicit DivideIntegers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dividend = 0ll;
      this->divisor = 0ll;
    }
  }

  explicit DivideIntegers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dividend = 0ll;
      this->divisor = 0ll;
    }
  }

  // field types and members
  using _dividend_type =
    int64_t;
  _dividend_type dividend;
  using _divisor_type =
    int64_t;
  _divisor_type divisor;

  // setters for named parameter idiom
  Type & set__dividend(
    const int64_t & _arg)
  {
    this->dividend = _arg;
    return *this;
  }
  Type & set__divisor(
    const int64_t & _arg)
  {
    this->divisor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Request
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Request
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DivideIntegers_Request_ & other) const
  {
    if (this->dividend != other.dividend) {
      return false;
    }
    if (this->divisor != other.divisor) {
      return false;
    }
    return true;
  }
  bool operator!=(const DivideIntegers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DivideIntegers_Request_

// alias to use template instance with default allocator
using DivideIntegers_Request =
  my_custom_srv_pkg::srv::DivideIntegers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_srv_pkg


#ifndef _WIN32
# define DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Response __declspec(deprecated)
#endif

namespace my_custom_srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DivideIntegers_Response_
{
  using Type = DivideIntegers_Response_<ContainerAllocator>;

  explicit DivideIntegers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
      this->success = false;
      this->message = "";
    }
  }

  explicit DivideIntegers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Response
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_srv_pkg__srv__DivideIntegers_Response
    std::shared_ptr<my_custom_srv_pkg::srv::DivideIntegers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DivideIntegers_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DivideIntegers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DivideIntegers_Response_

// alias to use template instance with default allocator
using DivideIntegers_Response =
  my_custom_srv_pkg::srv::DivideIntegers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_srv_pkg

namespace my_custom_srv_pkg
{

namespace srv
{

struct DivideIntegers
{
  using Request = my_custom_srv_pkg::srv::DivideIntegers_Request;
  using Response = my_custom_srv_pkg::srv::DivideIntegers_Response;
};

}  // namespace srv

}  // namespace my_custom_srv_pkg

#endif  // MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__STRUCT_HPP_
