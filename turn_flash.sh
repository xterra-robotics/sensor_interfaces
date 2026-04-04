#!/bin/bash

STATE=$1

# Execute the ROS2 topic publication
ros2 topic pub /flash_control xterra/msg/FlashControl "{state: $STATE}"
