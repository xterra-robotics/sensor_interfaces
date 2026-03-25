#!/bin/bash

# Function to handle Ctrl+C and stop all background processes
cleanup() {
    echo "Stopping all ROS 2 nodes and LiDAR..."
    # 'jobs -p' gets the process IDs of all background tasks started by this script
    kill $(jobs -p)
    exit 0
}

# Trap the SIGINT signal (Ctrl+C) and execute the cleanup function
trap cleanup SIGINT

source install/setup.bash

# 1. Start LiDAR
echo ">>> Starting LiDAR..."
./start_lidar.sh &

# Wait for 5 seconds
#echo ">>> Waiting for 10 seconds..."
sleep 10

# 2. Launch M2 Autonomy
echo ">>> Launching M2 Autonomy..."
ros2 launch m2_metal_description m2_autonomy.launch.py &

sleep 20


echo ">>> All systems successfully launched. Press [Ctrl+C] to stop."

# Wait indefinitely to keep the script running and trap active
wait
