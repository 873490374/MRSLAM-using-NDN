// Generated by gencpp from file cg_mrslam/SLAM.msg
// DO NOT EDIT!


#ifndef CG_MRSLAM_MESSAGE_SLAM_H
#define CG_MRSLAM_MESSAGE_SLAM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <cg_mrslam/RobotLaser.h>
#include <cg_mrslam/VSE2.h>
#include <cg_mrslam/Edge.h>

namespace cg_mrslam
{
template <class ContainerAllocator>
struct SLAM_
{
  typedef SLAM_<ContainerAllocator> Type;

  SLAM_()
    : header()
    , robotId(0)
    , type(0)
    , laser()
    , vertices()
    , edges()
    , closures()  {
    }
  SLAM_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , robotId(0)
    , type(0)
    , laser(_alloc)
    , vertices(_alloc)
    , edges(_alloc)
    , closures(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _robotId_type;
  _robotId_type robotId;

   typedef int32_t _type_type;
  _type_type type;

   typedef  ::cg_mrslam::RobotLaser_<ContainerAllocator>  _laser_type;
  _laser_type laser;

   typedef std::vector< ::cg_mrslam::VSE2_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cg_mrslam::VSE2_<ContainerAllocator> >::other >  _vertices_type;
  _vertices_type vertices;

   typedef std::vector< ::cg_mrslam::Edge_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cg_mrslam::Edge_<ContainerAllocator> >::other >  _edges_type;
  _edges_type edges;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _closures_type;
  _closures_type closures;




  typedef boost::shared_ptr< ::cg_mrslam::SLAM_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cg_mrslam::SLAM_<ContainerAllocator> const> ConstPtr;

}; // struct SLAM_

typedef ::cg_mrslam::SLAM_<std::allocator<void> > SLAM;

typedef boost::shared_ptr< ::cg_mrslam::SLAM > SLAMPtr;
typedef boost::shared_ptr< ::cg_mrslam::SLAM const> SLAMConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cg_mrslam::SLAM_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cg_mrslam::SLAM_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cg_mrslam

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'cg_mrslam': ['/home/liby3/catkin_ws_lby/src/cg_mrslam/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cg_mrslam::SLAM_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cg_mrslam::SLAM_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cg_mrslam::SLAM_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cg_mrslam::SLAM_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cg_mrslam::SLAM_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cg_mrslam::SLAM_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cg_mrslam::SLAM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "70b623315e98c3f1c102abd4f25f9c4c";
  }

  static const char* value(const ::cg_mrslam::SLAM_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x70b623315e98c3f1ULL;
  static const uint64_t static_value2 = 0xc102abd4f25f9c4cULL;
};

template<class ContainerAllocator>
struct DataType< ::cg_mrslam::SLAM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cg_mrslam/SLAM";
  }

  static const char* value(const ::cg_mrslam::SLAM_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cg_mrslam::SLAM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Common to al types\n\
Header header\n\
int32 robotId\n\
int32 type\n\
\n\
#For Combo Messages\n\
RobotLaser laser\n\
VSE2[] vertices\n\
\n\
#For Condensed Graph Messages\n\
Edge[] edges\n\
int32[] closures\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: cg_mrslam/RobotLaser\n\
int32 nodeId\n\
float64[] readings\n\
float64 minAngle\n\
float64 angleInc\n\
float64 maxRange\n\
float64 accuracy\n\
================================================================================\n\
MSG: cg_mrslam/VSE2\n\
int32 id\n\
float64[3] estimate\n\
================================================================================\n\
MSG: cg_mrslam/Edge\n\
int32 idFrom\n\
int32 idTo\n\
float64[3] estimate\n\
float64[6] information\n\
";
  }

  static const char* value(const ::cg_mrslam::SLAM_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cg_mrslam::SLAM_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.robotId);
      stream.next(m.type);
      stream.next(m.laser);
      stream.next(m.vertices);
      stream.next(m.edges);
      stream.next(m.closures);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SLAM_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cg_mrslam::SLAM_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cg_mrslam::SLAM_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "robotId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.robotId);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "laser: ";
    s << std::endl;
    Printer< ::cg_mrslam::RobotLaser_<ContainerAllocator> >::stream(s, indent + "  ", v.laser);
    s << indent << "vertices[]" << std::endl;
    for (size_t i = 0; i < v.vertices.size(); ++i)
    {
      s << indent << "  vertices[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cg_mrslam::VSE2_<ContainerAllocator> >::stream(s, indent + "    ", v.vertices[i]);
    }
    s << indent << "edges[]" << std::endl;
    for (size_t i = 0; i < v.edges.size(); ++i)
    {
      s << indent << "  edges[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cg_mrslam::Edge_<ContainerAllocator> >::stream(s, indent + "    ", v.edges[i]);
    }
    s << indent << "closures[]" << std::endl;
    for (size_t i = 0; i < v.closures.size(); ++i)
    {
      s << indent << "  closures[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.closures[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CG_MRSLAM_MESSAGE_SLAM_H