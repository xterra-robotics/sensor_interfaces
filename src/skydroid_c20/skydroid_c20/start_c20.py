import logging
import time
# --- ROS 2 CHANGE: added rclpy and threading for spin ---
import rclpy
import threading
# --- END ROS 2 CHANGE ---
# --- ROS 2 CHANGE: import path updated for ROS 2 package structure ---
from skydroid_c20.skydroid_c20_controller import SkydroidC20Controller
# --- END ROS 2 CHANGE ---

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

def main():
    # --- ROS 2 CHANGE: initialize ROS 2 ---
    rclpy.init()
    # --- END ROS 2 CHANGE ---

    # Define the video source (RTSP stream)
    video_source = 'rtspsrc location=rtsp://192.168.144.108:554/main protocols=tcp latency=0 drop-on-latency=true ! rtph264depay ! h264parse ! avdec_h264 ! queue max-size-buffers=1 max-size-bytes=0 max-size-time=0 leaky=downstream ! videoconvert ! appsink'
    # Initialize the SkydroidC20Controller with camera_port
    controller = SkydroidC20Controller(
        video_source=video_source,
        gimbal_host="192.168.144.108",
        gimbal_port=5000,
        camera_port=8100
    )
    
    # --- ROS 2 CHANGE: spin node in background thread so subscription callbacks fire ---
    # (In DDS, callbacks ran in DDS internal threads. In ROS 2, we need to spin.)
    spin_thread = threading.Thread(target=rclpy.spin, args=(controller,), daemon=True)
    spin_thread.start()
    # --- END ROS 2 CHANGE ---

    # Start video capture
    controller.start_capture()
    logger.info("Video capture started.")
    
    # Attempt to connect to the gimbal and camera control
    if controller.connect_gimbal():
        logger.info("Gimbal connected successfully.")
    else:
        logger.warning("Failed to connect to gimbal. DDS control will not work.")
    
    if controller.connect_camera():
        print("Camera control connected successfully")
        logger.info("Camera control connected successfully.")
    else:
        logger.warning("Failed to connect to camera control. Zoom commands will not work.")
    
    try:
        # Keep the program running indefinitely
        while True:
            time.sleep(1)  # Sleep to prevent high CPU usage
    except KeyboardInterrupt:
        logger.info("Termination signal received. Shutting down...")
    finally:
        # Clean up resources
        controller.stop_capture()
        controller.close_gimbal()
        controller.close_camera()
        # --- ROS 2 CHANGE: shutdown ROS 2 ---
        rclpy.shutdown()
        # --- END ROS 2 CHANGE ---
        logger.info("Resources cleaned up. Exiting.")

if __name__ == "__main__":
    main()
