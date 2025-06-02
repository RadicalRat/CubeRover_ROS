# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rover_interfaces:msg/TelemData.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TelemData(type):
    """Metaclass of message 'TelemData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rover_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rover_interfaces.msg.TelemData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__telem_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__telem_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__telem_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__telem_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__telem_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TelemData(metaclass=Metaclass_TelemData):
    """Message class 'TelemData'."""

    __slots__ = [
        '_enc1',
        '_enc2',
        '_enc3',
        '_enc4',
        '_vel1',
        '_vel2',
        '_vel3',
        '_vel4',
        '_m1current',
        '_m2current',
        '_m3current',
        '_m4current',
        '_heading_x',
        '_heading_y',
        '_heading_z',
        '_heading_pos',
        '_heading_vel',
        '_accel_x',
        '_accel_y',
        '_accel_z',
        '_ang_accel_x',
        '_ang_accel_y',
        '_ang_accel_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'enc1': 'float',
        'enc2': 'float',
        'enc3': 'float',
        'enc4': 'float',
        'vel1': 'float',
        'vel2': 'float',
        'vel3': 'float',
        'vel4': 'float',
        'm1current': 'float',
        'm2current': 'float',
        'm3current': 'float',
        'm4current': 'float',
        'heading_x': 'float',
        'heading_y': 'float',
        'heading_z': 'float',
        'heading_pos': 'float',
        'heading_vel': 'float',
        'accel_x': 'float',
        'accel_y': 'float',
        'accel_z': 'float',
        'ang_accel_x': 'float',
        'ang_accel_y': 'float',
        'ang_accel_z': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enc1 = kwargs.get('enc1', float())
        self.enc2 = kwargs.get('enc2', float())
        self.enc3 = kwargs.get('enc3', float())
        self.enc4 = kwargs.get('enc4', float())
        self.vel1 = kwargs.get('vel1', float())
        self.vel2 = kwargs.get('vel2', float())
        self.vel3 = kwargs.get('vel3', float())
        self.vel4 = kwargs.get('vel4', float())
        self.m1current = kwargs.get('m1current', float())
        self.m2current = kwargs.get('m2current', float())
        self.m3current = kwargs.get('m3current', float())
        self.m4current = kwargs.get('m4current', float())
        self.heading_x = kwargs.get('heading_x', float())
        self.heading_y = kwargs.get('heading_y', float())
        self.heading_z = kwargs.get('heading_z', float())
        self.heading_pos = kwargs.get('heading_pos', float())
        self.heading_vel = kwargs.get('heading_vel', float())
        self.accel_x = kwargs.get('accel_x', float())
        self.accel_y = kwargs.get('accel_y', float())
        self.accel_z = kwargs.get('accel_z', float())
        self.ang_accel_x = kwargs.get('ang_accel_x', float())
        self.ang_accel_y = kwargs.get('ang_accel_y', float())
        self.ang_accel_z = kwargs.get('ang_accel_z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.enc1 != other.enc1:
            return False
        if self.enc2 != other.enc2:
            return False
        if self.enc3 != other.enc3:
            return False
        if self.enc4 != other.enc4:
            return False
        if self.vel1 != other.vel1:
            return False
        if self.vel2 != other.vel2:
            return False
        if self.vel3 != other.vel3:
            return False
        if self.vel4 != other.vel4:
            return False
        if self.m1current != other.m1current:
            return False
        if self.m2current != other.m2current:
            return False
        if self.m3current != other.m3current:
            return False
        if self.m4current != other.m4current:
            return False
        if self.heading_x != other.heading_x:
            return False
        if self.heading_y != other.heading_y:
            return False
        if self.heading_z != other.heading_z:
            return False
        if self.heading_pos != other.heading_pos:
            return False
        if self.heading_vel != other.heading_vel:
            return False
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        if self.ang_accel_x != other.ang_accel_x:
            return False
        if self.ang_accel_y != other.ang_accel_y:
            return False
        if self.ang_accel_z != other.ang_accel_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enc1(self):
        """Message field 'enc1'."""
        return self._enc1

    @enc1.setter
    def enc1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'enc1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._enc1 = value

    @builtins.property
    def enc2(self):
        """Message field 'enc2'."""
        return self._enc2

    @enc2.setter
    def enc2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'enc2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._enc2 = value

    @builtins.property
    def enc3(self):
        """Message field 'enc3'."""
        return self._enc3

    @enc3.setter
    def enc3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'enc3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._enc3 = value

    @builtins.property
    def enc4(self):
        """Message field 'enc4'."""
        return self._enc4

    @enc4.setter
    def enc4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'enc4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._enc4 = value

    @builtins.property
    def vel1(self):
        """Message field 'vel1'."""
        return self._vel1

    @vel1.setter
    def vel1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vel1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel1 = value

    @builtins.property
    def vel2(self):
        """Message field 'vel2'."""
        return self._vel2

    @vel2.setter
    def vel2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vel2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel2 = value

    @builtins.property
    def vel3(self):
        """Message field 'vel3'."""
        return self._vel3

    @vel3.setter
    def vel3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vel3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel3 = value

    @builtins.property
    def vel4(self):
        """Message field 'vel4'."""
        return self._vel4

    @vel4.setter
    def vel4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vel4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel4 = value

    @builtins.property
    def m1current(self):
        """Message field 'm1current'."""
        return self._m1current

    @m1current.setter
    def m1current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm1current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm1current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m1current = value

    @builtins.property
    def m2current(self):
        """Message field 'm2current'."""
        return self._m2current

    @m2current.setter
    def m2current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm2current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm2current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m2current = value

    @builtins.property
    def m3current(self):
        """Message field 'm3current'."""
        return self._m3current

    @m3current.setter
    def m3current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm3current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm3current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m3current = value

    @builtins.property
    def m4current(self):
        """Message field 'm4current'."""
        return self._m4current

    @m4current.setter
    def m4current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm4current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm4current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m4current = value

    @builtins.property
    def heading_x(self):
        """Message field 'heading_x'."""
        return self._heading_x

    @heading_x.setter
    def heading_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_x = value

    @builtins.property
    def heading_y(self):
        """Message field 'heading_y'."""
        return self._heading_y

    @heading_y.setter
    def heading_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_y = value

    @builtins.property
    def heading_z(self):
        """Message field 'heading_z'."""
        return self._heading_z

    @heading_z.setter
    def heading_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_z = value

    @builtins.property
    def heading_pos(self):
        """Message field 'heading_pos'."""
        return self._heading_pos

    @heading_pos.setter
    def heading_pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_pos = value

    @builtins.property
    def heading_vel(self):
        """Message field 'heading_vel'."""
        return self._heading_vel

    @heading_vel.setter
    def heading_vel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_vel = value

    @builtins.property
    def accel_x(self):
        """Message field 'accel_x'."""
        return self._accel_x

    @accel_x.setter
    def accel_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_x = value

    @builtins.property
    def accel_y(self):
        """Message field 'accel_y'."""
        return self._accel_y

    @accel_y.setter
    def accel_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_y = value

    @builtins.property
    def accel_z(self):
        """Message field 'accel_z'."""
        return self._accel_z

    @accel_z.setter
    def accel_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_z = value

    @builtins.property
    def ang_accel_x(self):
        """Message field 'ang_accel_x'."""
        return self._ang_accel_x

    @ang_accel_x.setter
    def ang_accel_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ang_accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_accel_x = value

    @builtins.property
    def ang_accel_y(self):
        """Message field 'ang_accel_y'."""
        return self._ang_accel_y

    @ang_accel_y.setter
    def ang_accel_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ang_accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_accel_y = value

    @builtins.property
    def ang_accel_z(self):
        """Message field 'ang_accel_z'."""
        return self._ang_accel_z

    @ang_accel_z.setter
    def ang_accel_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ang_accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_accel_z = value
