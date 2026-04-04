#!/bin/bash

PAN=$1
TILT=$2
ROLL=$3
ZOOM=$4

# Execute the ROS2 topic publication
ros2 topic pub /camera_control xterra/msg/CameraControl "{pan: $PAN, tilt: $TILT, roll: $ROLL, zoom: $ZOOM, speed: 5.0}"
