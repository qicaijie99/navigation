# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROBOT_ID_RED1_HERO': 1,
        'ROBOT_ID_RED2_ENGINEER': 2,
        'ROBOT_ID_RED3_INFANTRY': 3,
        'ROBOT_ID_RED4_INFANTRY': 4,
        'ROBOT_ID_RED5_INFANTRY': 5,
        'ROBOT_ID_RED6_AERIAL': 6,
        'ROBOT_ID_RED7_SENTRY': 7,
        'ROBOT_ID_RED8_DART': 8,
        'ROBOT_ID_RED9_RADAR': 9,
        'ROBOT_ID_BLUE1_HERO': 101,
        'ROBOT_ID_BLUE2_ENGINEER': 102,
        'ROBOT_ID_BLUE3_INFANTRY': 103,
        'ROBOT_ID_BLUE4_INFANTRY': 104,
        'ROBOT_ID_BLUE5_INFANTRY': 105,
        'ROBOT_ID_BLUE6_AERIAL': 106,
        'ROBOT_ID_BLUE7_SENTRY': 107,
        'ROBOT_ID_BLUE8_DART': 108,
        'ROBOT_ID_BLUE9_RADAR': 109,
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
                'sentry_msgs.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROBOT_ID_RED1_HERO': cls.__constants['ROBOT_ID_RED1_HERO'],
            'ROBOT_ID_RED2_ENGINEER': cls.__constants['ROBOT_ID_RED2_ENGINEER'],
            'ROBOT_ID_RED3_INFANTRY': cls.__constants['ROBOT_ID_RED3_INFANTRY'],
            'ROBOT_ID_RED4_INFANTRY': cls.__constants['ROBOT_ID_RED4_INFANTRY'],
            'ROBOT_ID_RED5_INFANTRY': cls.__constants['ROBOT_ID_RED5_INFANTRY'],
            'ROBOT_ID_RED6_AERIAL': cls.__constants['ROBOT_ID_RED6_AERIAL'],
            'ROBOT_ID_RED7_SENTRY': cls.__constants['ROBOT_ID_RED7_SENTRY'],
            'ROBOT_ID_RED8_DART': cls.__constants['ROBOT_ID_RED8_DART'],
            'ROBOT_ID_RED9_RADAR': cls.__constants['ROBOT_ID_RED9_RADAR'],
            'ROBOT_ID_BLUE1_HERO': cls.__constants['ROBOT_ID_BLUE1_HERO'],
            'ROBOT_ID_BLUE2_ENGINEER': cls.__constants['ROBOT_ID_BLUE2_ENGINEER'],
            'ROBOT_ID_BLUE3_INFANTRY': cls.__constants['ROBOT_ID_BLUE3_INFANTRY'],
            'ROBOT_ID_BLUE4_INFANTRY': cls.__constants['ROBOT_ID_BLUE4_INFANTRY'],
            'ROBOT_ID_BLUE5_INFANTRY': cls.__constants['ROBOT_ID_BLUE5_INFANTRY'],
            'ROBOT_ID_BLUE6_AERIAL': cls.__constants['ROBOT_ID_BLUE6_AERIAL'],
            'ROBOT_ID_BLUE7_SENTRY': cls.__constants['ROBOT_ID_BLUE7_SENTRY'],
            'ROBOT_ID_BLUE8_DART': cls.__constants['ROBOT_ID_BLUE8_DART'],
            'ROBOT_ID_BLUE9_RADAR': cls.__constants['ROBOT_ID_BLUE9_RADAR'],
        }

    @property
    def ROBOT_ID_RED1_HERO(self):
        """Message constant 'ROBOT_ID_RED1_HERO'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED1_HERO']

    @property
    def ROBOT_ID_RED2_ENGINEER(self):
        """Message constant 'ROBOT_ID_RED2_ENGINEER'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED2_ENGINEER']

    @property
    def ROBOT_ID_RED3_INFANTRY(self):
        """Message constant 'ROBOT_ID_RED3_INFANTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED3_INFANTRY']

    @property
    def ROBOT_ID_RED4_INFANTRY(self):
        """Message constant 'ROBOT_ID_RED4_INFANTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED4_INFANTRY']

    @property
    def ROBOT_ID_RED5_INFANTRY(self):
        """Message constant 'ROBOT_ID_RED5_INFANTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED5_INFANTRY']

    @property
    def ROBOT_ID_RED6_AERIAL(self):
        """Message constant 'ROBOT_ID_RED6_AERIAL'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED6_AERIAL']

    @property
    def ROBOT_ID_RED7_SENTRY(self):
        """Message constant 'ROBOT_ID_RED7_SENTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED7_SENTRY']

    @property
    def ROBOT_ID_RED8_DART(self):
        """Message constant 'ROBOT_ID_RED8_DART'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED8_DART']

    @property
    def ROBOT_ID_RED9_RADAR(self):
        """Message constant 'ROBOT_ID_RED9_RADAR'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_RED9_RADAR']

    @property
    def ROBOT_ID_BLUE1_HERO(self):
        """Message constant 'ROBOT_ID_BLUE1_HERO'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE1_HERO']

    @property
    def ROBOT_ID_BLUE2_ENGINEER(self):
        """Message constant 'ROBOT_ID_BLUE2_ENGINEER'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE2_ENGINEER']

    @property
    def ROBOT_ID_BLUE3_INFANTRY(self):
        """Message constant 'ROBOT_ID_BLUE3_INFANTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE3_INFANTRY']

    @property
    def ROBOT_ID_BLUE4_INFANTRY(self):
        """Message constant 'ROBOT_ID_BLUE4_INFANTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE4_INFANTRY']

    @property
    def ROBOT_ID_BLUE5_INFANTRY(self):
        """Message constant 'ROBOT_ID_BLUE5_INFANTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE5_INFANTRY']

    @property
    def ROBOT_ID_BLUE6_AERIAL(self):
        """Message constant 'ROBOT_ID_BLUE6_AERIAL'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE6_AERIAL']

    @property
    def ROBOT_ID_BLUE7_SENTRY(self):
        """Message constant 'ROBOT_ID_BLUE7_SENTRY'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE7_SENTRY']

    @property
    def ROBOT_ID_BLUE8_DART(self):
        """Message constant 'ROBOT_ID_BLUE8_DART'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE8_DART']

    @property
    def ROBOT_ID_BLUE9_RADAR(self):
        """Message constant 'ROBOT_ID_BLUE9_RADAR'."""
        return Metaclass_RobotStatus.__constants['ROBOT_ID_BLUE9_RADAR']


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """
    Message class 'RobotStatus'.

    Constants:
      ROBOT_ID_RED1_HERO
      ROBOT_ID_RED2_ENGINEER
      ROBOT_ID_RED3_INFANTRY
      ROBOT_ID_RED4_INFANTRY
      ROBOT_ID_RED5_INFANTRY
      ROBOT_ID_RED6_AERIAL
      ROBOT_ID_RED7_SENTRY
      ROBOT_ID_RED8_DART
      ROBOT_ID_RED9_RADAR
      ROBOT_ID_BLUE1_HERO
      ROBOT_ID_BLUE2_ENGINEER
      ROBOT_ID_BLUE3_INFANTRY
      ROBOT_ID_BLUE4_INFANTRY
      ROBOT_ID_BLUE5_INFANTRY
      ROBOT_ID_BLUE6_AERIAL
      ROBOT_ID_BLUE7_SENTRY
      ROBOT_ID_BLUE8_DART
      ROBOT_ID_BLUE9_RADAR
    """

    __slots__ = [
        '_header',
        '_robot_id',
        '_robot_level',
        '_remain_hp',
        '_max_hp',
        '_shooter_17mm_id1_cooling_rate',
        '_shooter_17mm_id1_cooling_limit',
        '_shooter_17mm_id1_speed_limit',
        '_shooter_17mm_id2_cooling_rate',
        '_shooter_17mm_id2_cooling_limit',
        '_shooter_17mm_id2_speed_limit',
        '_shooter_42mm_id1_cooling_rate',
        '_shooter_42mm_id1_cooling_limit',
        '_shooter_42mm_id1_speed_limit',
        '_chassis_power_limit',
        '_gimbal_power_output',
        '_chassis_power_output',
        '_shooter_power_output',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'uint8',
        'robot_level': 'uint8',
        'remain_hp': 'uint16',
        'max_hp': 'uint16',
        'shooter_17mm_id1_cooling_rate': 'uint16',
        'shooter_17mm_id1_cooling_limit': 'uint16',
        'shooter_17mm_id1_speed_limit': 'uint16',
        'shooter_17mm_id2_cooling_rate': 'uint16',
        'shooter_17mm_id2_cooling_limit': 'uint16',
        'shooter_17mm_id2_speed_limit': 'uint16',
        'shooter_42mm_id1_cooling_rate': 'uint16',
        'shooter_42mm_id1_cooling_limit': 'uint16',
        'shooter_42mm_id1_speed_limit': 'uint16',
        'chassis_power_limit': 'uint16',
        'gimbal_power_output': 'boolean',
        'chassis_power_output': 'boolean',
        'shooter_power_output': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.robot_id = kwargs.get('robot_id', int())
        self.robot_level = kwargs.get('robot_level', int())
        self.remain_hp = kwargs.get('remain_hp', int())
        self.max_hp = kwargs.get('max_hp', int())
        self.shooter_17mm_id1_cooling_rate = kwargs.get('shooter_17mm_id1_cooling_rate', int())
        self.shooter_17mm_id1_cooling_limit = kwargs.get('shooter_17mm_id1_cooling_limit', int())
        self.shooter_17mm_id1_speed_limit = kwargs.get('shooter_17mm_id1_speed_limit', int())
        self.shooter_17mm_id2_cooling_rate = kwargs.get('shooter_17mm_id2_cooling_rate', int())
        self.shooter_17mm_id2_cooling_limit = kwargs.get('shooter_17mm_id2_cooling_limit', int())
        self.shooter_17mm_id2_speed_limit = kwargs.get('shooter_17mm_id2_speed_limit', int())
        self.shooter_42mm_id1_cooling_rate = kwargs.get('shooter_42mm_id1_cooling_rate', int())
        self.shooter_42mm_id1_cooling_limit = kwargs.get('shooter_42mm_id1_cooling_limit', int())
        self.shooter_42mm_id1_speed_limit = kwargs.get('shooter_42mm_id1_speed_limit', int())
        self.chassis_power_limit = kwargs.get('chassis_power_limit', int())
        self.gimbal_power_output = kwargs.get('gimbal_power_output', bool())
        self.chassis_power_output = kwargs.get('chassis_power_output', bool())
        self.shooter_power_output = kwargs.get('shooter_power_output', bool())

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
        if self.robot_id != other.robot_id:
            return False
        if self.robot_level != other.robot_level:
            return False
        if self.remain_hp != other.remain_hp:
            return False
        if self.max_hp != other.max_hp:
            return False
        if self.shooter_17mm_id1_cooling_rate != other.shooter_17mm_id1_cooling_rate:
            return False
        if self.shooter_17mm_id1_cooling_limit != other.shooter_17mm_id1_cooling_limit:
            return False
        if self.shooter_17mm_id1_speed_limit != other.shooter_17mm_id1_speed_limit:
            return False
        if self.shooter_17mm_id2_cooling_rate != other.shooter_17mm_id2_cooling_rate:
            return False
        if self.shooter_17mm_id2_cooling_limit != other.shooter_17mm_id2_cooling_limit:
            return False
        if self.shooter_17mm_id2_speed_limit != other.shooter_17mm_id2_speed_limit:
            return False
        if self.shooter_42mm_id1_cooling_rate != other.shooter_42mm_id1_cooling_rate:
            return False
        if self.shooter_42mm_id1_cooling_limit != other.shooter_42mm_id1_cooling_limit:
            return False
        if self.shooter_42mm_id1_speed_limit != other.shooter_42mm_id1_speed_limit:
            return False
        if self.chassis_power_limit != other.chassis_power_limit:
            return False
        if self.gimbal_power_output != other.gimbal_power_output:
            return False
        if self.chassis_power_output != other.chassis_power_output:
            return False
        if self.shooter_power_output != other.shooter_power_output:
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
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_id' field must be an unsigned integer in [0, 255]"
        self._robot_id = value

    @builtins.property
    def robot_level(self):
        """Message field 'robot_level'."""
        return self._robot_level

    @robot_level.setter
    def robot_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_level' field must be an unsigned integer in [0, 255]"
        self._robot_level = value

    @builtins.property
    def remain_hp(self):
        """Message field 'remain_hp'."""
        return self._remain_hp

    @remain_hp.setter
    def remain_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remain_hp' field must be an unsigned integer in [0, 65535]"
        self._remain_hp = value

    @builtins.property
    def max_hp(self):
        """Message field 'max_hp'."""
        return self._max_hp

    @max_hp.setter
    def max_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_hp' field must be an unsigned integer in [0, 65535]"
        self._max_hp = value

    @builtins.property
    def shooter_17mm_id1_cooling_rate(self):
        """Message field 'shooter_17mm_id1_cooling_rate'."""
        return self._shooter_17mm_id1_cooling_rate

    @shooter_17mm_id1_cooling_rate.setter
    def shooter_17mm_id1_cooling_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_id1_cooling_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_id1_cooling_rate' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_id1_cooling_rate = value

    @builtins.property
    def shooter_17mm_id1_cooling_limit(self):
        """Message field 'shooter_17mm_id1_cooling_limit'."""
        return self._shooter_17mm_id1_cooling_limit

    @shooter_17mm_id1_cooling_limit.setter
    def shooter_17mm_id1_cooling_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_id1_cooling_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_id1_cooling_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_id1_cooling_limit = value

    @builtins.property
    def shooter_17mm_id1_speed_limit(self):
        """Message field 'shooter_17mm_id1_speed_limit'."""
        return self._shooter_17mm_id1_speed_limit

    @shooter_17mm_id1_speed_limit.setter
    def shooter_17mm_id1_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_id1_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_id1_speed_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_id1_speed_limit = value

    @builtins.property
    def shooter_17mm_id2_cooling_rate(self):
        """Message field 'shooter_17mm_id2_cooling_rate'."""
        return self._shooter_17mm_id2_cooling_rate

    @shooter_17mm_id2_cooling_rate.setter
    def shooter_17mm_id2_cooling_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_id2_cooling_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_id2_cooling_rate' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_id2_cooling_rate = value

    @builtins.property
    def shooter_17mm_id2_cooling_limit(self):
        """Message field 'shooter_17mm_id2_cooling_limit'."""
        return self._shooter_17mm_id2_cooling_limit

    @shooter_17mm_id2_cooling_limit.setter
    def shooter_17mm_id2_cooling_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_id2_cooling_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_id2_cooling_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_id2_cooling_limit = value

    @builtins.property
    def shooter_17mm_id2_speed_limit(self):
        """Message field 'shooter_17mm_id2_speed_limit'."""
        return self._shooter_17mm_id2_speed_limit

    @shooter_17mm_id2_speed_limit.setter
    def shooter_17mm_id2_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_id2_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_id2_speed_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_id2_speed_limit = value

    @builtins.property
    def shooter_42mm_id1_cooling_rate(self):
        """Message field 'shooter_42mm_id1_cooling_rate'."""
        return self._shooter_42mm_id1_cooling_rate

    @shooter_42mm_id1_cooling_rate.setter
    def shooter_42mm_id1_cooling_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_42mm_id1_cooling_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_42mm_id1_cooling_rate' field must be an unsigned integer in [0, 65535]"
        self._shooter_42mm_id1_cooling_rate = value

    @builtins.property
    def shooter_42mm_id1_cooling_limit(self):
        """Message field 'shooter_42mm_id1_cooling_limit'."""
        return self._shooter_42mm_id1_cooling_limit

    @shooter_42mm_id1_cooling_limit.setter
    def shooter_42mm_id1_cooling_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_42mm_id1_cooling_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_42mm_id1_cooling_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_42mm_id1_cooling_limit = value

    @builtins.property
    def shooter_42mm_id1_speed_limit(self):
        """Message field 'shooter_42mm_id1_speed_limit'."""
        return self._shooter_42mm_id1_speed_limit

    @shooter_42mm_id1_speed_limit.setter
    def shooter_42mm_id1_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_42mm_id1_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_42mm_id1_speed_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_42mm_id1_speed_limit = value

    @builtins.property
    def chassis_power_limit(self):
        """Message field 'chassis_power_limit'."""
        return self._chassis_power_limit

    @chassis_power_limit.setter
    def chassis_power_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_power_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chassis_power_limit' field must be an unsigned integer in [0, 65535]"
        self._chassis_power_limit = value

    @builtins.property
    def gimbal_power_output(self):
        """Message field 'gimbal_power_output'."""
        return self._gimbal_power_output

    @gimbal_power_output.setter
    def gimbal_power_output(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gimbal_power_output' field must be of type 'bool'"
        self._gimbal_power_output = value

    @builtins.property
    def chassis_power_output(self):
        """Message field 'chassis_power_output'."""
        return self._chassis_power_output

    @chassis_power_output.setter
    def chassis_power_output(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'chassis_power_output' field must be of type 'bool'"
        self._chassis_power_output = value

    @builtins.property
    def shooter_power_output(self):
        """Message field 'shooter_power_output'."""
        return self._shooter_power_output

    @shooter_power_output.setter
    def shooter_power_output(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shooter_power_output' field must be of type 'bool'"
        self._shooter_power_output = value
