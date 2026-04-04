import os
os.environ["GST_PLUGIN_FEATURE_RANK"] = "nvv4l2decoder:0,nvjpegdec:0,nvv4l2h264enc:0,nvvideoconvert:0,nvvideo4linux2:0"
os.environ["GST_GL_WINDOW"] = "dummy"
import cv2
import numpy as np
import threading
import logging
import time
import sys
# --- ROS 2 CHANGE: replaced cyclonedds + DDSPublisher + DDSDataTypes ---
import rclpy
from rclpy.node import Node
#from skydroid_c20_msgs.msg import CameraFrame
from sensor_msgs.msg import CompressedImage
from builtin_interfaces.msg import Time
# --- END ROS 2 CHANGE ---

# self.logger = logging.getLogger(__name__)

# --- ROS 2 CHANGE: added Node as base class ---
class CameraController(Node):
    def __init__(self, video_source, topic_name="/camera/stream0", frame_rate=30, flip_code=None):
        # --- ROS 2 CHANGE: initialize Node ---
        Node.__init__(self, 'camera_controller_node')
        # --- END ROS 2 CHANGE ---
        self.video_source = video_source
        self.topic_name = topic_name
        self.frame_rate = frame_rate
        self.flip_image = flip_code
        self.cap = cv2.VideoCapture(self.video_source)
        self.logger = logging.getLogger(__name__)
        # Create a formatter
        formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')

        # Handler for stdout
        stdout_handler = logging.StreamHandler()
        stdout_handler.setLevel(logging.INFO)  # Set level for stdout
        stdout_handler.setFormatter(formatter)

        # Handler for file
        file_handler = logging.FileHandler('camera.log')  # Specify the file name
        file_handler.setLevel(logging.INFO)  # Set level for file
        file_handler.setFormatter(formatter)

        # Add handlers to the logger
        self.logger.addHandler(stdout_handler)
        self.logger.addHandler(file_handler)

        if not self.cap.isOpened():
            self.logger.warning(f"Failed to open video source {self.video_source}, generating random images instead.")
            self.cap = None
        else:
            self.logger.info(f"Successfully opened video source {self.video_source}")
        # --- ROS 2 CHANGE: replaced DomainParticipant + Topic + DDSPublisher with ROS 2 publisher ---
        #self.publisher = self.create_publisher(CameraFrame, topic_name, 10)
        self.publisher = self.create_publisher(CompressedImage, topic_name + "/compressed", 10)
        # --- END ROS 2 CHANGE ---
        self.running = False
        self.thread = None
        self.prev_frame = None
        self.stuck_counter = 0
        self.stuck_threshold = 10  # Number of consecutive similar frames to consider stuck
        self.similarity_threshold = 0.05  # MSE threshold to consider frames similar

    def start_capture(self):
        self.running = True
        self.thread = threading.Thread(target=self._capture_and_publish, daemon=True)
        self.thread.start()
        self.logger.info(f"Started capturing from {self.video_source}")

    def stop_capture(self):
        self.running = False
        if self.thread:
            self.thread.join()
        if self.cap is not None and self.cap.isOpened():
            self.cap.release()
        self.logger.info(f"Stopped capturing from {self.video_source}")

    def _capture_and_publish(self):
        while self.running:
            if self.cap is not None and self.cap.isOpened():
                ret, frame = self.cap.read()
                if not ret:
                    self.logger.warning(f"Failed to capture frame from {self.video_source}, using random image.")
                    frame = self._generate_random_image()
                else:
                    # frame is already BGR from GStreamer/OpenCV — no conversion needed
                    if self.flip_image == 0:
                        frame = cv2.flip(frame, 0)  # Flip vertically
                    elif self.flip_image == 1:
                        frame = cv2.flip(frame, 1)  # Flip horizontally
                    frame = cv2.resize(frame, (960, 540), interpolation=cv2.INTER_AREA)
            else:
                frame = self._generate_random_image()

            # Check if frame is stuck (works fine in BGR too — MSE doesn't care about color order)
            if self._is_frame_stuck(frame):
                self.stuck_counter += 1
                if self.stuck_counter >= self.stuck_threshold:
                    self.logger.error("Video feed appears to be stuck. Restarting program.")
                    # self.restart_program()
            else:
                self.stuck_counter = 0

            self.prev_frame = frame.copy()

            # JPEG encode directly from BGR — no color conversion needed
            ret_encode, jpeg_data = cv2.imencode('.jpg', frame, [cv2.IMWRITE_JPEG_QUALITY, 80])
            if ret_encode:
                msg = CompressedImage()
                msg.header.stamp = self.get_clock().now().to_msg()
                msg.header.frame_id = "camera"
                msg.format = "jpeg"
                msg.data = jpeg_data.tobytes()
                self.publisher.publish(msg)

            time.sleep(1.0 / self.frame_rate)
    def _is_frame_stuck(self, current_frame):
        """Check if the current frame is similar to the previous frame."""
        if self.prev_frame is None:
            return False
        mse = np.mean((self.prev_frame - current_frame) ** 2)
        # print(f"MSE: {mse}")
        return mse < self.similarity_threshold

    def _generate_random_image(self):
        """Generate a random image if video capture fails."""
        return np.random.randint(0, 256, (480, 640, 3), dtype=np.uint8)

    def restart_program(self):
        """Restart the current program."""
        self.logger.info("Restarting program...")
        os.execv(sys.executable, [sys.executable] + sys.argv)
