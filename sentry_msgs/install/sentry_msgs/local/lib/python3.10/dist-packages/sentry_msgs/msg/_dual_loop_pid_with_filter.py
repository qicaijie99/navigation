# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/DualLoopPIDWithFilter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DualLoopPIDWithFilter(type):
    """Metaclass of message 'DualLoopPIDWithFilter'."""

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
            module = import_type_support('sentry_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sentry_msgs.msg.DualLoopPIDWithFilter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dual_loop_pid_with_filter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dual_loop_pid_with_filter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dual_loop_pid_with_filter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dual_loop_pid_with_filter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dual_loop_pid_with_filter

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DualLoopPIDWithFilter(metaclass=Metaclass_DualLoopPIDWithFilter):
    """Message class 'DualLoopPIDWithFilter'."""

    __slots__ = [
        '_header',
        '_inner_kp',
        '_inner_ki',
        '_inner_kd',
        '_inner_p_filter_coefficient',
        '_inner_d_filter_coefficient',
        '_outer_kp',
        '_outer_ki',
        '_outer_kd',
        '_outer_p_filter_coefficient',
        '_outer_d_filter_coefficient',
        '_inner_max_out',
        '_inner_max_iout',
        '_outer_max_out',
        '_outer_max_iout',
        '_inner_set',
        '_inner_feedback',
        '_inner_error',
        '_inner_error_sum',
        '_inner_last_error',
        '_outer_set',
        '_outer_feedback',
        '_outer_error',
        '_outer_error_sum',
        '_outer_last_error',
        '_inner_pout',
        '_inner_iout',
        '_inner_dout',
        '_inner_out',
        '_outer_pout',
        '_outer_iout',
        '_outer_dout',
        '_outer_out',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'inner_kp': 'double',
        'inner_ki': 'double',
        'inner_kd': 'double',
        'inner_p_filter_coefficient': 'double',
        'inner_d_filter_coefficient': 'double',
        'outer_kp': 'double',
        'outer_ki': 'double',
        'outer_kd': 'double',
        'outer_p_filter_coefficient': 'double',
        'outer_d_filter_coefficient': 'double',
        'inner_max_out': 'double',
        'inner_max_iout': 'double',
        'outer_max_out': 'double',
        'outer_max_iout': 'double',
        'inner_set': 'double',
        'inner_feedback': 'double',
        'inner_error': 'double',
        'inner_error_sum': 'double',
        'inner_last_error': 'double',
        'outer_set': 'double',
        'outer_feedback': 'double',
        'outer_error': 'double',
        'outer_error_sum': 'double',
        'outer_last_error': 'double',
        'inner_pout': 'double',
        'inner_iout': 'double',
        'inner_dout': 'double',
        'inner_out': 'double',
        'outer_pout': 'double',
        'outer_iout': 'double',
        'outer_dout': 'double',
        'outer_out': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.inner_kp = kwargs.get('inner_kp', float())
        self.inner_ki = kwargs.get('inner_ki', float())
        self.inner_kd = kwargs.get('inner_kd', float())
        self.inner_p_filter_coefficient = kwargs.get('inner_p_filter_coefficient', float())
        self.inner_d_filter_coefficient = kwargs.get('inner_d_filter_coefficient', float())
        self.outer_kp = kwargs.get('outer_kp', float())
        self.outer_ki = kwargs.get('outer_ki', float())
        self.outer_kd = kwargs.get('outer_kd', float())
        self.outer_p_filter_coefficient = kwargs.get('outer_p_filter_coefficient', float())
        self.outer_d_filter_coefficient = kwargs.get('outer_d_filter_coefficient', float())
        self.inner_max_out = kwargs.get('inner_max_out', float())
        self.inner_max_iout = kwargs.get('inner_max_iout', float())
        self.outer_max_out = kwargs.get('outer_max_out', float())
        self.outer_max_iout = kwargs.get('outer_max_iout', float())
        self.inner_set = kwargs.get('inner_set', float())
        self.inner_feedback = kwargs.get('inner_feedback', float())
        self.inner_error = kwargs.get('inner_error', float())
        self.inner_error_sum = kwargs.get('inner_error_sum', float())
        self.inner_last_error = kwargs.get('inner_last_error', float())
        self.outer_set = kwargs.get('outer_set', float())
        self.outer_feedback = kwargs.get('outer_feedback', float())
        self.outer_error = kwargs.get('outer_error', float())
        self.outer_error_sum = kwargs.get('outer_error_sum', float())
        self.outer_last_error = kwargs.get('outer_last_error', float())
        self.inner_pout = kwargs.get('inner_pout', float())
        self.inner_iout = kwargs.get('inner_iout', float())
        self.inner_dout = kwargs.get('inner_dout', float())
        self.inner_out = kwargs.get('inner_out', float())
        self.outer_pout = kwargs.get('outer_pout', float())
        self.outer_iout = kwargs.get('outer_iout', float())
        self.outer_dout = kwargs.get('outer_dout', float())
        self.outer_out = kwargs.get('outer_out', float())

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
        if self.header != other.header:
            return False
        if self.inner_kp != other.inner_kp:
            return False
        if self.inner_ki != other.inner_ki:
            return False
        if self.inner_kd != other.inner_kd:
            return False
        if self.inner_p_filter_coefficient != other.inner_p_filter_coefficient:
            return False
        if self.inner_d_filter_coefficient != other.inner_d_filter_coefficient:
            return False
        if self.outer_kp != other.outer_kp:
            return False
        if self.outer_ki != other.outer_ki:
            return False
        if self.outer_kd != other.outer_kd:
            return False
        if self.outer_p_filter_coefficient != other.outer_p_filter_coefficient:
            return False
        if self.outer_d_filter_coefficient != other.outer_d_filter_coefficient:
            return False
        if self.inner_max_out != other.inner_max_out:
            return False
        if self.inner_max_iout != other.inner_max_iout:
            return False
        if self.outer_max_out != other.outer_max_out:
            return False
        if self.outer_max_iout != other.outer_max_iout:
            return False
        if self.inner_set != other.inner_set:
            return False
        if self.inner_feedback != other.inner_feedback:
            return False
        if self.inner_error != other.inner_error:
            return False
        if self.inner_error_sum != other.inner_error_sum:
            return False
        if self.inner_last_error != other.inner_last_error:
            return False
        if self.outer_set != other.outer_set:
            return False
        if self.outer_feedback != other.outer_feedback:
            return False
        if self.outer_error != other.outer_error:
            return False
        if self.outer_error_sum != other.outer_error_sum:
            return False
        if self.outer_last_error != other.outer_last_error:
            return False
        if self.inner_pout != other.inner_pout:
            return False
        if self.inner_iout != other.inner_iout:
            return False
        if self.inner_dout != other.inner_dout:
            return False
        if self.inner_out != other.inner_out:
            return False
        if self.outer_pout != other.outer_pout:
            return False
        if self.outer_iout != other.outer_iout:
            return False
        if self.outer_dout != other.outer_dout:
            return False
        if self.outer_out != other.outer_out:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def inner_kp(self):
        """Message field 'inner_kp'."""
        return self._inner_kp

    @inner_kp.setter
    def inner_kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_kp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_kp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_kp = value

    @builtins.property
    def inner_ki(self):
        """Message field 'inner_ki'."""
        return self._inner_ki

    @inner_ki.setter
    def inner_ki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_ki' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_ki' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_ki = value

    @builtins.property
    def inner_kd(self):
        """Message field 'inner_kd'."""
        return self._inner_kd

    @inner_kd.setter
    def inner_kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_kd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_kd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_kd = value

    @builtins.property
    def inner_p_filter_coefficient(self):
        """Message field 'inner_p_filter_coefficient'."""
        return self._inner_p_filter_coefficient

    @inner_p_filter_coefficient.setter
    def inner_p_filter_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_p_filter_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_p_filter_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_p_filter_coefficient = value

    @builtins.property
    def inner_d_filter_coefficient(self):
        """Message field 'inner_d_filter_coefficient'."""
        return self._inner_d_filter_coefficient

    @inner_d_filter_coefficient.setter
    def inner_d_filter_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_d_filter_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_d_filter_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_d_filter_coefficient = value

    @builtins.property
    def outer_kp(self):
        """Message field 'outer_kp'."""
        return self._outer_kp

    @outer_kp.setter
    def outer_kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_kp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_kp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_kp = value

    @builtins.property
    def outer_ki(self):
        """Message field 'outer_ki'."""
        return self._outer_ki

    @outer_ki.setter
    def outer_ki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_ki' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_ki' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_ki = value

    @builtins.property
    def outer_kd(self):
        """Message field 'outer_kd'."""
        return self._outer_kd

    @outer_kd.setter
    def outer_kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_kd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_kd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_kd = value

    @builtins.property
    def outer_p_filter_coefficient(self):
        """Message field 'outer_p_filter_coefficient'."""
        return self._outer_p_filter_coefficient

    @outer_p_filter_coefficient.setter
    def outer_p_filter_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_p_filter_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_p_filter_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_p_filter_coefficient = value

    @builtins.property
    def outer_d_filter_coefficient(self):
        """Message field 'outer_d_filter_coefficient'."""
        return self._outer_d_filter_coefficient

    @outer_d_filter_coefficient.setter
    def outer_d_filter_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_d_filter_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_d_filter_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_d_filter_coefficient = value

    @builtins.property
    def inner_max_out(self):
        """Message field 'inner_max_out'."""
        return self._inner_max_out

    @inner_max_out.setter
    def inner_max_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_max_out' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_max_out' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_max_out = value

    @builtins.property
    def inner_max_iout(self):
        """Message field 'inner_max_iout'."""
        return self._inner_max_iout

    @inner_max_iout.setter
    def inner_max_iout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_max_iout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_max_iout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_max_iout = value

    @builtins.property
    def outer_max_out(self):
        """Message field 'outer_max_out'."""
        return self._outer_max_out

    @outer_max_out.setter
    def outer_max_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_max_out' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_max_out' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_max_out = value

    @builtins.property
    def outer_max_iout(self):
        """Message field 'outer_max_iout'."""
        return self._outer_max_iout

    @outer_max_iout.setter
    def outer_max_iout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_max_iout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_max_iout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_max_iout = value

    @builtins.property
    def inner_set(self):
        """Message field 'inner_set'."""
        return self._inner_set

    @inner_set.setter
    def inner_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_set = value

    @builtins.property
    def inner_feedback(self):
        """Message field 'inner_feedback'."""
        return self._inner_feedback

    @inner_feedback.setter
    def inner_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_feedback' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_feedback' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_feedback = value

    @builtins.property
    def inner_error(self):
        """Message field 'inner_error'."""
        return self._inner_error

    @inner_error.setter
    def inner_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_error = value

    @builtins.property
    def inner_error_sum(self):
        """Message field 'inner_error_sum'."""
        return self._inner_error_sum

    @inner_error_sum.setter
    def inner_error_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_error_sum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_error_sum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_error_sum = value

    @builtins.property
    def inner_last_error(self):
        """Message field 'inner_last_error'."""
        return self._inner_last_error

    @inner_last_error.setter
    def inner_last_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_last_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_last_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_last_error = value

    @builtins.property
    def outer_set(self):
        """Message field 'outer_set'."""
        return self._outer_set

    @outer_set.setter
    def outer_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_set = value

    @builtins.property
    def outer_feedback(self):
        """Message field 'outer_feedback'."""
        return self._outer_feedback

    @outer_feedback.setter
    def outer_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_feedback' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_feedback' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_feedback = value

    @builtins.property
    def outer_error(self):
        """Message field 'outer_error'."""
        return self._outer_error

    @outer_error.setter
    def outer_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_error = value

    @builtins.property
    def outer_error_sum(self):
        """Message field 'outer_error_sum'."""
        return self._outer_error_sum

    @outer_error_sum.setter
    def outer_error_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_error_sum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_error_sum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_error_sum = value

    @builtins.property
    def outer_last_error(self):
        """Message field 'outer_last_error'."""
        return self._outer_last_error

    @outer_last_error.setter
    def outer_last_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_last_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_last_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_last_error = value

    @builtins.property
    def inner_pout(self):
        """Message field 'inner_pout'."""
        return self._inner_pout

    @inner_pout.setter
    def inner_pout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_pout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_pout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_pout = value

    @builtins.property
    def inner_iout(self):
        """Message field 'inner_iout'."""
        return self._inner_iout

    @inner_iout.setter
    def inner_iout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_iout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_iout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_iout = value

    @builtins.property
    def inner_dout(self):
        """Message field 'inner_dout'."""
        return self._inner_dout

    @inner_dout.setter
    def inner_dout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_dout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_dout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_dout = value

    @builtins.property
    def inner_out(self):
        """Message field 'inner_out'."""
        return self._inner_out

    @inner_out.setter
    def inner_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_out' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_out' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_out = value

    @builtins.property
    def outer_pout(self):
        """Message field 'outer_pout'."""
        return self._outer_pout

    @outer_pout.setter
    def outer_pout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_pout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_pout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_pout = value

    @builtins.property
    def outer_iout(self):
        """Message field 'outer_iout'."""
        return self._outer_iout

    @outer_iout.setter
    def outer_iout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_iout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_iout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_iout = value

    @builtins.property
    def outer_dout(self):
        """Message field 'outer_dout'."""
        return self._outer_dout

    @outer_dout.setter
    def outer_dout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_dout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_dout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_dout = value

    @builtins.property
    def outer_out(self):
        """Message field 'outer_out'."""
        return self._outer_out

    @outer_out.setter
    def outer_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_out' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_out' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_out = value
