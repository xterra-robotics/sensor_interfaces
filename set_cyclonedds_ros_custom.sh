source /opt/ros/humble/setup.bash
source install/setup.bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI="file://$PWD/cyclonedds.xml"
export CYCLONEDDS_HOME="/home/ros/install"
export LD_LIBRARY_PATH=/home/ros/install/lib:$LD_LIBRARY_PATH
ros2 daemon stop
ros2 daemon start
