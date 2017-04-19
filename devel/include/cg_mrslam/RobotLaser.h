// Generated by gencpp from file cg_mrslam/RobotLaser.msg
// DO NOT EDIT!


#ifndef CG_MRSLAM_MESSAGE_ROBOTLASER_H
#define CG_MRSLAM_MESSAGE_ROBOTLASER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cg_mrslam
{
template <class ContainerAllocator>
struct RobotLaser_
{
  typedef RobotLaser_<ContainerAllocator> Type;

  RobotLaser_()
    : nodeId(0)
    , readings()
    , minAngle(0.0)
    , angleInc(0.0)
    , maxRange(0.0)
    , accuracy(0.0)  {
    }
  RobotLaser_(const ContainerAllocator& _alloc)
    : nodeId(0)
    , readings(_alloc)
    , minAngle(0.0)
    , angleInc(0.0)
    , maxRange(0.0)
    , accuracy(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _nodeId_type;
  _nodeId_type nodeId;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _readings_type;
  _readings_type readings;

   typedef double _minAngle_type;
  _minAngle_type minAngle;

   typedef double _angleInc_type;
  _angleInc_type angleInc;

   typedef double _maxRange_type;
  _maxRange_type maxRange;

   typedef double _accuracy_type;
  _accuracy_type accuracy;




  typedef boost::shared_ptr< ::cg_mrslam::RobotLaser_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cg_mrslam::RobotLaser_<ContainerAllocator> const> ConstPtr;

}; // struct RobotLaser_

typedef ::cg_mrslam::RobotLaser_<std::allocator<void> > RobotLaser;

typedef boost::shared_ptr< ::cg_mrslam::RobotLaser > RobotLaserPtr;
typedef boost::shared_ptr< ::cg_mrslam::RobotLaser const> RobotLaserConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cg_mrslam::RobotLaser_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cg_mrslam::RobotLaser_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cg_mrslam

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'cg_mrslam': ['/home/liby3/catkin_ws_lby/src/cg_mrslam/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cg_mrslam::RobotLaser_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cg_mrslam::RobotLaser_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cg_mrslam::RobotLaser_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8902142cac87a16bb07fb5598e39ab0";
  }

  static const char* value(const ::cg_mrslam::RobotLaser_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8902142cac87a16ULL;
  static const uint64_t static_value2 = 0xbb07fb5598e39ab0ULL;
};

template<class ContainerAllocator>
struct DataType< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cg_mrslam/RobotLaser";
  }

  static const char* value(const ::cg_mrslam::RobotLaser_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 nodeId\n\
float64[] readings\n\
float64 minAngle\n\
float64 angleInc\n\
float64 maxRange\n\
float64 accuracy\n\
";
  }

  static const char* value(const ::cg_mrslam::RobotLaser_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodeId);
      stream.next(m.readings);
      stream.next(m.minAngle);
      stream.next(m.angleInc);
      stream.next(m.maxRange);
      stream.next(m.accuracy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotLaser_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cg_mrslam::RobotLaser_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cg_mrslam::RobotLaser_<ContainerAllocator>& v)
  {
    s << indent << "nodeId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nodeId);
    s << indent << "readings[]" << std::endl;
    for (size_t i = 0; i < v.readings.size(); ++i)
    {
      s << indent << "  readings[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.readings[i]);
    }
    s << indent << "minAngle: ";
    Printer<double>::stream(s, indent + "  ", v.minAngle);
    s << indent << "angleInc: ";
    Printer<double>::stream(s, indent + "  ", v.angleInc);
    s << indent << "maxRange: ";
    Printer<double>::stream(s, indent + "  ", v.maxRange);
    s << indent << "accuracy: ";
    Printer<double>::stream(s, indent + "  ", v.accuracy);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CG_MRSLAM_MESSAGE_ROBOTLASER_H