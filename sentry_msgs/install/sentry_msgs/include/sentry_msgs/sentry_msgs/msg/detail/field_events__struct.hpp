// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__STRUCT_HPP_

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
# define DEPRECATED__sentry_msgs__msg__FieldEvents __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__FieldEvents __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldEvents_
{
  using Type = FieldEvents_<ContainerAllocator>;

  explicit FieldEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supplier_1_occupation = false;
      this->supplier_2_occupation = false;
      this->supplier_3_occupation = false;
      this->power_rune_activation_point_occupation = false;
      this->small_power_rune_activation_status = false;
      this->big_power_rune_activation_status = false;
      this->r2b2_ground_occupation = false;
      this->r3b3_ground_occupation = false;
      this->r4b4_ground_occupation = false;
      this->base_has_shield = false;
      this->outpost_alive = false;
    }
  }

  explicit FieldEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supplier_1_occupation = false;
      this->supplier_2_occupation = false;
      this->supplier_3_occupation = false;
      this->power_rune_activation_point_occupation = false;
      this->small_power_rune_activation_status = false;
      this->big_power_rune_activation_status = false;
      this->r2b2_ground_occupation = false;
      this->r3b3_ground_occupation = false;
      this->r4b4_ground_occupation = false;
      this->base_has_shield = false;
      this->outpost_alive = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _supplier_1_occupation_type =
    bool;
  _supplier_1_occupation_type supplier_1_occupation;
  using _supplier_2_occupation_type =
    bool;
  _supplier_2_occupation_type supplier_2_occupation;
  using _supplier_3_occupation_type =
    bool;
  _supplier_3_occupation_type supplier_3_occupation;
  using _power_rune_activation_point_occupation_type =
    bool;
  _power_rune_activation_point_occupation_type power_rune_activation_point_occupation;
  using _small_power_rune_activation_status_type =
    bool;
  _small_power_rune_activation_status_type small_power_rune_activation_status;
  using _big_power_rune_activation_status_type =
    bool;
  _big_power_rune_activation_status_type big_power_rune_activation_status;
  using _r2b2_ground_occupation_type =
    bool;
  _r2b2_ground_occupation_type r2b2_ground_occupation;
  using _r3b3_ground_occupation_type =
    bool;
  _r3b3_ground_occupation_type r3b3_ground_occupation;
  using _r4b4_ground_occupation_type =
    bool;
  _r4b4_ground_occupation_type r4b4_ground_occupation;
  using _base_has_shield_type =
    bool;
  _base_has_shield_type base_has_shield;
  using _outpost_alive_type =
    bool;
  _outpost_alive_type outpost_alive;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__supplier_1_occupation(
    const bool & _arg)
  {
    this->supplier_1_occupation = _arg;
    return *this;
  }
  Type & set__supplier_2_occupation(
    const bool & _arg)
  {
    this->supplier_2_occupation = _arg;
    return *this;
  }
  Type & set__supplier_3_occupation(
    const bool & _arg)
  {
    this->supplier_3_occupation = _arg;
    return *this;
  }
  Type & set__power_rune_activation_point_occupation(
    const bool & _arg)
  {
    this->power_rune_activation_point_occupation = _arg;
    return *this;
  }
  Type & set__small_power_rune_activation_status(
    const bool & _arg)
  {
    this->small_power_rune_activation_status = _arg;
    return *this;
  }
  Type & set__big_power_rune_activation_status(
    const bool & _arg)
  {
    this->big_power_rune_activation_status = _arg;
    return *this;
  }
  Type & set__r2b2_ground_occupation(
    const bool & _arg)
  {
    this->r2b2_ground_occupation = _arg;
    return *this;
  }
  Type & set__r3b3_ground_occupation(
    const bool & _arg)
  {
    this->r3b3_ground_occupation = _arg;
    return *this;
  }
  Type & set__r4b4_ground_occupation(
    const bool & _arg)
  {
    this->r4b4_ground_occupation = _arg;
    return *this;
  }
  Type & set__base_has_shield(
    const bool & _arg)
  {
    this->base_has_shield = _arg;
    return *this;
  }
  Type & set__outpost_alive(
    const bool & _arg)
  {
    this->outpost_alive = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::msg::FieldEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::FieldEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::FieldEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::FieldEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__FieldEvents
    std::shared_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__FieldEvents
    std::shared_ptr<sentry_msgs::msg::FieldEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldEvents_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->supplier_1_occupation != other.supplier_1_occupation) {
      return false;
    }
    if (this->supplier_2_occupation != other.supplier_2_occupation) {
      return false;
    }
    if (this->supplier_3_occupation != other.supplier_3_occupation) {
      return false;
    }
    if (this->power_rune_activation_point_occupation != other.power_rune_activation_point_occupation) {
      return false;
    }
    if (this->small_power_rune_activation_status != other.small_power_rune_activation_status) {
      return false;
    }
    if (this->big_power_rune_activation_status != other.big_power_rune_activation_status) {
      return false;
    }
    if (this->r2b2_ground_occupation != other.r2b2_ground_occupation) {
      return false;
    }
    if (this->r3b3_ground_occupation != other.r3b3_ground_occupation) {
      return false;
    }
    if (this->r4b4_ground_occupation != other.r4b4_ground_occupation) {
      return false;
    }
    if (this->base_has_shield != other.base_has_shield) {
      return false;
    }
    if (this->outpost_alive != other.outpost_alive) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldEvents_

// alias to use template instance with default allocator
using FieldEvents =
  sentry_msgs::msg::FieldEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__STRUCT_HPP_
