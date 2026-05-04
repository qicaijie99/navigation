# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/DR16Receiver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DR16Receiver(type):
    """Metaclass of message 'DR16Receiver'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SW_UP': 1,
        'SW_DOWN': 2,
        'SW_MID': 3,
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
                'sentry_msgs.msg.DR16Receiver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dr16_receiver
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dr16_receiver
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dr16_receiver
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dr16_receiver
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dr16_receiver

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SW_UP': cls.__constants['SW_UP'],
            'SW_DOWN': cls.__constants['SW_DOWN'],
            'SW_MID': cls.__constants['SW_MID'],
        }

    @property
    def SW_UP(self):
        """Message constant 'SW_UP'."""
        return Metaclass_DR16Receiver.__constants['SW_UP']

    @property
    def SW_DOWN(self):
        """Message constant 'SW_DOWN'."""
        return Metaclass_DR16Receiver.__constants['SW_DOWN']

    @property
    def SW_MID(self):
        """Message constant 'SW_MID'."""
        return Metaclass_DR16Receiver.__constants['SW_MID']


class DR16Receiver(metaclass=Metaclass_DR16Receiver):
    """
    Message class 'DR16Receiver'.

    Constants:
      SW_UP
      SW_DOWN
      SW_MID
    """

    __slots__ = [
        '_header',
        '_ch_left_x',
        '_ch_left_y',
        '_ch_right_x',
        '_ch_right_y',
        '_ch_wheel',
        '_sw_left',
        '_sw_right',
        '_mouse_x',
        '_mouse_y',
        '_mouse_z',
        '_mouse_press_l',
        '_mouse_press_r',
        '_key_w',
        '_key_s',
        '_key_a',
        '_key_d',
        '_key_shift',
        '_key_ctrl',
        '_key_q',
        '_key_e',
        '_key_r',
        '_key_f',
        '_key_g',
        '_key_z',
        '_key_x',
        '_key_c',
        '_key_v',
        '_key_b',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ch_left_x': 'float',
        'ch_left_y': 'float',
        'ch_right_x': 'float',
        'ch_right_y': 'float',
        'ch_wheel': 'float',
        'sw_left': 'uint8',
        'sw_right': 'uint8',
        'mouse_x': 'float',
        'mouse_y': 'float',
        'mouse_z': 'float',
        'mouse_press_l': 'boolean',
        'mouse_press_r': 'boolean',
        'key_w': 'boolean',
        'key_s': 'boolean',
        'key_a': 'boolean',
        'key_d': 'boolean',
        'key_shift': 'boolean',
        'key_ctrl': 'boolean',
        'key_q': 'boolean',
        'key_e': 'boolean',
        'key_r': 'boolean',
        'key_f': 'boolean',
        'key_g': 'boolean',
        'key_z': 'boolean',
        'key_x': 'boolean',
        'key_c': 'boolean',
        'key_v': 'boolean',
        'key_b': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ch_left_x = kwargs.get('ch_left_x', float())
        self.ch_left_y = kwargs.get('ch_left_y', float())
        self.ch_right_x = kwargs.get('ch_right_x', float())
        self.ch_right_y = kwargs.get('ch_right_y', float())
        self.ch_wheel = kwargs.get('ch_wheel', float())
        self.sw_left = kwargs.get('sw_left', int())
        self.sw_right = kwargs.get('sw_right', int())
        self.mouse_x = kwargs.get('mouse_x', float())
        self.mouse_y = kwargs.get('mouse_y', float())
        self.mouse_z = kwargs.get('mouse_z', float())
        self.mouse_press_l = kwargs.get('mouse_press_l', bool())
        self.mouse_press_r = kwargs.get('mouse_press_r', bool())
        self.key_w = kwargs.get('key_w', bool())
        self.key_s = kwargs.get('key_s', bool())
        self.key_a = kwargs.get('key_a', bool())
        self.key_d = kwargs.get('key_d', bool())
        self.key_shift = kwargs.get('key_shift', bool())
        self.key_ctrl = kwargs.get('key_ctrl', bool())
        self.key_q = kwargs.get('key_q', bool())
        self.key_e = kwargs.get('key_e', bool())
        self.key_r = kwargs.get('key_r', bool())
        self.key_f = kwargs.get('key_f', bool())
        self.key_g = kwargs.get('key_g', bool())
        self.key_z = kwargs.get('key_z', bool())
        self.key_x = kwargs.get('key_x', bool())
        self.key_c = kwargs.get('key_c', bool())
        self.key_v = kwargs.get('key_v', bool())
        self.key_b = kwargs.get('key_b', bool())

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
        if self.ch_left_x != other.ch_left_x:
            return False
        if self.ch_left_y != other.ch_left_y:
            return False
        if self.ch_right_x != other.ch_right_x:
            return False
        if self.ch_right_y != other.ch_right_y:
            return False
        if self.ch_wheel != other.ch_wheel:
            return False
        if self.sw_left != other.sw_left:
            return False
        if self.sw_right != other.sw_right:
            return False
        if self.mouse_x != other.mouse_x:
            return False
        if self.mouse_y != other.mouse_y:
            return False
        if self.mouse_z != other.mouse_z:
            return False
        if self.mouse_press_l != other.mouse_press_l:
            return False
        if self.mouse_press_r != other.mouse_press_r:
            return False
        if self.key_w != other.key_w:
            return False
        if self.key_s != other.key_s:
            return False
        if self.key_a != other.key_a:
            return False
        if self.key_d != other.key_d:
            return False
        if self.key_shift != other.key_shift:
            return False
        if self.key_ctrl != other.key_ctrl:
            return False
        if self.key_q != other.key_q:
            return False
        if self.key_e != other.key_e:
            return False
        if self.key_r != other.key_r:
            return False
        if self.key_f != other.key_f:
            return False
        if self.key_g != other.key_g:
            return False
        if self.key_z != other.key_z:
            return False
        if self.key_x != other.key_x:
            return False
        if self.key_c != other.key_c:
            return False
        if self.key_v != other.key_v:
            return False
        if self.key_b != other.key_b:
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
    def ch_left_x(self):
        """Message field 'ch_left_x'."""
        return self._ch_left_x

    @ch_left_x.setter
    def ch_left_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_left_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ch_left_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ch_left_x = value

    @builtins.property
    def ch_left_y(self):
        """Message field 'ch_left_y'."""
        return self._ch_left_y

    @ch_left_y.setter
    def ch_left_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_left_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ch_left_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ch_left_y = value

    @builtins.property
    def ch_right_x(self):
        """Message field 'ch_right_x'."""
        return self._ch_right_x

    @ch_right_x.setter
    def ch_right_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_right_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ch_right_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ch_right_x = value

    @builtins.property
    def ch_right_y(self):
        """Message field 'ch_right_y'."""
        return self._ch_right_y

    @ch_right_y.setter
    def ch_right_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_right_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ch_right_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ch_right_y = value

    @builtins.property
    def ch_wheel(self):
        """Message field 'ch_wheel'."""
        return self._ch_wheel

    @ch_wheel.setter
    def ch_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_wheel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ch_wheel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ch_wheel = value

    @builtins.property
    def sw_left(self):
        """Message field 'sw_left'."""
        return self._sw_left

    @sw_left.setter
    def sw_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sw_left' field must be an unsigned integer in [0, 255]"
        self._sw_left = value

    @builtins.property
    def sw_right(self):
        """Message field 'sw_right'."""
        return self._sw_right

    @sw_right.setter
    def sw_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sw_right' field must be an unsigned integer in [0, 255]"
        self._sw_right = value

    @builtins.property
    def mouse_x(self):
        """Message field 'mouse_x'."""
        return self._mouse_x

    @mouse_x.setter
    def mouse_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mouse_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mouse_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mouse_x = value

    @builtins.property
    def mouse_y(self):
        """Message field 'mouse_y'."""
        return self._mouse_y

    @mouse_y.setter
    def mouse_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mouse_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mouse_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mouse_y = value

    @builtins.property
    def mouse_z(self):
        """Message field 'mouse_z'."""
        return self._mouse_z

    @mouse_z.setter
    def mouse_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mouse_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mouse_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mouse_z = value

    @builtins.property
    def mouse_press_l(self):
        """Message field 'mouse_press_l'."""
        return self._mouse_press_l

    @mouse_press_l.setter
    def mouse_press_l(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mouse_press_l' field must be of type 'bool'"
        self._mouse_press_l = value

    @builtins.property
    def mouse_press_r(self):
        """Message field 'mouse_press_r'."""
        return self._mouse_press_r

    @mouse_press_r.setter
    def mouse_press_r(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mouse_press_r' field must be of type 'bool'"
        self._mouse_press_r = value

    @builtins.property
    def key_w(self):
        """Message field 'key_w'."""
        return self._key_w

    @key_w.setter
    def key_w(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_w' field must be of type 'bool'"
        self._key_w = value

    @builtins.property
    def key_s(self):
        """Message field 'key_s'."""
        return self._key_s

    @key_s.setter
    def key_s(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_s' field must be of type 'bool'"
        self._key_s = value

    @builtins.property
    def key_a(self):
        """Message field 'key_a'."""
        return self._key_a

    @key_a.setter
    def key_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_a' field must be of type 'bool'"
        self._key_a = value

    @builtins.property
    def key_d(self):
        """Message field 'key_d'."""
        return self._key_d

    @key_d.setter
    def key_d(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_d' field must be of type 'bool'"
        self._key_d = value

    @builtins.property
    def key_shift(self):
        """Message field 'key_shift'."""
        return self._key_shift

    @key_shift.setter
    def key_shift(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_shift' field must be of type 'bool'"
        self._key_shift = value

    @builtins.property
    def key_ctrl(self):
        """Message field 'key_ctrl'."""
        return self._key_ctrl

    @key_ctrl.setter
    def key_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_ctrl' field must be of type 'bool'"
        self._key_ctrl = value

    @builtins.property
    def key_q(self):
        """Message field 'key_q'."""
        return self._key_q

    @key_q.setter
    def key_q(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_q' field must be of type 'bool'"
        self._key_q = value

    @builtins.property
    def key_e(self):
        """Message field 'key_e'."""
        return self._key_e

    @key_e.setter
    def key_e(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_e' field must be of type 'bool'"
        self._key_e = value

    @builtins.property
    def key_r(self):
        """Message field 'key_r'."""
        return self._key_r

    @key_r.setter
    def key_r(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_r' field must be of type 'bool'"
        self._key_r = value

    @builtins.property
    def key_f(self):
        """Message field 'key_f'."""
        return self._key_f

    @key_f.setter
    def key_f(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_f' field must be of type 'bool'"
        self._key_f = value

    @builtins.property
    def key_g(self):
        """Message field 'key_g'."""
        return self._key_g

    @key_g.setter
    def key_g(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_g' field must be of type 'bool'"
        self._key_g = value

    @builtins.property
    def key_z(self):
        """Message field 'key_z'."""
        return self._key_z

    @key_z.setter
    def key_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_z' field must be of type 'bool'"
        self._key_z = value

    @builtins.property
    def key_x(self):
        """Message field 'key_x'."""
        return self._key_x

    @key_x.setter
    def key_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_x' field must be of type 'bool'"
        self._key_x = value

    @builtins.property
    def key_c(self):
        """Message field 'key_c'."""
        return self._key_c

    @key_c.setter
    def key_c(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_c' field must be of type 'bool'"
        self._key_c = value

    @builtins.property
    def key_v(self):
        """Message field 'key_v'."""
        return self._key_v

    @key_v.setter
    def key_v(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_v' field must be of type 'bool'"
        self._key_v = value

    @builtins.property
    def key_b(self):
        """Message field 'key_b'."""
        return self._key_b

    @key_b.setter
    def key_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_b' field must be of type 'bool'"
        self._key_b = value
