// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/msg/telem_data.hpp"


#ifndef ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__STRUCT_HPP_
#define ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rover_interfaces__msg__TelemData __attribute__((deprecated))
#else
# define DEPRECATED__rover_interfaces__msg__TelemData __declspec(deprecated)
#endif

namespace rover_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TelemData_
{
  using Type = TelemData_<ContainerAllocator>;

  explicit TelemData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enc1 = 0.0f;
      this->enc2 = 0.0f;
      this->enc3 = 0.0f;
      this->enc4 = 0.0f;
      this->vel1 = 0.0f;
      this->vel2 = 0.0f;
      this->vel3 = 0.0f;
      this->vel4 = 0.0f;
      this->m1current = 0.0f;
      this->m2current = 0.0f;
      this->m3current = 0.0f;
      this->m4current = 0.0f;
      this->heading_x = 0.0f;
      this->heading_y = 0.0f;
      this->heading_z = 0.0f;
      this->heading_pos = 0.0f;
      this->heading_vel = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
      this->ang_accel_x = 0.0f;
      this->ang_accel_y = 0.0f;
      this->ang_accel_z = 0.0f;
    }
  }

  explicit TelemData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enc1 = 0.0f;
      this->enc2 = 0.0f;
      this->enc3 = 0.0f;
      this->enc4 = 0.0f;
      this->vel1 = 0.0f;
      this->vel2 = 0.0f;
      this->vel3 = 0.0f;
      this->vel4 = 0.0f;
      this->m1current = 0.0f;
      this->m2current = 0.0f;
      this->m3current = 0.0f;
      this->m4current = 0.0f;
      this->heading_x = 0.0f;
      this->heading_y = 0.0f;
      this->heading_z = 0.0f;
      this->heading_pos = 0.0f;
      this->heading_vel = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
      this->ang_accel_x = 0.0f;
      this->ang_accel_y = 0.0f;
      this->ang_accel_z = 0.0f;
    }
  }

  // field types and members
  using _enc1_type =
    float;
  _enc1_type enc1;
  using _enc2_type =
    float;
  _enc2_type enc2;
  using _enc3_type =
    float;
  _enc3_type enc3;
  using _enc4_type =
    float;
  _enc4_type enc4;
  using _vel1_type =
    float;
  _vel1_type vel1;
  using _vel2_type =
    float;
  _vel2_type vel2;
  using _vel3_type =
    float;
  _vel3_type vel3;
  using _vel4_type =
    float;
  _vel4_type vel4;
  using _m1current_type =
    float;
  _m1current_type m1current;
  using _m2current_type =
    float;
  _m2current_type m2current;
  using _m3current_type =
    float;
  _m3current_type m3current;
  using _m4current_type =
    float;
  _m4current_type m4current;
  using _heading_x_type =
    float;
  _heading_x_type heading_x;
  using _heading_y_type =
    float;
  _heading_y_type heading_y;
  using _heading_z_type =
    float;
  _heading_z_type heading_z;
  using _heading_pos_type =
    float;
  _heading_pos_type heading_pos;
  using _heading_vel_type =
    float;
  _heading_vel_type heading_vel;
  using _accel_x_type =
    float;
  _accel_x_type accel_x;
  using _accel_y_type =
    float;
  _accel_y_type accel_y;
  using _accel_z_type =
    float;
  _accel_z_type accel_z;
  using _ang_accel_x_type =
    float;
  _ang_accel_x_type ang_accel_x;
  using _ang_accel_y_type =
    float;
  _ang_accel_y_type ang_accel_y;
  using _ang_accel_z_type =
    float;
  _ang_accel_z_type ang_accel_z;

  // setters for named parameter idiom
  Type & set__enc1(
    const float & _arg)
  {
    this->enc1 = _arg;
    return *this;
  }
  Type & set__enc2(
    const float & _arg)
  {
    this->enc2 = _arg;
    return *this;
  }
  Type & set__enc3(
    const float & _arg)
  {
    this->enc3 = _arg;
    return *this;
  }
  Type & set__enc4(
    const float & _arg)
  {
    this->enc4 = _arg;
    return *this;
  }
  Type & set__vel1(
    const float & _arg)
  {
    this->vel1 = _arg;
    return *this;
  }
  Type & set__vel2(
    const float & _arg)
  {
    this->vel2 = _arg;
    return *this;
  }
  Type & set__vel3(
    const float & _arg)
  {
    this->vel3 = _arg;
    return *this;
  }
  Type & set__vel4(
    const float & _arg)
  {
    this->vel4 = _arg;
    return *this;
  }
  Type & set__m1current(
    const float & _arg)
  {
    this->m1current = _arg;
    return *this;
  }
  Type & set__m2current(
    const float & _arg)
  {
    this->m2current = _arg;
    return *this;
  }
  Type & set__m3current(
    const float & _arg)
  {
    this->m3current = _arg;
    return *this;
  }
  Type & set__m4current(
    const float & _arg)
  {
    this->m4current = _arg;
    return *this;
  }
  Type & set__heading_x(
    const float & _arg)
  {
    this->heading_x = _arg;
    return *this;
  }
  Type & set__heading_y(
    const float & _arg)
  {
    this->heading_y = _arg;
    return *this;
  }
  Type & set__heading_z(
    const float & _arg)
  {
    this->heading_z = _arg;
    return *this;
  }
  Type & set__heading_pos(
    const float & _arg)
  {
    this->heading_pos = _arg;
    return *this;
  }
  Type & set__heading_vel(
    const float & _arg)
  {
    this->heading_vel = _arg;
    return *this;
  }
  Type & set__accel_x(
    const float & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const float & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const float & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }
  Type & set__ang_accel_x(
    const float & _arg)
  {
    this->ang_accel_x = _arg;
    return *this;
  }
  Type & set__ang_accel_y(
    const float & _arg)
  {
    this->ang_accel_y = _arg;
    return *this;
  }
  Type & set__ang_accel_z(
    const float & _arg)
  {
    this->ang_accel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rover_interfaces::msg::TelemData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rover_interfaces::msg::TelemData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rover_interfaces::msg::TelemData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rover_interfaces::msg::TelemData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rover_interfaces__msg__TelemData
    std::shared_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rover_interfaces__msg__TelemData
    std::shared_ptr<rover_interfaces::msg::TelemData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TelemData_ & other) const
  {
    if (this->enc1 != other.enc1) {
      return false;
    }
    if (this->enc2 != other.enc2) {
      return false;
    }
    if (this->enc3 != other.enc3) {
      return false;
    }
    if (this->enc4 != other.enc4) {
      return false;
    }
    if (this->vel1 != other.vel1) {
      return false;
    }
    if (this->vel2 != other.vel2) {
      return false;
    }
    if (this->vel3 != other.vel3) {
      return false;
    }
    if (this->vel4 != other.vel4) {
      return false;
    }
    if (this->m1current != other.m1current) {
      return false;
    }
    if (this->m2current != other.m2current) {
      return false;
    }
    if (this->m3current != other.m3current) {
      return false;
    }
    if (this->m4current != other.m4current) {
      return false;
    }
    if (this->heading_x != other.heading_x) {
      return false;
    }
    if (this->heading_y != other.heading_y) {
      return false;
    }
    if (this->heading_z != other.heading_z) {
      return false;
    }
    if (this->heading_pos != other.heading_pos) {
      return false;
    }
    if (this->heading_vel != other.heading_vel) {
      return false;
    }
    if (this->accel_x != other.accel_x) {
      return false;
    }
    if (this->accel_y != other.accel_y) {
      return false;
    }
    if (this->accel_z != other.accel_z) {
      return false;
    }
    if (this->ang_accel_x != other.ang_accel_x) {
      return false;
    }
    if (this->ang_accel_y != other.ang_accel_y) {
      return false;
    }
    if (this->ang_accel_z != other.ang_accel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const TelemData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TelemData_

// alias to use template instance with default allocator
using TelemData =
  rover_interfaces::msg::TelemData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rover_interfaces

#endif  // ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__STRUCT_HPP_
