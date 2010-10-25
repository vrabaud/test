/* Auto-generated by genmsg_cpp for file /home/ckilner/ros/stacks/common_msgs/geometry_msgs/msg/PoseWithCovarianceStamped.msg */
#ifndef GEOMETRY_MSGS_MESSAGE_POSEWITHCOVARIANCESTAMPED_H
#define GEOMETRY_MSGS_MESSAGE_POSEWITHCOVARIANCESTAMPED_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "roslib/Header.h"
#include "geometry_msgs/PoseWithCovariance.h"

namespace geometry_msgs
{
template <class ContainerAllocator>
struct PoseWithCovarianceStamped_ : public ros::Message
{
  typedef PoseWithCovarianceStamped_<ContainerAllocator> Type;

  PoseWithCovarianceStamped_()
  : header()
  , pose()
  {
  }

  PoseWithCovarianceStamped_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , pose(_alloc)
  {
  }

  typedef  ::roslib::Header_<ContainerAllocator>  _header_type;
   ::roslib::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
   ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  pose;


private:
  static const char* __s_getDataType_() { return "geometry_msgs/PoseWithCovarianceStamped"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROSCPP_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "953b798c0f514ff060a53a3498ce6246"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROSCPP_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
\n\
================================================================================\n\
MSG: roslib/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROSCPP_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROSCPP_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, pose);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, pose);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(pose);
    return size;
  }

  typedef boost::shared_ptr< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator>  const> ConstPtr;
}; // struct PoseWithCovarianceStamped
typedef  ::geometry_msgs::PoseWithCovarianceStamped_<std::allocator<void> > PoseWithCovarianceStamped;

typedef boost::shared_ptr< ::geometry_msgs::PoseWithCovarianceStamped> PoseWithCovarianceStampedPtr;
typedef boost::shared_ptr< ::geometry_msgs::PoseWithCovarianceStamped const> PoseWithCovarianceStampedConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace geometry_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "953b798c0f514ff060a53a3498ce6246";
  }

  static const char* value(const  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x953b798c0f514ff0ULL;
  static const uint64_t static_value2 = 0x60a53a3498ce6246ULL;
};

template<class ContainerAllocator>
struct DataType< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/PoseWithCovarianceStamped";
  }

  static const char* value(const  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
\n\
================================================================================\n\
MSG: roslib/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.pose);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PoseWithCovarianceStamped_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::roslib::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};


} // namespace message_operations
} // namespace ros

#endif // GEOMETRY_MSGS_MESSAGE_POSEWITHCOVARIANCESTAMPED_H

