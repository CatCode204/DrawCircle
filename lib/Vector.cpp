#include <Vector.hpp>
#include <cmath>

float Vector2::Magnitude() const {
    return sqrt(this->_x * this->_x + this->_y * this->_y);
}