source /opt/ros/humble/setup.bash
source install/setup.bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI="file://$PWD/cyclonedds.xml"
export ROS_DOMAIN_ID=0
ros2 daemon stop
ros2 daemon start
