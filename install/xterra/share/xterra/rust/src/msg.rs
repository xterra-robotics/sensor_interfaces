#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to xterra__msg__JointData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointData {
    /// Desired joint positions (radians)
    pub q: [f32; 12],

    /// Desired joint velocities (rad/s)
    pub dq: [f32; 12],

    /// Proportional gains (Nm/rad)
    pub kp: [f32; 12],

    /// Derivative gains (Nm·s/rad)
    pub kd: [f32; 12],

    /// Feedforward torques (Nm)
    pub tau: [f32; 12],

}



impl Default for JointData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointData::default())
  }
}

impl rosidl_runtime_rs::Message for JointData {
  type RmwMsg = super::msg::rmw::JointData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        q: msg.q,
        dq: msg.dq,
        kp: msg.kp,
        kd: msg.kd,
        tau: msg.tau,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        q: msg.q,
        dq: msg.dq,
        kp: msg.kp,
        kd: msg.kd,
        tau: msg.tau,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      q: msg.q,
      dq: msg.dq,
      kp: msg.kp,
      kd: msg.kd,
      tau: msg.tau,
    }
  }
}


// Corresponds to xterra__msg__SensorData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub q: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub dq: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddq: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub q_current: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub d_current: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau_est: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpy: [f32; 3],

}



impl Default for SensorData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorData::default())
  }
}

impl rosidl_runtime_rs::Message for SensorData {
  type RmwMsg = super::msg::rmw::SensorData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        q: msg.q,
        dq: msg.dq,
        ddq: msg.ddq,
        q_current: msg.q_current,
        d_current: msg.d_current,
        tau_est: msg.tau_est,
        quat: msg.quat,
        gyro: msg.gyro,
        accel: msg.accel,
        rpy: msg.rpy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        q: msg.q,
        dq: msg.dq,
        ddq: msg.ddq,
        q_current: msg.q_current,
        d_current: msg.d_current,
        tau_est: msg.tau_est,
        quat: msg.quat,
        gyro: msg.gyro,
        accel: msg.accel,
        rpy: msg.rpy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      q: msg.q,
      dq: msg.dq,
      ddq: msg.ddq,
      q_current: msg.q_current,
      d_current: msg.d_current,
      tau_est: msg.tau_est,
      quat: msg.quat,
      gyro: msg.gyro,
      accel: msg.accel,
      rpy: msg.rpy,
    }
  }
}


// Corresponds to xterra__msg__MotorGainMultiplier

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorGainMultiplier {

    // This member is not documented.
    #[allow(missing_docs)]
    pub kp_scale: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd_scale: Vec<f32>,

}



impl Default for MotorGainMultiplier {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorGainMultiplier::default())
  }
}

impl rosidl_runtime_rs::Message for MotorGainMultiplier {
  type RmwMsg = super::msg::rmw::MotorGainMultiplier;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kp_scale: msg.kp_scale.into(),
        kd_scale: msg.kd_scale.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kp_scale: msg.kp_scale.as_slice().into(),
        kd_scale: msg.kd_scale.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kp_scale: msg.kp_scale
          .into_iter()
          .collect(),
      kd_scale: msg.kd_scale
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to xterra__msg__QuadLog

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QuadLog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_state: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_prob: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_force: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_position: super::msg::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_orientation: super::msg::Quaternion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: super::msg::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: super::msg::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plane_normal: super::msg::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_position: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_velocity: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_torque: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_position: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_velocity: [f32; 12],

}



impl Default for QuadLog {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QuadLog::default())
  }
}

impl rosidl_runtime_rs::Message for QuadLog {
  type RmwMsg = super::msg::rmw::QuadLog;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        contact_state: msg.contact_state,
        contact_prob: msg.contact_prob,
        contact_force: msg.contact_force,
        base_position: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Owned(msg.base_position)).into_owned(),
        base_orientation: super::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.base_orientation)).into_owned(),
        linear_velocity: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Owned(msg.linear_velocity)).into_owned(),
        angular_velocity: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Owned(msg.angular_velocity)).into_owned(),
        plane_normal: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Owned(msg.plane_normal)).into_owned(),
        base_wrench: msg.base_wrench,
        joint_position: msg.joint_position,
        joint_velocity: msg.joint_velocity,
        joint_torque: msg.joint_torque,
        foot_position: msg.foot_position,
        foot_velocity: msg.foot_velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        contact_state: msg.contact_state,
        contact_prob: msg.contact_prob,
        contact_force: msg.contact_force,
        base_position: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.base_position)).into_owned(),
        base_orientation: super::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.base_orientation)).into_owned(),
        linear_velocity: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.linear_velocity)).into_owned(),
        angular_velocity: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.angular_velocity)).into_owned(),
        plane_normal: super::msg::Point3D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.plane_normal)).into_owned(),
        base_wrench: msg.base_wrench,
        joint_position: msg.joint_position,
        joint_velocity: msg.joint_velocity,
        joint_torque: msg.joint_torque,
        foot_position: msg.foot_position,
        foot_velocity: msg.foot_velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      contact_state: msg.contact_state,
      contact_prob: msg.contact_prob,
      contact_force: msg.contact_force,
      base_position: super::msg::Point3D::from_rmw_message(msg.base_position),
      base_orientation: super::msg::Quaternion::from_rmw_message(msg.base_orientation),
      linear_velocity: super::msg::Point3D::from_rmw_message(msg.linear_velocity),
      angular_velocity: super::msg::Point3D::from_rmw_message(msg.angular_velocity),
      plane_normal: super::msg::Point3D::from_rmw_message(msg.plane_normal),
      base_wrench: msg.base_wrench,
      joint_position: msg.joint_position,
      joint_velocity: msg.joint_velocity,
      joint_torque: msg.joint_torque,
      foot_position: msg.foot_position,
      foot_velocity: msg.foot_velocity,
    }
  }
}


