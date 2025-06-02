// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_interfaces:srv/RoverCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/srv/rover_command.hpp"


#ifndef ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__BUILDER_HPP_
#define ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rover_interfaces/srv/detail/rover_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_RoverCommand_Request_data
{
public:
  explicit Init_RoverCommand_Request_data(::rover_interfaces::srv::RoverCommand_Request & msg)
  : msg_(msg)
  {}
  ::rover_interfaces::srv::RoverCommand_Request data(::rover_interfaces::srv::RoverCommand_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_interfaces::srv::RoverCommand_Request msg_;
};

class Init_RoverCommand_Request_type
{
public:
  Init_RoverCommand_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverCommand_Request_data type(::rover_interfaces::srv::RoverCommand_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RoverCommand_Request_data(msg_);
  }

private:
  ::rover_interfaces::srv::RoverCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_interfaces::srv::RoverCommand_Request>()
{
  return rover_interfaces::srv::builder::Init_RoverCommand_Request_type();
}

}  // namespace rover_interfaces


namespace rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_RoverCommand_Response_success
{
public:
  Init_RoverCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rover_interfaces::srv::RoverCommand_Response success(::rover_interfaces::srv::RoverCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_interfaces::srv::RoverCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_interfaces::srv::RoverCommand_Response>()
{
  return rover_interfaces::srv::builder::Init_RoverCommand_Response_success();
}

}  // namespace rover_interfaces


namespace rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_RoverCommand_Event_response
{
public:
  explicit Init_RoverCommand_Event_response(::rover_interfaces::srv::RoverCommand_Event & msg)
  : msg_(msg)
  {}
  ::rover_interfaces::srv::RoverCommand_Event response(::rover_interfaces::srv::RoverCommand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_interfaces::srv::RoverCommand_Event msg_;
};

class Init_RoverCommand_Event_request
{
public:
  explicit Init_RoverCommand_Event_request(::rover_interfaces::srv::RoverCommand_Event & msg)
  : msg_(msg)
  {}
  Init_RoverCommand_Event_response request(::rover_interfaces::srv::RoverCommand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RoverCommand_Event_response(msg_);
  }

private:
  ::rover_interfaces::srv::RoverCommand_Event msg_;
};

class Init_RoverCommand_Event_info
{
public:
  Init_RoverCommand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverCommand_Event_request info(::rover_interfaces::srv::RoverCommand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RoverCommand_Event_request(msg_);
  }

private:
  ::rover_interfaces::srv::RoverCommand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_interfaces::srv::RoverCommand_Event>()
{
  return rover_interfaces::srv::builder::Init_RoverCommand_Event_info();
}

}  // namespace rover_interfaces

#endif  // ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__BUILDER_HPP_
