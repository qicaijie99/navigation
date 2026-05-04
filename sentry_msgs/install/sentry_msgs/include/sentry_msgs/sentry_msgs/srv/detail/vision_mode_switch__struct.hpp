// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_HPP_
#define SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Request __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Request __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisionModeSwitch_Request_
{
  using Type = VisionModeSwitch_Request_<ContainerAllocator>;

  explicit VisionModeSwitch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit VisionModeSwitch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_ARMOR =
    1u;
  static constexpr uint8_t MODE_SMALL =
    2u;
  static constexpr uint8_t MODE_BIG =
    3u;
  static constexpr uint8_t MODE_TAG =
    4u;

  // pointer types
  using RawPtr =
    sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Request
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Request
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionModeSwitch_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionModeSwitch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionModeSwitch_Request_

// alias to use template instance with default allocator
using VisionModeSwitch_Request =
  sentry_msgs::srv::VisionModeSwitch_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisionModeSwitch_Request_<ContainerAllocator>::MODE_ARMOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisionModeSwitch_Request_<ContainerAllocator>::MODE_SMALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisionModeSwitch_Request_<ContainerAllocator>::MODE_BIG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisionModeSwitch_Request_<ContainerAllocator>::MODE_TAG;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace sentry_msgs


#ifndef _WIN32
# define DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Response __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Response __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisionModeSwitch_Response_
{
  using Type = VisionModeSwitch_Response_<ContainerAllocator>;

  explicit VisionModeSwitch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succ = false;
    }
  }

  explicit VisionModeSwitch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Response
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__srv__VisionModeSwitch_Response
    std::shared_ptr<sentry_msgs::srv::VisionModeSwitch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionModeSwitch_Response_ & other) const
  {
    if (this->succ != other.succ) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionModeSwitch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionModeSwitch_Response_

// alias to use template instance with default allocator
using VisionModeSwitch_Response =
  sentry_msgs::srv::VisionModeSwitch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sentry_msgs

namespace sentry_msgs
{

namespace srv
{

struct VisionModeSwitch
{
  using Request = sentry_msgs::srv::VisionModeSwitch_Request;
  using Response = sentry_msgs::srv::VisionModeSwitch_Response;
};

}  // namespace srv

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_HPP_
