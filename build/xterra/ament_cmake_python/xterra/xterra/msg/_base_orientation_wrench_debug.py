# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xterra:msg/BaseOrientationWrenchDebug.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'base_wrench_base_tra'
# Member 'base_wrench_base_ori'
# Member 'base_wrench_legs'
# Member 'base_wrench_full'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseOrientationWrenchDebug(type):
    """Metaclass of message 'BaseOrientationWrenchDebug'."""

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
                'xterra.msg.BaseOrientationWrenchDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_orientation_wrench_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_orientation_wrench_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_orientation_wrench_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_orientation_wrench_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_orientation_wrench_debug

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BaseOrientationWrenchDebug(metaclass=Metaclass_BaseOrientationWrenchDebug):
    """Message class 'BaseOrientationWrenchDebug'."""

    __slots__ = [
        '_base_wrench_base_tra',
        '_base_wrench_base_ori',
        '_base_wrench_legs',
        '_base_wrench_full',
    ]

    _fields_and_field_types = {
        'base_wrench_base_tra': 'float[3]',
        'base_wrench_base_ori': 'float[3]',
        'base_wrench_legs': 'float[3]',
        'base_wrench_full': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'base_wrench_base_tra' not in kwargs:
            self.base_wrench_base_tra = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.base_wrench_base_tra = kwargs.get('base_wrench_base_tra')
        if 'base_wrench_base_ori' not in kwargs:
            self.base_wrench_base_ori = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.base_wrench_base_ori = kwargs.get('base_wrench_base_ori')
        if 'base_wrench_legs' not in kwargs:
            self.base_wrench_legs = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.base_wrench_legs = kwargs.get('base_wrench_legs')
        if 'base_wrench_full' not in kwargs:
            self.base_wrench_full = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.base_wrench_full = kwargs.get('base_wrench_full')

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
        if any(self.base_wrench_base_tra != other.base_wrench_base_tra):
            return False
        if any(self.base_wrench_base_ori != other.base_wrench_base_ori):
            return False
        if any(self.base_wrench_legs != other.base_wrench_legs):
            return False
        if any(self.base_wrench_full != other.base_wrench_full):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_wrench_base_tra(self):
        """Message field 'base_wrench_base_tra'."""
        return self._base_wrench_base_tra

    @base_wrench_base_tra.setter
    def base_wrench_base_tra(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'base_wrench_base_tra' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'base_wrench_base_tra' numpy.ndarray() must have a size of 3"
            self._base_wrench_base_tra = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'base_wrench_base_tra' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._base_wrench_base_tra = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def base_wrench_base_ori(self):
        """Message field 'base_wrench_base_ori'."""
        return self._base_wrench_base_ori

    @base_wrench_base_ori.setter
    def base_wrench_base_ori(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'base_wrench_base_ori' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'base_wrench_base_ori' numpy.ndarray() must have a size of 3"
            self._base_wrench_base_ori = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'base_wrench_base_ori' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._base_wrench_base_ori = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def base_wrench_legs(self):
        """Message field 'base_wrench_legs'."""
        return self._base_wrench_legs

    @base_wrench_legs.setter
    def base_wrench_legs(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'base_wrench_legs' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'base_wrench_legs' numpy.ndarray() must have a size of 3"
            self._base_wrench_legs = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'base_wrench_legs' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._base_wrench_legs = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def base_wrench_full(self):
        """Message field 'base_wrench_full'."""
        return self._base_wrench_full

    @base_wrench_full.setter
    def base_wrench_full(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'base_wrench_full' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'base_wrench_full' numpy.ndarray() must have a size of 3"
            self._base_wrench_full = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'base_wrench_full' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._base_wrench_full = numpy.array(value, dtype=numpy.float32)
