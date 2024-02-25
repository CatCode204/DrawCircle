#ifndef __VECTOR__
#define __VECTOR__
#include <Point.hpp>

class Vector {
public:
    virtual float Magnitude() const = 0;
    virtual Vector operator + (const Vector&) const = 0;
    virtual Vector operator - (const Vector&) const = 0;
    virtual Vector operator * (const float&) const = 0;
    virtual Vector& operator*=(const float&);
    virtual Vector& operator+=(const Vector&);
    virtual Vector& operator-=(const Vector&);
    virtual float DotProduct (const Vector&) const = 0;
};

class Vector2: public Point2,public Vector2 {
public:
    float Magnitude() const;
    Vector2 operator + (const Vector2&) const;
    Vector2 operator - (const Vector2&) const;
    Vector2 operator * (const float&) const;
    float DotProduct(const Vector2&) const;
    Vector2& operator*=(const float&);
    Vector2& operator+=(const Vector2&);
    Vector2& operator-=(const Vector2&);
};

class Vector3 : public Vector, Point3 {
public:
    float Magnitude() const;
    Vector3 operator + (const Vector3&) const;
    Vector3 operator - (const Vector3&) const;
    Vector3 operator * (const Vector3&) const;
    float DotProduct(const Vector3&) const;
    Vector3& operator*=(const float&);
    Vector3& operator+=(const Vector3&);
    Vector3& operator-=(const Vector3&);
};
#endif