source /opt/ros/humble/setup.bash
source install/setup.bash 
export CYCLONEDDS_URI=/root/ros2_ws/cyclonedds.xml
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export ROS_DOMAIN_ID=0
ros2 daemon stop
ros2 daemon start