import sys
if sys.prefix == '/home/cam/projects/CubeRover/venv':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/cam/projects/CubeRover/install/pi_controller'
