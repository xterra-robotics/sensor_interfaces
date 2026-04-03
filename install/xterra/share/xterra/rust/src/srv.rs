#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to xterra__srv__CaptureImage_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureImage_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub camera_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_type: std::string::String,

}



impl Default for CaptureImage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CaptureImage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureImage_Request {
  type RmwMsg = super::srv::rmw::CaptureImage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        camera_name: msg.camera_name.as_str().into(),
        image_type: msg.image_type.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        camera_name: msg.camera_name.as_str().into(),
        image_type: msg.image_type.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      camera_name: msg.camera_name.to_string(),
      image_type: msg.image_type.to_string(),
    }
  }
}


// Corresponds to xterra__srv__CaptureImage_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureImage_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reply: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub saved_path: std::string::String,

}



impl Default for CaptureImage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CaptureImage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureImage_Response {
  type RmwMsg = super::srv::rmw::CaptureImage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reply: msg.reply,
        message: msg.message.as_str().into(),
        saved_path: msg.saved_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reply: msg.reply,
        message: msg.message.as_str().into(),
        saved_path: msg.saved_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reply: msg.reply,
      message: msg.message.to_string(),
      saved_path: msg.saved_path.to_string(),
    }
  }
}






#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__xterra__srv__CaptureImage() -> *const std::ffi::c_void;
}

// Corresponds to xterra__srv__CaptureImage
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureImage;

impl rosidl_runtime_rs::Service for CaptureImage {
    type Request = CaptureImage_Request;
    type Response = CaptureImage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__xterra__srv__CaptureImage() }
    }
}


