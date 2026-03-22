> **Note:** There are 2 `cyclonedds.xml` files — one on the laptop and one on the Jetson. Edit the WiFi interface names on both `cyclonedds.xml` files and also modify the WiFi IP in the `<Peer>` section in both files. In the Jetson's config, the laptop's WiFi IP goes in the `<Peer>` section, and in the laptop's config, the Jetson's WiFi IP goes in the `<Peer>` section — provided both machines are on the same WiFi network. Use `ifconfig` on both machines to find the interface names and IP addresses.

# PC VISUALISATION SETUP

```bash
cd docker
docker build -t fast-lio-ros2:latest .
./enter_container.sh
source source_ros2_env.sh
rviz2 -d demo.rviz
```
