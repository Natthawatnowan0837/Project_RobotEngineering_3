import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jo/project_RobotEngineering_3/test/install/d435i_slam'
