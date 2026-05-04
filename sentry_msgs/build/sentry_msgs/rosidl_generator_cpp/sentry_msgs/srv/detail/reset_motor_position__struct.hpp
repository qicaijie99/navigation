// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:srv/ResetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__STRUCT_HPP_
#define SENTRY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Request __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetMotorPosition_Request_
{
  using Type = ResetMotorPosition_Request_<ContainerAllocator>;

  explicit ResetMotorPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_name = "";
    }
  }

  explicit ResetMotorPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_name = "";
    }
  }

  // field types and members
  using _motor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motor_name_type motor_name;

  // setters for named parameter idiom
  Type & set__motor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motor_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Request
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Request
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetMotorPosition_Request_ & other) const
  {
    if (this->motor_name != other.motor_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetMotorPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetMotorPosition_Request_

// alias to use template instance with default allocator
using ResetMotorPosition_Request =
  sentry_msgs::srv::ResetMotorPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sentry_msgs


#ifndef _WIN32
# define DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Response __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetMotorPosition_Response_
{
  using Type = ResetMotorPosition_Response_<ContainerAllocator>;

  explicit ResetMotorPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succ = false;
    }
  }

  explicit ResetMotorPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succ = false;
    }
  }

  // field types and members
  using _succ_type =
    bool;
  _succ_type succ;

  // setters for named parameter idiom
  Type & set__succ(
    const bool & _arg)
  {
    this->succ = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Response
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__srv__ResetMotorPosition_Response
    std::shared_ptr<sentry_msgs::srv::ResetMotorPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetMotorPosition_Response_ & other) const
  {
    if (this->succ != other.succ) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetMotorPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetMotorPosition_Response_

// alias to use template instance with default allocator
using ResetMotorPosition_Response =
  sentry_msgs::srv::ResetMotorPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sentry_msgs

namespace sentry_msgs
{

namespace srv
{

struct ResetMotorPosition
{
  using Request = sentry_msgs::srv::ResetMotorPosition_Request;
  using Response = sentry_msgs::srv::ResetMotorPosition_Response;
};

}  // namespace srv

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__STRUCT_HPP_