// Corresponds to xterra__msg__Point3D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point3D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,

}



impl Default for Point3D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Point3D::default())
  }
}

impl rosidl_runtime_rs::Message for Point3D {
  type RmwMsg = super::msg::rmw::Point3D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to xterra__msg__Quaternion

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Quaternion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub w: f32,

}



impl Default for Quaternion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Quaternion::default())
  }
}

impl rosidl_runtime_rs::Message for Quaternion {
  type RmwMsg = super::msg::rmw::Quaternion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
        w: msg.w,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      w: msg.w,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      w: msg.w,
    }
  }
}


// Corresponds to xterra__msg__SolverStats

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SolverStats {

    // This member is not documented.
    #[allow(missing_docs)]
    pub iters: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_iters: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub residual: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub constraint_violation: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_ms: f32,

}



impl Default for SolverStats {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SolverStats::default())
  }
}

impl rosidl_runtime_rs::Message for SolverStats {
  type RmwMsg = super::msg::rmw::SolverStats;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        iters: msg.iters,
        max_iters: msg.max_iters,
        residual: msg.residual,
        constraint_violation: msg.constraint_violation,
        time_ms: msg.time_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      iters: msg.iters,
      max_iters: msg.max_iters,
        residual: msg.residual,
        constraint_violation: msg.constraint_violation,
      time_ms: msg.time_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      iters: msg.iters,
      max_iters: msg.max_iters,
      residual: msg.residual,
      constraint_violation: msg.constraint_violation,
      time_ms: msg.time_ms,
    }
  }
}


// Corresponds to xterra__msg__RGBFrame

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RGBFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axes: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: [u8; 12],

}



impl Default for RGBFrame {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RGBFrame::default())
  }
}

impl rosidl_runtime_rs::Message for RGBFrame {
  type RmwMsg = super::msg::rmw::RGBFrame;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        priority: msg.priority,
        axes: msg.axes,
        buttons: msg.buttons,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      priority: msg.priority,
        axes: msg.axes,
        buttons: msg.buttons,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      priority: msg.priority,
      axes: msg.axes,
      buttons: msg.buttons,
    }
  }
}


// Corresponds to xterra__msg__IndicatorData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IndicatorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub led1: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led3: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buzzer: bool,

}



impl Default for IndicatorData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IndicatorData::default())
  }
}

impl rosidl_runtime_rs::Message for IndicatorData {
  type RmwMsg = super::msg::rmw::IndicatorData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        led1: msg.led1,
        led2: msg.led2,
        led3: msg.led3,
        buzzer: msg.buzzer,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      led1: msg.led1,
      led2: msg.led2,
      led3: msg.led3,
      buzzer: msg.buzzer,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      led1: msg.led1,
      led2: msg.led2,
      led3: msg.led3,
      buzzer: msg.buzzer,
    }
  }
}


// Corresponds to xterra__msg__BaseOrientationWrenchDebug

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BaseOrientationWrenchDebug {

    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_base_tra: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_base_ori: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_legs: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_full: [f32; 3],

}



impl Default for BaseOrientationWrenchDebug {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BaseOrientationWrenchDebug::default())
  }
}

impl rosidl_runtime_rs::Message for BaseOrientationWrenchDebug {
  type RmwMsg = super::msg::rmw::BaseOrientationWrenchDebug;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        base_wrench_base_tra: msg.base_wrench_base_tra,
        base_wrench_base_ori: msg.base_wrench_base_ori,
        base_wrench_legs: msg.base_wrench_legs,
        base_wrench_full: msg.base_wrench_full,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        base_wrench_base_tra: msg.base_wrench_base_tra,
        base_wrench_base_ori: msg.base_wrench_base_ori,
        base_wrench_legs: msg.base_wrench_legs,
        base_wrench_full: msg.base_wrench_full,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      base_wrench_base_tra: msg.base_wrench_base_tra,
      base_wrench_base_ori: msg.base_wrench_base_ori,
      base_wrench_legs: msg.base_wrench_legs,
      base_wrench_full: msg.base_wrench_full,
    }
  }
}


// Corresponds to xterra__msg__FloatScalar

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FloatScalar {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f32,

}



impl Default for FloatScalar {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FloatScalar::default())
  }
}

impl rosidl_runtime_rs::Message for FloatScalar {
  type RmwMsg = super::msg::rmw::FloatScalar;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to xterra__msg__JoyData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoyData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axes: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: [u8; 12],

}



impl Default for JoyData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JoyData::default())
  }
}

impl rosidl_runtime_rs::Message for JoyData {
  type RmwMsg = super::msg::rmw::JoyData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        priority: msg.priority,
        axes: msg.axes,
        buttons: msg.buttons,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      priority: msg.priority,
        axes: msg.axes,
        buttons: msg.buttons,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      priority: msg.priority,
      axes: msg.axes,
      buttons: msg.buttons,
    }
  }
}


// Corresponds to xterra__msg__CameraFrame

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 2764800],


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub channels: u8,

}



impl Default for CameraFrame {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraFrame::default())
  }
}

impl rosidl_runtime_rs::Message for CameraFrame {
  type RmwMsg = super::msg::rmw::CameraFrame;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        width: msg.width,
        height: msg.height,
        channels: msg.channels,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      width: msg.width,
      height: msg.height,
      channels: msg.channels,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      width: msg.width,
      height: msg.height,
      channels: msg.channels,
    }
  }
}


