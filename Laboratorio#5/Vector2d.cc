#include "Vector2d.hh"
#include <sstream>

Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}

const std::string Vector2d::to_string() const
{
	std::stringstream s;
	std::string i;
	s<<"{"<<this->x<<","<<this->y<<"}";
	s>>i;
	return i;
}
Vector2d Vector2d::operator+(const Vector2d& otro) const
{
    Vector2d s(this->x+otro.x, this->y+otro.y);
    return s;
}
float Vector2d::getX()
{
	return this->x;
}
float Vector2d::getY()
{
	return this->y;
}