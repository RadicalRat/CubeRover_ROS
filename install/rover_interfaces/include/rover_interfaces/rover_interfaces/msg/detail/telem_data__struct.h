// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/msg/telem_data.h"


#ifndef ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__STRUCT_H_
#define ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TelemData in the package rover_interfaces.
typedef struct rover_interfaces__msg__TelemData
{
  float enc1;
  float enc2;
  float enc3;
  float enc4;
  float vel1;
  float vel2;
  float vel3;
  float vel4;
  float m1current;
  float m2current;
  float m3current;
  float m4current;
  float heading_x;
  float heading_y;
  float heading_z;
  float heading_pos;
  float heading_vel;
  float accel_x;
  float accel_y;
  float accel_z;
  float ang_accel_x;
  float ang_accel_y;
  float ang_accel_z;
} rover_interfaces__msg__TelemData;

// Struct for a sequence of rover_interfaces__msg__TelemData.
typedef struct rover_interfaces__msg__TelemData__Sequence
{
  rover_interfaces__msg__TelemData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_interfaces__msg__TelemData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__STRUCT_H_
