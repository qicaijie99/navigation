# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/RobotBuff.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotBuff(type):
    """Metaclass of message 'RobotBuff'."""

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
                'sentry_msgs.msg.RobotBuff')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_buff
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_buff
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_buff
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_buff
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_buff

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


class RobotBuff(metaclass=Metaclass_RobotBuff):
    """Message class 'RobotBuff'."""

    __slots__ = [
        '_header',
        '_robot_replenishing_blood',
        '_shooter_cooling_acceleration',
        '_robot_defense_bonus',
        '_robot_attack_bonus',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_replenishing_blood': 'boolean',
        'shooter_cooling_acceleration': 'boolean',
        'robot_defense_bonus': 'boolean',
        'robot_attack_bonus': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.robot_replenishing_blood = kwargs.get('robot_replenishing_blood', bool())
        self.shooter_cooling_acceleration = kwargs.get('shooter_cooling_acceleration', bool())
        self.robot_defense_bonus = kwargs.get('robot_defense_bonus', bool())
        self.robot_attack_bonus = kwargs.get('robot_attack_bonus', bool())

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
        if self.robot_replenishing_blood != other.robot_replenishing_blood:
            return False
        if self.shooter_cooling_acceleration != other.shooter_cooling_acceleration:
            return False
        if self.robot_defense_bonus != other.robot_defense_bonus:
            return False
        if self.robot_attack_bonus != other.robot_attack_bonus:
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
    def robot_replenishing_blood(self):
        """Message field 'robot_replenishing_blood'."""
        return self._robot_replenishing_blood

    @robot_replenishing_blood.setter
    def robot_replenishing_blood(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_replenishing_blood' field must be of type 'bool'"
        self._robot_replenishing_blood = value

    @builtins.property
    def shooter_cooling_acceleration(self):
        """Message field 'shooter_cooling_acceleration'."""
        return self._shooter_cooling_acceleration

    @shooter_cooling_acceleration.setter
    def shooter_cooling_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shooter_cooling_acceleration' field must be of type 'bool'"
        self._shooter_cooling_acceleration = value

    @builtins.property
    def robot_defense_bonus(self):
        """Message field 'robot_defense_bonus'."""
        return self._robot_defense_bonus

    @robot_defense_bonus.setter
    def robot_defense_bonus(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_defense_bonus' field must be of type 'bool'"
        self._robot_defense_bonus = value

    @builtins.property
    def robot_attack_bonus(self):
        """Message field 'robot_attack_bonus'."""
        return self._robot_attack_bonus

    @robot_attack_bonus.setter
    def robot_attack_bonus(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_attack_bonus' field must be of type 'bool'"
        self._robot_attack_bonus = value
