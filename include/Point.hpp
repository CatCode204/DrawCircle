#ifndef __POINT__
#define __POINT

struct Point2 {
    float _x,_y;  
    Point2(float x = 0,float y = 0);
};

struct Point3: public Point2 {
    float _z;
    Point3(float x = 0,float y = 0,float z = 0);
};

#endif