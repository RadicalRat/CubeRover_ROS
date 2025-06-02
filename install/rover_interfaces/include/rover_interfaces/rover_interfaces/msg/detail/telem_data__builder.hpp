// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/msg/telem_data.hpp"


#ifndef ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__BUILDER_HPP_
#define ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rover_interfaces/msg/detail/telem_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rover_interfaces
{

namespace msg
{

namespace builder
{

class Init_TelemData_ang_accel_z
{
public:
  explicit Init_TelemData_ang_accel_z(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  ::rover_interfaces::msg::TelemData ang_accel_z(::rover_interfaces::msg::TelemData::_ang_accel_z_type arg)
  {
    msg_.ang_accel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_ang_accel_y
{
public:
  explicit Init_TelemData_ang_accel_y(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_ang_accel_z ang_accel_y(::rover_interfaces::msg::TelemData::_ang_accel_y_type arg)
  {
    msg_.ang_accel_y = std::move(arg);
    return Init_TelemData_ang_accel_z(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_ang_accel_x
{
public:
  explicit Init_TelemData_ang_accel_x(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_ang_accel_y ang_accel_x(::rover_interfaces::msg::TelemData::_ang_accel_x_type arg)
  {
    msg_.ang_accel_x = std::move(arg);
    return Init_TelemData_ang_accel_y(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_accel_z
{
public:
  explicit Init_TelemData_accel_z(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_ang_accel_x accel_z(::rover_interfaces::msg::TelemData::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return Init_TelemData_ang_accel_x(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_accel_y
{
public:
  explicit Init_TelemData_accel_y(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_accel_z accel_y(::rover_interfaces::msg::TelemData::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_TelemData_accel_z(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_accel_x
{
public:
  explicit Init_TelemData_accel_x(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_accel_y accel_x(::rover_interfaces::msg::TelemData::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_TelemData_accel_y(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_heading_vel
{
public:
  explicit Init_TelemData_heading_vel(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_accel_x heading_vel(::rover_interfaces::msg::TelemData::_heading_vel_type arg)
  {
    msg_.heading_vel = std::move(arg);
    return Init_TelemData_accel_x(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_heading_pos
{
public:
  explicit Init_TelemData_heading_pos(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_heading_vel heading_pos(::rover_interfaces::msg::TelemData::_heading_pos_type arg)
  {
    msg_.heading_pos = std::move(arg);
    return Init_TelemData_heading_vel(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_heading_z
{
public:
  explicit Init_TelemData_heading_z(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_heading_pos heading_z(::rover_interfaces::msg::TelemData::_heading_z_type arg)
  {
    msg_.heading_z = std::move(arg);
    return Init_TelemData_heading_pos(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_heading_y
{
public:
  explicit Init_TelemData_heading_y(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_heading_z heading_y(::rover_interfaces::msg::TelemData::_heading_y_type arg)
  {
    msg_.heading_y = std::move(arg);
    return Init_TelemData_heading_z(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_heading_x
{
public:
  explicit Init_TelemData_heading_x(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_heading_y heading_x(::rover_interfaces::msg::TelemData::_heading_x_type arg)
  {
    msg_.heading_x = std::move(arg);
    return Init_TelemData_heading_y(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_m4current
{
public:
  explicit Init_TelemData_m4current(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_heading_x m4current(::rover_interfaces::msg::TelemData::_m4current_type arg)
  {
    msg_.m4current = std::move(arg);
    return Init_TelemData_heading_x(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_m3current
{
public:
  explicit Init_TelemData_m3current(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_m4current m3current(::rover_interfaces::msg::TelemData::_m3current_type arg)
  {
    msg_.m3current = std::move(arg);
    return Init_TelemData_m4current(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_m2current
{
public:
  explicit Init_TelemData_m2current(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_m3current m2current(::rover_interfaces::msg::TelemData::_m2current_type arg)
  {
    msg_.m2current = std::move(arg);
    return Init_TelemData_m3current(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_m1current
{
public:
  explicit Init_TelemData_m1current(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_m2current m1current(::rover_interfaces::msg::TelemData::_m1current_type arg)
  {
    msg_.m1current = std::move(arg);
    return Init_TelemData_m2current(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_vel4
{
public:
  explicit Init_TelemData_vel4(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_m1current vel4(::rover_interfaces::msg::TelemData::_vel4_type arg)
  {
    msg_.vel4 = std::move(arg);
    return Init_TelemData_m1current(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_vel3
{
public:
  explicit Init_TelemData_vel3(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_vel4 vel3(::rover_interfaces::msg::TelemData::_vel3_type arg)
  {
    msg_.vel3 = std::move(arg);
    return Init_TelemData_vel4(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_vel2
{
public:
  explicit Init_TelemData_vel2(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_vel3 vel2(::rover_interfaces::msg::TelemData::_vel2_type arg)
  {
    msg_.vel2 = std::move(arg);
    return Init_TelemData_vel3(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_vel1
{
public:
  explicit Init_TelemData_vel1(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_vel2 vel1(::rover_interfaces::msg::TelemData::_vel1_type arg)
  {
    msg_.vel1 = std::move(arg);
    return Init_TelemData_vel2(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_enc4
{
public:
  explicit Init_TelemData_enc4(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_vel1 enc4(::rover_interfaces::msg::TelemData::_enc4_type arg)
  {
    msg_.enc4 = std::move(arg);
    return Init_TelemData_vel1(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_enc3
{
public:
  explicit Init_TelemData_enc3(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_enc4 enc3(::rover_interfaces::msg::TelemData::_enc3_type arg)
  {
    msg_.enc3 = std::move(arg);
    return Init_TelemData_enc4(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_enc2
{
public:
  explicit Init_TelemData_enc2(::rover_interfaces::msg::TelemData & msg)
  : msg_(msg)
  {}
  Init_TelemData_enc3 enc2(::rover_interfaces::msg::TelemData::_enc2_type arg)
  {
    msg_.enc2 = std::move(arg);
    return Init_TelemData_enc3(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

class Init_TelemData_enc1
{
public:
  Init_TelemData_enc1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TelemData_enc2 enc1(::rover_interfaces::msg::TelemData::_enc1_type arg)
  {
    msg_.enc1 = std::move(arg);
    return Init_TelemData_enc2(msg_);
  }

private:
  ::rover_interfaces::msg::TelemData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_interfaces::msg::TelemData>()
{
  return rover_interfaces::msg::builder::Init_TelemData_enc1();
}

}  // namespace rover_interfaces

#endif  // ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__BUILDER_HPP_
