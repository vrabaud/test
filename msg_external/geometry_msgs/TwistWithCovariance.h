/* Auto-generated by genmsg_cpp for file /home/ckilner/ros/stacks/common_msgs/geometry_msgs/msg/TwistWithCovariance.msg */
#ifndef GEOMETRY_MSGS_MESSAGE_TWISTWITHCOVARIANCE_H
#define GEOMETRY_MSGS_MESSAGE_TWISTWITHCOVARIANCE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "geometry_msgs/Twist.h"

namespace geometry_msgs
{
template <class ContainerAllocator>
struct TwistWithCovariance_ : public ros::Message
{
  typedef TwistWithCovariance_<ContainerAllocator> Type;

  TwistWithCovariance_()
  : twist()
  , covariance()
  {
    covariance.assign(0.0);
  }

  TwistWithCovariance_(const ContainerAllocator& _alloc)
  : twist(_alloc)
  , covariance()
  {
    covariance.assign(0.0);
  }

  typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
   ::geometry_msgs::Twist_<ContainerAllocator>  twist;

  typedef boost::array<double, 36>  _covariance_type;
  boost::array<double, 36>  covariance;


  ROSCPP_DEPRECATED uint32_t get_covariance_size() const { return (uint32_t)covariance.size(); }
private:
  static const char* __s_getDataType_() { return "geometry_msgs/TwistWithCovariance"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROSCPP_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "1fe8a28e6890a4cc3ae4c3ca5c7d82e6"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROSCPP_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# This expresses velocity in free space with uncertianty.\n\
\n\
Twist twist\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into it's linear and angular parts. \n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROSCPP_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROSCPP_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, twist);
    ros::serialization::serialize(stream, covariance);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, twist);
    ros::serialization::deserialize(stream, covariance);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(twist);
    size += ros::serialization::serializationLength(covariance);
    return size;
  }

  typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator>  const> ConstPtr;
}; // struct TwistWithCovariance
typedef  ::geometry_msgs::TwistWithCovariance_<std::allocator<void> > TwistWithCovariance;

typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovariance> TwistWithCovariancePtr;
typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovariance const> TwistWithCovarianceConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace geometry_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1fe8a28e6890a4cc3ae4c3ca5c7d82e6";
  }

  static const char* value(const  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1fe8a28e6890a4ccULL;
  static const uint64_t static_value2 = 0x3ae4c3ca5c7d82e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/TwistWithCovariance";
  }

  static const char* value(const  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# This expresses velocity in free space with uncertianty.\n\
\n\
Twist twist\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into it's linear and angular parts. \n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.twist);
    stream.next(m.covariance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TwistWithCovariance_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> & v) 
  {
    s << indent << "twist: ";
s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // GEOMETRY_MSGS_MESSAGE_TWISTWITHCOVARIANCE_H

