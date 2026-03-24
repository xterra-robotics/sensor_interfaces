# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xterra:msg/SolverStats.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'residual'
# Member 'constraint_violation'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolverStats(type):
    """Metaclass of message 'SolverStats'."""

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
                'xterra.msg.SolverStats')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solver_stats
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solver_stats
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solver_stats
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solver_stats
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solver_stats

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SolverStats(metaclass=Metaclass_SolverStats):
    """Message class 'SolverStats'."""

    __slots__ = [
        '_iters',
        '_max_iters',
        '_residual',
        '_constraint_violation',
        '_time_ms',
    ]

    _fields_and_field_types = {
        'iters': 'uint16',
        'max_iters': 'uint16',
        'residual': 'float[6]',
        'constraint_violation': 'float[4]',
        'time_ms': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.iters = kwargs.get('iters', int())
        self.max_iters = kwargs.get('max_iters', int())
        if 'residual' not in kwargs:
            self.residual = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.residual = kwargs.get('residual')
        if 'constraint_violation' not in kwargs:
            self.constraint_violation = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.constraint_violation = kwargs.get('constraint_violation')
        self.time_ms = kwargs.get('time_ms', float())

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
        if self.iters != other.iters:
            return False
        if self.max_iters != other.max_iters:
            return False
        if any(self.residual != other.residual):
            return False
        if any(self.constraint_violation != other.constraint_violation):
            return False
        if self.time_ms != other.time_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def iters(self):
        """Message field 'iters'."""
        return self._iters

    @iters.setter
    def iters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iters' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'iters' field must be an unsigned integer in [0, 65535]"
        self._iters = value

    @builtins.property
    def max_iters(self):
        """Message field 'max_iters'."""
        return self._max_iters

    @max_iters.setter
    def max_iters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_iters' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_iters' field must be an unsigned integer in [0, 65535]"
        self._max_iters = value

    @builtins.property
    def residual(self):
        """Message field 'residual'."""
        return self._residual

    @residual.setter
    def residual(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'residual' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'residual' numpy.ndarray() must have a size of 6"
            self._residual = value
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
                "The 'residual' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._residual = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def constraint_violation(self):
        """Message field 'constraint_violation'."""
        return self._constraint_violation

    @constraint_violation.setter
    def constraint_violation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'constraint_violation' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'constraint_violation' numpy.ndarray() must have a size of 4"
            self._constraint_violation = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'constraint_violation' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._constraint_violation = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def time_ms(self):
        """Message field 'time_ms'."""
        return self._time_ms

    @time_ms.setter
    def time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_ms = value
