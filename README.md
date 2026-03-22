> **Note:** Open `cyclonedds.xml` and change the peer IP with your PC WiFi IP when connected to the same network as that of the robot onboard Jetson.

# PC VISUALISATION SETUP

```bash
cd docker
docker build -t fast-lio-ros2:latest .
./enter_container.sh
source source_ros2_env.sh
rviz2 -d demo.rviz
```
