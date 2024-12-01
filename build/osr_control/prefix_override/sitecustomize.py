import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/seabro/osr_ws/src/osr-rover-code/ROS/install/osr_control'
