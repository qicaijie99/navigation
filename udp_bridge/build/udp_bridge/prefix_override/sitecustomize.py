import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nuc02/rm_vision/src/udp_bridge/install/udp_bridge'
