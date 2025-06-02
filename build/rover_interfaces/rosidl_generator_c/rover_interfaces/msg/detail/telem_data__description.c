// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice

#include "rover_interfaces/msg/detail/telem_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rover_interfaces
const rosidl_type_hash_t *
rover_interfaces__msg__TelemData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x3c, 0x45, 0xad, 0x0b, 0x6c, 0x4b, 0xd7,
      0x61, 0x48, 0xd9, 0xc3, 0xb1, 0x5f, 0x72, 0x2d,
      0xe3, 0xa1, 0x37, 0x75, 0x3d, 0x00, 0x0d, 0xf9,
      0x83, 0x97, 0x13, 0x97, 0x00, 0xa6, 0xbe, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rover_interfaces__msg__TelemData__TYPE_NAME[] = "rover_interfaces/msg/TelemData";

// Define type names, field names, and default values
static char rover_interfaces__msg__TelemData__FIELD_NAME__enc1[] = "enc1";
static char rover_interfaces__msg__TelemData__FIELD_NAME__enc2[] = "enc2";
static char rover_interfaces__msg__TelemData__FIELD_NAME__enc3[] = "enc3";
static char rover_interfaces__msg__TelemData__FIELD_NAME__enc4[] = "enc4";
static char rover_interfaces__msg__TelemData__FIELD_NAME__vel1[] = "vel1";
static char rover_interfaces__msg__TelemData__FIELD_NAME__vel2[] = "vel2";
static char rover_interfaces__msg__TelemData__FIELD_NAME__vel3[] = "vel3";
static char rover_interfaces__msg__TelemData__FIELD_NAME__vel4[] = "vel4";
static char rover_interfaces__msg__TelemData__FIELD_NAME__m1current[] = "m1current";
static char rover_interfaces__msg__TelemData__FIELD_NAME__m2current[] = "m2current";
static char rover_interfaces__msg__TelemData__FIELD_NAME__m3current[] = "m3current";
static char rover_interfaces__msg__TelemData__FIELD_NAME__m4current[] = "m4current";
static char rover_interfaces__msg__TelemData__FIELD_NAME__heading_x[] = "heading_x";
static char rover_interfaces__msg__TelemData__FIELD_NAME__heading_y[] = "heading_y";
static char rover_interfaces__msg__TelemData__FIELD_NAME__heading_z[] = "heading_z";
static char rover_interfaces__msg__TelemData__FIELD_NAME__heading_pos[] = "heading_pos";
static char rover_interfaces__msg__TelemData__FIELD_NAME__heading_vel[] = "heading_vel";
static char rover_interfaces__msg__TelemData__FIELD_NAME__accel_x[] = "accel_x";
static char rover_interfaces__msg__TelemData__FIELD_NAME__accel_y[] = "accel_y";
static char rover_interfaces__msg__TelemData__FIELD_NAME__accel_z[] = "accel_z";
static char rover_interfaces__msg__TelemData__FIELD_NAME__ang_accel_x[] = "ang_accel_x";
static char rover_interfaces__msg__TelemData__FIELD_NAME__ang_accel_y[] = "ang_accel_y";
static char rover_interfaces__msg__TelemData__FIELD_NAME__ang_accel_z[] = "ang_accel_z";

static rosidl_runtime_c__type_description__Field rover_interfaces__msg__TelemData__FIELDS[] = {
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__enc1, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__enc2, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__enc3, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__enc4, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__vel1, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__vel2, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__vel3, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__vel4, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__m1current, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__m2current, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__m3current, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__m4current, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__heading_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__heading_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__heading_z, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__heading_pos, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__heading_vel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__accel_x, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__accel_y, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__accel_z, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__ang_accel_x, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__ang_accel_y, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rover_interfaces__msg__TelemData__FIELD_NAME__ang_accel_z, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rover_interfaces__msg__TelemData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rover_interfaces__msg__TelemData__TYPE_NAME, 30, 30},
      {rover_interfaces__msg__TelemData__FIELDS, 23, 23},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 enc1\n"
  "float32 enc2\n"
  "float32 enc3\n"
  "float32 enc4\n"
  "\n"
  "float32 vel1\n"
  "float32 vel2\n"
  "float32 vel3\n"
  "float32 vel4\n"
  "\n"
  "float32 m1current\n"
  "float32 m2current\n"
  "float32 m3current\n"
  "float32 m4current\n"
  "\n"
  "float32 heading_x\n"
  "float32 heading_y\n"
  "float32 heading_z\n"
  "\n"
  "float32 heading_pos\n"
  "float32 heading_vel\n"
  "\n"
  "float32 accel_x\n"
  "float32 accel_y\n"
  "float32 accel_z\n"
  "\n"
  "float32 ang_accel_x\n"
  "float32 ang_accel_y\n"
  "float32 ang_accel_z\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rover_interfaces__msg__TelemData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rover_interfaces__msg__TelemData__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 385, 385},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rover_interfaces__msg__TelemData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rover_interfaces__msg__TelemData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
