// Generated by gencpp from file hrwros_gazebo/Model.msg
// DO NOT EDIT!


#ifndef HRWROS_GAZEBO_MESSAGE_MODEL_H
#define HRWROS_GAZEBO_MESSAGE_MODEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace hrwros_gazebo
{
template <class ContainerAllocator>
struct Model_
{
  typedef Model_<ContainerAllocator> Type;

  Model_()
    : type()
    , pose()  {
    }
  Model_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::hrwros_gazebo::Model_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_gazebo::Model_<ContainerAllocator> const> ConstPtr;

}; // struct Model_

typedef ::hrwros_gazebo::Model_<std::allocator<void> > Model;

typedef boost::shared_ptr< ::hrwros_gazebo::Model > ModelPtr;
typedef boost::shared_ptr< ::hrwros_gazebo::Model const> ModelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_gazebo::Model_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_gazebo::Model_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_gazebo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'hrwros_gazebo': ['/home/abu/hrwros_ws/src/hrwros_gazebo/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::Model_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::Model_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::Model_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::Model_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::Model_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::Model_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_gazebo::Model_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a85d66a9bab1444dfa98ed432ed88734";
  }

  static const char* value(const ::hrwros_gazebo::Model_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa85d66a9bab1444dULL;
  static const uint64_t static_value2 = 0xfa98ed432ed88734ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_gazebo::Model_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_gazebo/Model";
  }

  static const char* value(const ::hrwros_gazebo::Model_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_gazebo::Model_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type                     # model type\n"
"geometry_msgs/Pose pose         # model pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::hrwros_gazebo::Model_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_gazebo::Model_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Model_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_gazebo::Model_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_gazebo::Model_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_GAZEBO_MESSAGE_MODEL_H
