# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/GameStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GameStatus(type):
    """Metaclass of message 'GameStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GAME_TYPE_RMUC': 1,
        'GAME_TYPE_RMUT': 2,
        'GAME_TYPE_RMUA': 3,
        'GAME_TYPE_RMUL3V3': 4,
        'GAME_TYPE_RMUL1V1': 5,
        'PROGRESS_UNSTART': 0,
        'PROGRESS_PREPARE': 1,
        'PROGRESS_SELFCHECK': 2,
        'PROGRESS_5SCOUNTDOWN': 3,
        'PROGRESS_BATTLE': 4,
        'PROGRESS_CALCULATING': 5,
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
                'sentry_msgs.msg.GameStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__game_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__game_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__game_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__game_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__game_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GAME_TYPE_RMUC': cls.__constants['GAME_TYPE_RMUC'],
            'GAME_TYPE_RMUT': cls.__constants['GAME_TYPE_RMUT'],
            'GAME_TYPE_RMUA': cls.__constants['GAME_TYPE_RMUA'],
            'GAME_TYPE_RMUL3V3': cls.__constants['GAME_TYPE_RMUL3V3'],
            'GAME_TYPE_RMUL1V1': cls.__constants['GAME_TYPE_RMUL1V1'],
            'PROGRESS_UNSTART': cls.__constants['PROGRESS_UNSTART'],
            'PROGRESS_PREPARE': cls.__constants['PROGRESS_PREPARE'],
            'PROGRESS_SELFCHECK': cls.__constants['PROGRESS_SELFCHECK'],
            'PROGRESS_5SCOUNTDOWN': cls.__constants['PROGRESS_5SCOUNTDOWN'],
            'PROGRESS_BATTLE': cls.__constants['PROGRESS_BATTLE'],
            'PROGRESS_CALCULATING': cls.__constants['PROGRESS_CALCULATING'],
        }

    @property
    def GAME_TYPE_RMUC(self):
        """Message constant 'GAME_TYPE_RMUC'."""
        return Metaclass_GameStatus.__constants['GAME_TYPE_RMUC']

    @property
    def GAME_TYPE_RMUT(self):
        """Message constant 'GAME_TYPE_RMUT'."""
        return Metaclass_GameStatus.__constants['GAME_TYPE_RMUT']

    @property
    def GAME_TYPE_RMUA(self):
        """Message constant 'GAME_TYPE_RMUA'."""
        return Metaclass_GameStatus.__constants['GAME_TYPE_RMUA']

    @property
    def GAME_TYPE_RMUL3V3(self):
        """Message constant 'GAME_TYPE_RMUL3V3'."""
        return Metaclass_GameStatus.__constants['GAME_TYPE_RMUL3V3']

    @property
    def GAME_TYPE_RMUL1V1(self):
        """Message constant 'GAME_TYPE_RMUL1V1'."""
        return Metaclass_GameStatus.__constants['GAME_TYPE_RMUL1V1']

    @property
    def PROGRESS_UNSTART(self):
        """Message constant 'PROGRESS_UNSTART'."""
        return Metaclass_GameStatus.__constants['PROGRESS_UNSTART']

    @property
    def PROGRESS_PREPARE(self):
        """Message constant 'PROGRESS_PREPARE'."""
        return Metaclass_GameStatus.__constants['PROGRESS_PREPARE']

    @property
    def PROGRESS_SELFCHECK(self):
        """Message constant 'PROGRESS_SELFCHECK'."""
        return Metaclass_GameStatus.__constants['PROGRESS_SELFCHECK']

    @property
    def PROGRESS_5SCOUNTDOWN(self):
        """Message constant 'PROGRESS_5SCOUNTDOWN'."""
        return Metaclass_GameStatus.__constants['PROGRESS_5SCOUNTDOWN']

    @property
    def PROGRESS_BATTLE(self):
        """Message constant 'PROGRESS_BATTLE'."""
        return Metaclass_GameStatus.__constants['PROGRESS_BATTLE']

    @property
    def PROGRESS_CALCULATING(self):
        """Message constant 'PROGRESS_CALCULATING'."""
        return Metaclass_GameStatus.__constants['PROGRESS_CALCULATING']


class GameStatus(metaclass=Metaclass_GameStatus):
    """
    Message class 'GameStatus'.

    Constants:
      GAME_TYPE_RMUC
      GAME_TYPE_RMUT
      GAME_TYPE_RMUA
      GAME_TYPE_RMUL3V3
      GAME_TYPE_RMUL1V1
      PROGRESS_UNSTART
      PROGRESS_PREPARE
      PROGRESS_SELFCHECK
      PROGRESS_5SCOUNTDOWN
      PROGRESS_BATTLE
      PROGRESS_CALCULATING
    """

    __slots__ = [
        '_header',
        '_game_type',
        '_game_progress',
        '_stage_remain_time',
        '_sync_time_stamp',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'game_type': 'uint8',
        'game_progress': 'uint8',
        'stage_remain_time': 'uint16',
        'sync_time_stamp': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.game_type = kwargs.get('game_type', int())
        self.game_progress = kwargs.get('game_progress', int())
        self.stage_remain_time = kwargs.get('stage_remain_time', int())
        self.sync_time_stamp = kwargs.get('sync_time_stamp', int())

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
        if self.game_type != other.game_type:
            return False
        if self.game_progress != other.game_progress:
            return False
        if self.stage_remain_time != other.stage_remain_time:
            return False
        if self.sync_time_stamp != other.sync_time_stamp:
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
    def game_type(self):
        """Message field 'game_type'."""
        return self._game_type

    @game_type.setter
    def game_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_type' field must be an unsigned integer in [0, 255]"
        self._game_type = value

    @builtins.property
    def game_progress(self):
        """Message field 'game_progress'."""
        return self._game_progress

    @game_progress.setter
    def game_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_progress' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_progress' field must be an unsigned integer in [0, 255]"
        self._game_progress = value

    @builtins.property
    def stage_remain_time(self):
        """Message field 'stage_remain_time'."""
        return self._stage_remain_time

    @stage_remain_time.setter
    def stage_remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stage_remain_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'stage_remain_time' field must be an unsigned integer in [0, 65535]"
        self._stage_remain_time = value

    @builtins.property
    def sync_time_stamp(self):
        """Message field 'sync_time_stamp'."""
        return self._sync_time_stamp

    @sync_time_stamp.setter
    def sync_time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sync_time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'sync_time_stamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._sync_time_stamp = value
