#include <Point.hpp>

Point2::Point2(float x = 0,float y = 0): _x(x), _y(y) {}
Point3::Point3(float x = 0,float y = 0,float z = 0): Point2::Point2(x,y), _z(0){}