import socket
import logging
import abc
# --- ROS 2 CHANGE: import path updated for ROS 2 package structure ---
from skydroid_c20.camera_controller import CameraController
# --- END ROS 2 CHANGE ---
import threading

# self.logger = logging.getLogger(__name__)

class PTZController(CameraController, abc.ABC):
    def __init__(self, video_source, gimbal_host, gimbal_port, camera_port, topic_name="rt/camera/stream0", frame_rate=30, flip_code=None):
        super().__init__(video_source, topic_name, frame_rate, flip_code)
        self.gimbal_host = gimbal_host
        self.gimbal_port = gimbal_port
        self.camera_port = camera_port
        self.gimbal_socket = None
        self.camera_socket = None
        self._camera_lock = threading.Lock()
        self._gimbal_lock = threading.Lock()

    def connect_gimbal(self):
        """Connect to the gimbal control socket."""
        try:
            self.gimbal_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.gimbal_socket.settimeout(5.0)
            self.gimbal_socket.connect((self.gimbal_host, self.gimbal_port))
            self.logger.info(f"Connected to gimbal at {self.gimbal_host}:{self.gimbal_port}")
            return True
        except Exception as e:
            self.logger.error(f"Gimbal connection failed: {e}")
            return False

    def connect_camera(self):
        """Connect to the camera control socket, reusing gimbal socket if ports are the same."""
        if self.camera_port == self.gimbal_port:
            if self.gimbal_socket is None:
                self.logger.warning("Cannot assign camera socket; gimbal socket not connected.")
                return False
            self.camera_socket = self.gimbal_socket
            self.logger.info("Camera control using the same socket as gimbal.")
            return True
        else:
            try:
                self.camera_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                self.camera_socket.settimeout(5.0)
                self.camera_socket.connect((self.gimbal_host, self.camera_port))
                self.logger.info(f"Connected to camera control at {self.gimbal_host}:{self.camera_port}")
                print(f"Connected to camera control at {self.gimbal_host}:{self.camera_port}")
                return True
            except Exception as e:
                self.logger.error(f"Camera control connection failed: {e}")
                return False

    def close_gimbal(self):
        """Close the gimbal socket if it exists."""
        if self.gimbal_socket:
            self.gimbal_socket.close()
            self.logger.info("Gimbal connection closed.")
            self.gimbal_socket = None

    def close_camera(self):
        """Close the camera socket if it exists and is different from gimbal socket."""
        if self.camera_socket and self.camera_socket is not self.gimbal_socket:
            self.camera_socket.close()
            self.logger.info("Camera control connection closed.")
            self.camera_socket = None

    def send_gimbal_command(self, cmd):
        """Send a command to the gimbal socket."""
        if not self.gimbal_socket:
            self.logger.warning("Gimbal socket not connected; command not sent.")
            return
        try:
            self.gimbal_socket.send(cmd.encode('ascii'))
            self.logger.debug(f"Sent gimbal command: {cmd}")
        except Exception as e:
            self.logger.error(f"Error sending gimbal command: {e}")

    def send_camera_command(self, cmd):
        """Send a command to the camera socket."""
        if not self.camera_socket:
            self.logger.warning("Camera socket not connected; command not sent.")
            return
        try:
            # self.camera_socket.send(cmd.encode('ascii'))
            self.camera_socket.send(cmd)
            self.logger.debug(f"Sent camera command: {cmd}")
        except Exception as e:
            self.logger.error(f"Error sending camera command: {e}")

    @abc.abstractmethod
    def set_yaw(self, angle, speed):
        pass

    @abc.abstractmethod
    def set_pitch(self, angle, speed):
        pass

    def set_angle(self, axis, angle, speed):
        """Set angle for specified axis (YAW or PITCH)."""
        if axis == "YAW":
            self.set_yaw(angle, speed)
        elif axis == "PITCH":
            self.set_pitch(angle, speed)
        else:
            raise ValueError("Axis must be 'YAW' or 'PITCH'")

    def set_home(self, speed):
        """Reset gimbal to home position."""
        self.set_yaw(0, speed)
        self.set_pitch(0, speed)
