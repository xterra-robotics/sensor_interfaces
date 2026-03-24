# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xterra:msg/SensorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'q'
# Member 'dq'
# Member 'ddq'
# Member 'q_current'
# Member 'd_current'
# Member 'tau_est'
# Member 'quat'
# Member 'gyro'
# Member 'accel'
# Member 'rpy'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorData(type):
    """Metaclass of message 'SensorData'."""

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
                'xterra.msg.SensorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorData(metaclass=Metaclass_SensorData):
    """Message class 'SensorData'."""

    __slots__ = [
        '_q',
        '_dq',
        '_ddq',
        '_q_current',
        '_d_current',
        '_tau_est',
        '_quat',
        '_gyro',
        '_accel',
        '_rpy',
    ]

    _fields_and_field_types = {
        'q': 'float[12]',
        'dq': 'float[12]',
        'ddq': 'float[12]',
        'q_current': 'float[12]',
        'd_current': 'float[12]',
        'tau_est': 'float[12]',
        'quat': 'float[4]',
        'gyro': 'float[3]',
        'accel': 'float[3]',
        'rpy': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'q' not in kwargs:
            self.q = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.q = kwargs.get('q')
        if 'dq' not in kwargs:
            self.dq = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.dq = kwargs.get('dq')
        if 'ddq' not in kwargs:
            self.ddq = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.ddq = kwargs.get('ddq')
        if 'q_current' not in kwargs:
            self.q_current = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.q_current = kwargs.get('q_current')
        if 'd_current' not in kwargs:
            self.d_current = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.d_current = kwargs.get('d_current')
        if 'tau_est' not in kwargs:
            self.tau_est = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.tau_est = kwargs.get('tau_est')
        if 'quat' not in kwargs:
            self.quat = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.quat = kwargs.get('quat')
        if 'gyro' not in kwargs:
            self.gyro = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro = kwargs.get('gyro')
        if 'accel' not in kwargs:
            self.accel = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel = kwargs.get('accel')
        if 'rpy' not in kwargs:
            self.rpy = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.rpy = kwargs.get('rpy')

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
        if any(self.q != other.q):
            return False
        if any(self.dq != other.dq):
            return False
        if any(self.ddq != other.ddq):
            return False
        if any(self.q_current != other.q_current):
            return False
        if any(self.d_current != other.d_current):
            return False
        if any(self.tau_est != other.tau_est):
            return False
        if any(self.quat != other.quat):
            return False
        if any(self.gyro != other.gyro):
            return False
        if any(self.accel != other.accel):
            return False
        if any(self.rpy != other.rpy):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'q' numpy.ndarray() must have a size of 12"
            self._q = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def dq(self):
        """Message field 'dq'."""
        return self._dq

    @dq.setter
    def dq(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'dq' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'dq' numpy.ndarray() must have a size of 12"
            self._dq = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'dq' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._dq = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def ddq(self):
        """Message field 'ddq'."""
        return self._ddq

    @ddq.setter
    def ddq(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'ddq' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'ddq' numpy.ndarray() must have a size of 12"
            self._ddq = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ddq' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ddq = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def q_current(self):
        """Message field 'q_current'."""
        return self._q_current

    @q_current.setter
    def q_current(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q_current' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'q_current' numpy.ndarray() must have a size of 12"
            self._q_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q_current' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q_current = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def d_current(self):
        """Message field 'd_current'."""
        return self._d_current

    @d_current.setter
    def d_current(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'd_current' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'd_current' numpy.ndarray() must have a size of 12"
            self._d_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'd_current' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._d_current = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def tau_est(self):
        """Message field 'tau_est'."""
        return self._tau_est

    @tau_est.setter
    def tau_est(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'tau_est' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'tau_est' numpy.ndarray() must have a size of 12"
            self._tau_est = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'tau_est' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._tau_est = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def quat(self):
        """Message field 'quat'."""
        return self._quat

    @quat.setter
    def quat(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'quat' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'quat' numpy.ndarray() must have a size of 4"
            self._quat = value
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
                "The 'quat' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._quat = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro(self):
        """Message field 'gyro'."""
        return self._gyro

    @gyro.setter
    def gyro(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro' numpy.ndarray() must have a size of 3"
            self._gyro = value
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
                "The 'gyro' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel' numpy.ndarray() must have a size of 3"
            self._accel = value
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
                "The 'accel' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def rpy(self):
        """Message field 'rpy'."""
        return self._rpy

    @rpy.setter
    def rpy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'rpy' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'rpy' numpy.ndarray() must have a size of 3"
            self._rpy = value
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
                "The 'rpy' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rpy = numpy.array(value, dtype=numpy.float32)
