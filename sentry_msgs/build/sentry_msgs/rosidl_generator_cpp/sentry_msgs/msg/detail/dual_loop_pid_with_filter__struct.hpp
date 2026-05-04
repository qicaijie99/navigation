// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__STRUCT_HPP_

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
# define DEPRECATED__sentry_msgs__msg__DualLoopPIDWithFilter __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__DualLoopPIDWithFilter __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DualLoopPIDWithFilter_
{
  using Type = DualLoopPIDWithFilter_<ContainerAllocator>;

  explicit DualLoopPIDWithFilter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inner_kp = 0.0;
      this->inner_ki = 0.0;
      this->inner_kd = 0.0;
      this->inner_p_filter_coefficient = 0.0;
      this->inner_d_filter_coefficient = 0.0;
      this->outer_kp = 0.0;
      this->outer_ki = 0.0;
      this->outer_kd = 0.0;
      this->outer_p_filter_coefficient = 0.0;
      this->outer_d_filter_coefficient = 0.0;
      this->inner_max_out = 0.0;
      this->inner_max_iout = 0.0;
      this->outer_max_out = 0.0;
      this->outer_max_iout = 0.0;
      this->inner_set = 0.0;
      this->inner_feedback = 0.0;
      this->inner_error = 0.0;
      this->inner_error_sum = 0.0;
      this->inner_last_error = 0.0;
      this->outer_set = 0.0;
      this->outer_feedback = 0.0;
      this->outer_error = 0.0;
      this->outer_error_sum = 0.0;
      this->outer_last_error = 0.0;
      this->inner_pout = 0.0;
      this->inner_iout = 0.0;
      this->inner_dout = 0.0;
      this->inner_out = 0.0;
      this->outer_pout = 0.0;
      this->outer_iout = 0.0;
      this->outer_dout = 0.0;
      this->outer_out = 0.0;
    }
  }

  explicit DualLoopPIDWithFilter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inner_kp = 0.0;
      this->inner_ki = 0.0;
      this->inner_kd = 0.0;
      this->inner_p_filter_coefficient = 0.0;
      this->inner_d_filter_coefficient = 0.0;
      this->outer_kp = 0.0;
      this->outer_ki = 0.0;
      this->outer_kd = 0.0;
      this->outer_p_filter_coefficient = 0.0;
      this->outer_d_filter_coefficient = 0.0;
      this->inner_max_out = 0.0;
      this->inner_max_iout = 0.0;
      this->outer_max_out = 0.0;
      this->outer_max_iout = 0.0;
      this->inner_set = 0.0;
      this->inner_feedback = 0.0;
      this->inner_error = 0.0;
      this->inner_error_sum = 0.0;
      this->inner_last_error = 0.0;
      this->outer_set = 0.0;
      this->outer_feedback = 0.0;
      this->outer_error = 0.0;
      this->outer_error_sum = 0.0;
      this->outer_last_error = 0.0;
      this->inner_pout = 0.0;
      this->inner_iout = 0.0;
      this->inner_dout = 0.0;
      this->inner_out = 0.0;
      this->outer_pout = 0.0;
      this->outer_iout = 0.0;
      this->outer_dout = 0.0;
      this->outer_out = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _inner_kp_type =
    double;
  _inner_kp_type inner_kp;
  using _inner_ki_type =
    double;
  _inner_ki_type inner_ki;
  using _inner_kd_type =
    double;
  _inner_kd_type inner_kd;
  using _inner_p_filter_coefficient_type =
    double;
  _inner_p_filter_coefficient_type inner_p_filter_coefficient;
  using _inner_d_filter_coefficient_type =
    double;
  _inner_d_filter_coefficient_type inner_d_filter_coefficient;
  using _outer_kp_type =
    double;
  _outer_kp_type outer_kp;
  using _outer_ki_type =
    double;
  _outer_ki_type outer_ki;
  using _outer_kd_type =
    double;
  _outer_kd_type outer_kd;
  using _outer_p_filter_coefficient_type =
    double;
  _outer_p_filter_coefficient_type outer_p_filter_coefficient;
  using _outer_d_filter_coefficient_type =
    double;
  _outer_d_filter_coefficient_type outer_d_filter_coefficient;
  using _inner_max_out_type =
    double;
  _inner_max_out_type inner_max_out;
  using _inner_max_iout_type =
    double;
  _inner_max_iout_type inner_max_iout;
  using _outer_max_out_type =
    double;
  _outer_max_out_type outer_max_out;
  using _outer_max_iout_type =
    double;
  _outer_max_iout_type outer_max_iout;
  using _inner_set_type =
    double;
  _inner_set_type inner_set;
  using _inner_feedback_type =
    double;
  _inner_feedback_type inner_feedback;
  using _inner_error_type =
    double;
  _inner_error_type inner_error;
  using _inner_error_sum_type =
    double;
  _inner_error_sum_type inner_error_sum;
  using _inner_last_error_type =
    double;
  _inner_last_error_type inner_last_error;
  using _outer_set_type =
    double;
  _outer_set_type outer_set;
  using _outer_feedback_type =
    double;
  _outer_feedback_type outer_feedback;
  using _outer_error_type =
    double;
  _outer_error_type outer_error;
  using _outer_error_sum_type =
    double;
  _outer_error_sum_type outer_error_sum;
  using _outer_last_error_type =
    double;
  _outer_last_error_type outer_last_error;
  using _inner_pout_type =
    double;
  _inner_pout_type inner_pout;
  using _inner_iout_type =
    double;
  _inner_iout_type inner_iout;
  using _inner_dout_type =
    double;
  _inner_dout_type inner_dout;
  using _inner_out_type =
    double;
  _inner_out_type inner_out;
  using _outer_pout_type =
    double;
  _outer_pout_type outer_pout;
  using _outer_iout_type =
    double;
  _outer_iout_type outer_iout;
  using _outer_dout_type =
    double;
  _outer_dout_type outer_dout;
  using _outer_out_type =
    double;
  _outer_out_type outer_out;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__inner_kp(
    const double & _arg)
  {
    this->inner_kp = _arg;
    return *this;
  }
  Type & set__inner_ki(
    const double & _arg)
  {
    this->inner_ki = _arg;
    return *this;
  }
  Type & set__inner_kd(
    const double & _arg)
  {
    this->inner_kd = _arg;
    return *this;
  }
  Type & set__inner_p_filter_coefficient(
    const double & _arg)
  {
    this->inner_p_filter_coefficient = _arg;
    return *this;
  }
  Type & set__inner_d_filter_coefficient(
    const double & _arg)
  {
    this->inner_d_filter_coefficient = _arg;
    return *this;
  }
  Type & set__outer_kp(
    const double & _arg)
  {
    this->outer_kp = _arg;
    return *this;
  }
  Type & set__outer_ki(
    const double & _arg)
  {
    this->outer_ki = _arg;
    return *this;
  }
  Type & set__outer_kd(
    const double & _arg)
  {
    this->outer_kd = _arg;
    return *this;
  }
  Type & set__outer_p_filter_coefficient(
    const double & _arg)
  {
    this->outer_p_filter_coefficient = _arg;
    return *this;
  }
  Type & set__outer_d_filter_coefficient(
    const double & _arg)
  {
    this->outer_d_filter_coefficient = _arg;
    return *this;
  }
  Type & set__inner_max_out(
    const double & _arg)
  {
    this->inner_max_out = _arg;
    return *this;
  }
  Type & set__inner_max_iout(
    const double & _arg)
  {
    this->inner_max_iout = _arg;
    return *this;
  }
  Type & set__outer_max_out(
    const double & _arg)
  {
    this->outer_max_out = _arg;
    return *this;
  }
  Type & set__outer_max_iout(
    const double & _arg)
  {
    this->outer_max_iout = _arg;
    return *this;
  }
  Type & set__inner_set(
    const double & _arg)
  {
    this->inner_set = _arg;
    return *this;
  }
  Type & set__inner_feedback(
    const double & _arg)
  {
    this->inner_feedback = _arg;
    return *this;
  }
  Type & set__inner_error(
    const double & _arg)
  {
    this->inner_error = _arg;
    return *this;
  }
  Type & set__inner_error_sum(
    const double & _arg)
  {
    this->inner_error_sum = _arg;
    return *this;
  }
  Type & set__inner_last_error(
    const double & _arg)
  {
    this->inner_last_error = _arg;
    return *this;
  }
  Type & set__outer_set(
    const double & _arg)
  {
    this->outer_set = _arg;
    return *this;
  }
  Type & set__outer_feedback(
    const double & _arg)
  {
    this->outer_feedback = _arg;
    return *this;
  }
  Type & set__outer_error(
    const double & _arg)
  {
    this->outer_error = _arg;
    return *this;
  }
  Type & set__outer_error_sum(
    const double & _arg)
  {
    this->outer_error_sum = _arg;
    return *this;
  }
  Type & set__outer_last_error(
    const double & _arg)
  {
    this->outer_last_error = _arg;
    return *this;
  }
  Type & set__inner_pout(
    const double & _arg)
  {
    this->inner_pout = _arg;
    return *this;
  }
  Type & set__inner_iout(
    const double & _arg)
  {
    this->inner_iout = _arg;
    return *this;
  }
  Type & set__inner_dout(
    const double & _arg)
  {
    this->inner_dout = _arg;
    return *this;
  }
  Type & set__inner_out(
    const double & _arg)
  {
    this->inner_out = _arg;
    return *this;
  }
  Type & set__outer_pout(
    const double & _arg)
  {
    this->outer_pout = _arg;
    return *this;
  }
  Type & set__outer_iout(
    const double & _arg)
  {
    this->outer_iout = _arg;
    return *this;
  }
  Type & set__outer_dout(
    const double & _arg)
  {
    this->outer_dout = _arg;
    return *this;
  }
  Type & set__outer_out(
    const double & _arg)
  {
    this->outer_out = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__DualLoopPIDWithFilter
    std::shared_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__DualLoopPIDWithFilter
    std::shared_ptr<sentry_msgs::msg::DualLoopPIDWithFilter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DualLoopPIDWithFilter_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->inner_kp != other.inner_kp) {
      return false;
    }
    if (this->inner_ki != other.inner_ki) {
      return false;
    }
    if (this->inner_kd != other.inner_kd) {
      return false;
    }
    if (this->inner_p_filter_coefficient != other.inner_p_filter_coefficient) {
      return false;
    }
    if (this->inner_d_filter_coefficient != other.inner_d_filter_coefficient) {
      return false;
    }
    if (this->outer_kp != other.outer_kp) {
      return false;
    }
    if (this->outer_ki != other.outer_ki) {
      return false;
    }
    if (this->outer_kd != other.outer_kd) {
      return false;
    }
    if (this->outer_p_filter_coefficient != other.outer_p_filter_coefficient) {
      return false;
    }
    if (this->outer_d_filter_coefficient != other.outer_d_filter_coefficient) {
      return false;
    }
    if (this->inner_max_out != other.inner_max_out) {
      return false;
    }
    if (this->inner_max_iout != other.inner_max_iout) {
      return false;
    }
    if (this->outer_max_out != other.outer_max_out) {
      return false;
    }
    if (this->outer_max_iout != other.outer_max_iout) {
      return false;
    }
    if (this->inner_set != other.inner_set) {
      return false;
    }
    if (this->inner_feedback != other.inner_feedback) {
      return false;
    }
    if (this->inner_error != other.inner_error) {
      return false;
    }
    if (this->inner_error_sum != other.inner_error_sum) {
      return false;
    }
    if (this->inner_last_error != other.inner_last_error) {
      return false;
    }
    if (this->outer_set != other.outer_set) {
      return false;
    }
    if (this->outer_feedback != other.outer_feedback) {
      return false;
    }
    if (this->outer_error != other.outer_error) {
      return false;
    }
    if (this->outer_error_sum != other.outer_error_sum) {
      return false;
    }
    if (this->outer_last_error != other.outer_last_error) {
      return false;
    }
    if (this->inner_pout != other.inner_pout) {
      return false;
    }
    if (this->inner_iout != other.inner_iout) {
      return false;
    }
    if (this->inner_dout != other.inner_dout) {
      return false;
    }
    if (this->inner_out != other.inner_out) {
      return false;
    }
    if (this->outer_pout != other.outer_pout) {
      return false;
    }
    if (this->outer_iout != other.outer_iout) {
      return false;
    }
    if (this->outer_dout != other.outer_dout) {
      return false;
    }
    if (this->outer_out != other.outer_out) {
      return false;
    }
    return true;
  }
  bool operator!=(const DualLoopPIDWithFilter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DualLoopPIDWithFilter_

// alias to use template instance with default allocator
using DualLoopPIDWithFilter =
  sentry_msgs::msg::DualLoopPIDWithFilter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__STRUCT_HPP_
