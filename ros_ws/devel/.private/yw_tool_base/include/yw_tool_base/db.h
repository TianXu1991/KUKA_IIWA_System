// Generated by gencpp from file yw_tool_base/db.msg
// DO NOT EDIT!


#ifndef YW_TOOL_BASE_MESSAGE_DB_H
#define YW_TOOL_BASE_MESSAGE_DB_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yw_tool_base
{
template <class ContainerAllocator>
struct db_
{
  typedef db_<ContainerAllocator> Type;

  db_()
    : name()
    , age(0)
    , sex(0)
    , x(0)
    , y(0)
    , z(0)  {
    }
  db_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , age(0)
    , sex(0)
    , x(0)
    , y(0)
    , z(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _age_type;
  _age_type age;

   typedef uint8_t _sex_type;
  _sex_type sex;

   typedef uint8_t _x_type;
  _x_type x;

   typedef uint8_t _y_type;
  _y_type y;

   typedef uint8_t _z_type;
  _z_type z;



  enum {
    unknown = 0u,
    male = 1u,
    female = 2u,
  };


  typedef boost::shared_ptr< ::yw_tool_base::db_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yw_tool_base::db_<ContainerAllocator> const> ConstPtr;

}; // struct db_

typedef ::yw_tool_base::db_<std::allocator<void> > db;

typedef boost::shared_ptr< ::yw_tool_base::db > dbPtr;
typedef boost::shared_ptr< ::yw_tool_base::db const> dbConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yw_tool_base::db_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yw_tool_base::db_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yw_tool_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'yw_tool_base': ['/home/evan/zed_python/cyw_zed_yolo_3d/ros_ws/src/yw_tool_base/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::yw_tool_base::db_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yw_tool_base::db_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yw_tool_base::db_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yw_tool_base::db_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yw_tool_base::db_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yw_tool_base::db_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yw_tool_base::db_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d5de553dacb8637be45c28569c7098a";
  }

  static const char* value(const ::yw_tool_base::db_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d5de553dacb8637ULL;
  static const uint64_t static_value2 = 0xbe45c28569c7098aULL;
};

template<class ContainerAllocator>
struct DataType< ::yw_tool_base::db_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yw_tool_base/db";
  }

  static const char* value(const ::yw_tool_base::db_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yw_tool_base::db_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
uint8  age\n\
uint8  sex\n\
uint8  x\n\
uint8  y\n\
uint8  z\n\
\n\
uint8 unknown = 0\n\
uint8 male    = 1\n\
uint8 female  = 2\n\
";
  }

  static const char* value(const ::yw_tool_base::db_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yw_tool_base::db_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.age);
      stream.next(m.sex);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct db_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yw_tool_base::db_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yw_tool_base::db_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "age: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.age);
    s << indent << "sex: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sex);
    s << indent << "x: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YW_TOOL_BASE_MESSAGE_DB_H
