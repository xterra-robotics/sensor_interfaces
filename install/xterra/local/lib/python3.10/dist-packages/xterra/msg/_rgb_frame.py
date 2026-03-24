# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xterra:msg/RGBFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'axes'
# Member 'buttons'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RGBFrame(type):
    """Metaclass of message 'RGBFrame'."""

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
            module = import_type_support('xterra')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xterra.msg.RGBFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rgb_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rgb_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rgb_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rgb_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rgb_frame

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RGBFrame(metaclass=Metaclass_RGBFrame):
    """Message class 'RGBFrame'."""

    __slots__ = [
        '_priority',
        '_axes',
        '_buttons',
    ]

    _fields_and_field_types = {
        'priority': 'uint8',
        'axes': 'float[6]',
        'buttons': 'uint8[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.priority = kwargs.get('priority', int())
        if 'axes' not in kwargs:
            self.axes = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.axes = kwargs.get('axes')
        if 'buttons' not in kwargs:
            self.buttons = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.buttons = kwargs.get('buttons')

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.priority != other.priority:
            return False
        if any(self.axes != other.axes):
            return False
        if any(self.buttons != other.buttons):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @builtins.property
    def axes(self):
        """Message field 'axes'."""
        return self._axes

    @axes.setter
    def axes(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'axes' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'axes' numpy.ndarray() must have a size of 6"
            self._axes = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'axes' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._axes = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def buttons(self):
        """Message field 'buttons'."""
        return self._buttons

    @buttons.setter
    def buttons(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'buttons' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'buttons' numpy.ndarray() must have a size of 12"
            self._buttons = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'buttons' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._buttons = numpy.array(value, dtype=numpy.uint8)
