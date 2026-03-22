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


# 1. Start LiDAR
echo ">>> Starting LiDAR..."
./start_lidar.sh &

# Wait for 5 seconds
#echo ">>> Waiting for 10 seconds..."
sleep 10

# 2. Launch M2 Autonomy
echo ">>> Launching M2 Autonomy..."
ros2 launch m2_metal_description m2_autonomy.launch.py &
#ros2 run perception general_purpose_streaming &

# Wait for 5 seconds
#echo ">>> Waiting for 20 seconds..."
sleep 20

# 3. Launch Nav2 Bringup
#echo ">>> Launching Nav2 Bringup..."
#ros2 launch nav2_bringup bringup_launch.py \
#    use_sim_time:=False \
#    map:=/home/ros/workspace/src/motion_planner/map/tata_map7_2C.yaml \
#    params_file:=/home/ros/workspace/src/motion_planner/config/m2_nav2_params.yaml &

echo ">>> All systems successfully launched. Press [Ctrl+C] to stop."

# Wait indefinitely to keep the script running and trap active
wait
