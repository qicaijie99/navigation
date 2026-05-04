# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/ShootData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ShootData(type):
    """Metaclass of message 'ShootData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BULLET_TYPE_17MM': 1,
        'BULLET_TYPE_42MM': 2,
        'SHOOTER_ID_17MM_ID1': 1,
        'SHOOTER_ID_17MM_ID2': 2,
        'SHOOTER_ID_42MM_ID1': 3,
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
                'sentry_msgs.msg.ShootData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__shoot_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__shoot_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__shoot_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__shoot_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__shoot_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BULLET_TYPE_17MM': cls.__constants['BULLET_TYPE_17MM'],
            'BULLET_TYPE_42MM': cls.__constants['BULLET_TYPE_42MM'],
            'SHOOTER_ID_17MM_ID1': cls.__constants['SHOOTER_ID_17MM_ID1'],
            'SHOOTER_ID_17MM_ID2': cls.__constants['SHOOTER_ID_17MM_ID2'],
            'SHOOTER_ID_42MM_ID1': cls.__constants['SHOOTER_ID_42MM_ID1'],
        }

    @property
    def BULLET_TYPE_17MM(self):
        """Message constant 'BULLET_TYPE_17MM'."""
        return Metaclass_ShootData.__constants['BULLET_TYPE_17MM']

    @property
    def BULLET_TYPE_42MM(self):
        """Message constant 'BULLET_TYPE_42MM'."""
        return Metaclass_ShootData.__constants['BULLET_TYPE_42MM']

    @property
    def SHOOTER_ID_17MM_ID1(self):
        """Message constant 'SHOOTER_ID_17MM_ID1'."""
        return Metaclass_ShootData.__constants['SHOOTER_ID_17MM_ID1']

    @property
    def SHOOTER_ID_17MM_ID2(self):
        """Message constant 'SHOOTER_ID_17MM_ID2'."""
        return Metaclass_ShootData.__constants['SHOOTER_ID_17MM_ID2']

    @property
    def SHOOTER_ID_42MM_ID1(self):
        """Message constant 'SHOOTER_ID_42MM_ID1'."""
        return Metaclass_ShootData.__constants['SHOOTER_ID_42MM_ID1']


class ShootData(metaclass=Metaclass_ShootData):
    """
    Message class 'ShootData'.

    Constants:
      BULLET_TYPE_17MM
      BULLET_TYPE_42MM
      SHOOTER_ID_17MM_ID1
      SHOOTER_ID_17MM_ID2
      SHOOTER_ID_42MM_ID1
    """

    __slots__ = [
        '_header',
        '_bullet_type',
        '_shooter_id',
        '_bullet_freq',
        '_bullet_speed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bullet_type': 'uint8',
        'shooter_id': 'uint8',
        'bullet_freq': 'uint8',
        'bullet_speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.bullet_type = kwargs.get('bullet_type', int())
        self.shooter_id = kwargs.get('shooter_id', int())
        self.bullet_freq = kwargs.get('bullet_freq', int())
        self.bullet_speed = kwargs.get('bullet_speed', float())

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
        if self.bullet_type != other.bullet_type:
            return False
        if self.shooter_id != other.shooter_id:
            return False
        if self.bullet_freq != other.bullet_freq:
            return False
        if self.bullet_speed != other.bullet_speed:
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
    def bullet_type(self):
        """Message field 'bullet_type'."""
        return self._bullet_type

    @bullet_type.setter
    def bullet_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bullet_type' field must be an unsigned integer in [0, 255]"
        self._bullet_type = value

    @builtins.property
    def shooter_id(self):
        """Message field 'shooter_id'."""
        return self._shooter_id

    @shooter_id.setter
    def shooter_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shooter_id' field must be an unsigned integer in [0, 255]"
        self._shooter_id = value

    @builtins.property
    def bullet_freq(self):
        """Message field 'bullet_freq'."""
        return self._bullet_freq

    @bullet_freq.setter
    def bullet_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_freq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bullet_freq' field must be an unsigned integer in [0, 255]"
        self._bullet_freq = value

    @builtins.property
    def bullet_speed(self):
        """Message field 'bullet_speed'."""
        return self._bullet_speed

    @bullet_speed.setter
    def bullet_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bullet_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bullet_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bullet_speed = value
