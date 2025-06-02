// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice
#ifndef ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rover_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rover_interfaces/msg/detail/telem_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
bool cdr_serialize_rover_interfaces__msg__TelemData(
  const rover_interfaces__msg__TelemData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
bool cdr_deserialize_rover_interfaces__msg__TelemData(
  eprosima::fastcdr::Cdr &,
  rover_interfaces__msg__TelemData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t get_serialized_size_rover_interfaces__msg__TelemData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t max_serialized_size_rover_interfaces__msg__TelemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
bool cdr_serialize_key_rover_interfaces__msg__TelemData(
  const rover_interfaces__msg__TelemData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t get_serialized_size_key_rover_interfaces__msg__TelemData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t max_serialized_size_key_rover_interfaces__msg__TelemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rover_interfaces, msg, TelemData)();

#ifdef __cplusplus
}
#endif

#endif  // ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
