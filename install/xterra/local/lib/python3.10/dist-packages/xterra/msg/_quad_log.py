# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xterra:msg/QuadLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'contact_state'
# Member 'contact_prob'
# Member 'contact_force'
# Member 'base_wrench'
# Member 'joint_position'
# Member 'joint_velocity'
# Member 'joint_torque'
# Member 'foot_position'
# Member 'foot_velocity'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QuadLog(type):
    """Metaclass of message 'QuadLog'."""

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
                'xterra.msg.QuadLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__quad_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__quad_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__quad_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__quad_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__quad_log

            from xterra.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from xterra.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QuadLog(metaclass=Metaclass_QuadLog):
    """Message class 'QuadLog'."""

    __slots__ = [
        '_contact_state',
        '_contact_prob',
        '_contact_force',
        '_base_position',
        '_base_orientation',
        '_linear_velocity',
        '_angular_velocity',
        '_plane_normal',
        '_base_wrench',
        '_joint_position',
        '_joint_velocity',
        '_joint_torque',
        '_foot_position',
        '_foot_velocity',
    ]

    _fields_and_field_types = {
        'contact_state': 'float[4]',
        'contact_prob': 'float[4]',
        'contact_force': 'float[12]',
        'base_position': 'xterra/Point3D',
        'base_orientation': 'xterra/Quaternion',
        'linear_velocity': 'xterra/Point3D',
        'angular_velocity': 'xterra/Point3D',
        'plane_normal': 'xterra/Point3D',
        'base_wrench': 'float[6]',
        'joint_position': 'float[12]',
        'joint_velocity': 'float[12]',
        'joint_torque': 'float[12]',
        'foot_position': 'float[12]',
        'foot_velocity': 'float[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['xterra', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['xterra', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['xterra', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['xterra', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['xterra', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'contact_state' not in kwargs:
            self.contact_state = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.contact_state = kwargs.get('contact_state')
        if 'contact_prob' not in kwargs:
            self.contact_prob = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.contact_prob = kwargs.get('contact_prob')
        if 'contact_force' not in kwargs:
            self.contact_force = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.contact_force = kwargs.get('contact_force')
        from xterra.msg import Point3D
        self.base_position = kwargs.get('base_position', Point3D())
        from xterra.msg import Quaternion
        self.base_orientation = kwargs.get('base_orientation', Quaternion())
        from xterra.msg import Point3D
        self.linear_velocity = kwargs.get('linear_velocity', Point3D())
        from xterra.msg import Point3D
        self.angular_velocity = kwargs.get('angular_velocity', Point3D())
        from xterra.msg import Point3D
        self.plane_normal = kwargs.get('plane_normal', Point3D())
        if 'base_wrench' not in kwargs:
            self.base_wrench = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.base_wrench = kwargs.get('base_wrench')
        if 'joint_position' not in kwargs:
            self.joint_position = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.joint_position = kwargs.get('joint_position')
        if 'joint_velocity' not in kwargs:
            self.joint_velocity = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.joint_velocity = kwargs.get('joint_velocity')
        if 'joint_torque' not in kwargs:
            self.joint_torque = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.joint_torque = kwargs.get('joint_torque')
        if 'foot_position' not in kwargs:
            self.foot_position = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.foot_position = kwargs.get('foot_position')
        if 'foot_velocity' not in kwargs:
            self.foot_velocity = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.foot_velocity = kwargs.get('foot_velocity')

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
        if any(self.contact_state != other.contact_state):
            return False
        if any(self.contact_prob != other.contact_prob):
            return False
        if any(self.contact_force != other.contact_force):
            return False
        if self.base_position != other.base_position:
            return False
        if self.base_orientation != other.base_orientation:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.plane_normal != other.plane_normal:
            return False
        if any(self.base_wrench != other.base_wrench):
            return False
        if any(self.joint_position != other.joint_position):
            return False
        if any(self.joint_velocity != other.joint_velocity):
            return False
        if any(self.joint_torque != other.joint_torque):
            return False
        if any(self.foot_position != other.foot_position):
            return False
        if any(self.foot_velocity != other.foot_velocity):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def contact_state(self):
        """Message field 'contact_state'."""
        return self._contact_state

    @contact_state.setter
    def contact_state(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'contact_state' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'contact_state' numpy.ndarray() must have a size of 4"
            self._contact_state = value
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
                "The 'contact_state' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._contact_state = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def contact_prob(self):
        """Message field 'contact_prob'."""
        return self._contact_prob

    @contact_prob.setter
    def contact_prob(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'contact_prob' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'contact_prob' numpy.ndarray() must have a size of 4"
            self._contact_prob = value
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
                "The 'contact_prob' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._contact_prob = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def contact_force(self):
        """Message field 'contact_force'."""
        return self._contact_force

    @contact_force.setter
    def contact_force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'contact_force' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'contact_force' numpy.ndarray() must have a size of 12"
            self._contact_force = value
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
                "The 'contact_force' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._contact_force = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def base_position(self):
        """Message field 'base_position'."""
        return self._base_position

    @base_position.setter
    def base_position(self, value):
        if __debug__:
            from xterra.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'base_position' field must be a sub message of type 'Point3D'"
        self._base_position = value

    @builtins.property
    def base_orientation(self):
        """Message field 'base_orientation'."""
        return self._base_orientation

    @base_orientation.setter
    def base_orientation(self, value):
        if __debug__:
            from xterra.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'base_orientation' field must be a sub message of type 'Quaternion'"
        self._base_orientation = value

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            from xterra.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'linear_velocity' field must be a sub message of type 'Point3D'"
        self._linear_velocity = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from xterra.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'angular_velocity' field must be a sub message of type 'Point3D'"
        self._angular_velocity = value

    @builtins.property
    def plane_normal(self):
        """Message field 'plane_normal'."""
        return self._plane_normal

    @plane_normal.setter
    def plane_normal(self, value):
        if __debug__:
            from xterra.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'plane_normal' field must be a sub message of type 'Point3D'"
        self._plane_normal = value

    @builtins.property
    def base_wrench(self):
        """Message field 'base_wrench'."""
        return self._base_wrench

    @base_wrench.setter
    def base_wrench(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'base_wrench' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'base_wrench' numpy.ndarray() must have a size of 6"
            self._base_wrench = value
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
                "The 'base_wrench' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._base_wrench = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_position(self):
        """Message field 'joint_position'."""
        return self._joint_position

    @joint_position.setter
    def joint_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'joint_position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'joint_position' numpy.ndarray() must have a size of 12"
            self._joint_position = value
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
                "The 'joint_position' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_velocity(self):
        """Message field 'joint_velocity'."""
        return self._joint_velocity

    @joint_velocity.setter
    def joint_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'joint_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'joint_velocity' numpy.ndarray() must have a size of 12"
            self._joint_velocity = value
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
                "The 'joint_velocity' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_torque(self):
        """Message field 'joint_torque'."""
        return self._joint_torque

    @joint_torque.setter
    def joint_torque(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'joint_torque' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'joint_torque' numpy.ndarray() must have a size of 12"
            self._joint_torque = value
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
                "The 'joint_torque' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_torque = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def foot_position(self):
        """Message field 'foot_position'."""
        return self._foot_position

    @foot_position.setter
    def foot_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'foot_position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'foot_position' numpy.ndarray() must have a size of 12"
            self._foot_position = value
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
                "The 'foot_position' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._foot_position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def foot_velocity(self):
        """Message field 'foot_velocity'."""
        return self._foot_velocity

    @foot_velocity.setter
    def foot_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'foot_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'foot_velocity' numpy.ndarray() must have a size of 12"
            self._foot_velocity = value
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
                "The 'foot_velocity' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._foot_velocity = numpy.array(value, dtype=numpy.float32)
