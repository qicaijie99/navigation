// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sentry_msgs__msg__BulletRemaining __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__BulletRemaining __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BulletRemaining_
{
  using Type = BulletRemaining_<ContainerAllocator>;

  explicit BulletRemaining_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_17mm_num = 0;
      this->remaining_42mm_num = 0;
      this->remaining_coin_num = 0;
    }
  }

  explicit BulletRemaining_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_17mm_num = 0;
      this->remaining_42mm_num = 0;
      this->remaining_coin_num = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _remaining_17mm_num_type =
    uint16_t;
  _remaining_17mm_num_type remaining_17mm_num;
  using _remaining_42mm_num_type =
    uint16_t;
  _remaining_42mm_num_type remaining_42mm_num;
  using _remaining_coin_num_type =
    uint16_t;
  _remaining_coin_num_type remaining_coin_num;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__remaining_17mm_num(
    const uint16_t & _arg)
  {
    this->remaining_17mm_num = _arg;
    return *this;
  }
  Type & set__remaining_42mm_num(
    const uint16_t & _arg)
  {
    this->remaining_42mm_num = _arg;
    return *this;
  }
  Type & set__remaining_coin_num(
    const uint16_t & _arg)
  {
    this->remaining_coin_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::msg::BulletRemaining_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::BulletRemaining_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::BulletRemaining_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::BulletRemaining_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__BulletRemaining
    std::shared_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__BulletRemaining
    std::shared_ptr<sentry_msgs::msg::BulletRemaining_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BulletRemaining_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->remaining_17mm_num != other.remaining_17mm_num) {
      return false;
    }
    if (this->remaining_42mm_num != other.remaining_42mm_num) {
      return false;
    }
    if (this->remaining_coin_num != other.remaining_coin_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const BulletRemaining_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BulletRemaining_

// alias to use template instance with default allocator
using BulletRemaining =
  sentry_msgs::msg::BulletRemaining_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_
