; Auto-generated. Do not edit!


(cl:in-package hrwros_msgs-msg)


;//! \htmlinclude boxHeightInformation.msg.html

(cl:defclass <boxHeightInformation> (roslisp-msg-protocol:ros-message)
  ((box_height
    :reader box_height
    :initarg :box_height
    :type cl:float
    :initform 0.0))
)

(cl:defclass boxHeightInformation (<boxHeightInformation>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <boxHeightInformation>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'boxHeightInformation)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hrwros_msgs-msg:<boxHeightInformation> is deprecated: use hrwros_msgs-msg:boxHeightInformation instead.")))

(cl:ensure-generic-function 'box_height-val :lambda-list '(m))
(cl:defmethod box_height-val ((m <boxHeightInformation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrwros_msgs-msg:box_height-val is deprecated.  Use hrwros_msgs-msg:box_height instead.")
  (box_height m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <boxHeightInformation>) ostream)
  "Serializes a message object of type '<boxHeightInformation>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'box_height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <boxHeightInformation>) istream)
  "Deserializes a message object of type '<boxHeightInformation>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'box_height) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<boxHeightInformation>)))
  "Returns string type for a message object of type '<boxHeightInformation>"
  "hrwros_msgs/boxHeightInformation")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'boxHeightInformation)))
  "Returns string type for a message object of type 'boxHeightInformation"
  "hrwros_msgs/boxHeightInformation")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<boxHeightInformation>)))
  "Returns md5sum for a message object of type '<boxHeightInformation>"
  "2b427ae616da4facf1fbfe9829db6b50")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'boxHeightInformation)))
  "Returns md5sum for a message object of type 'boxHeightInformation"
  "2b427ae616da4facf1fbfe9829db6b50")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<boxHeightInformation>)))
  "Returns full string definition for message of type '<boxHeightInformation>"
  (cl:format cl:nil "float32 box_height~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'boxHeightInformation)))
  "Returns full string definition for message of type 'boxHeightInformation"
  (cl:format cl:nil "float32 box_height~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <boxHeightInformation>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <boxHeightInformation>))
  "Converts a ROS message object to a list"
  (cl:list 'boxHeightInformation
    (cl:cons ':box_height (box_height msg))
))
