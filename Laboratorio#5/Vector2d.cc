#include "Vector2d.hh"
#include <sstream>
Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}

std::string Vector2d::to_string()
{
	std::stringstream s;
	std::string i;
	s<<"{"<<this->x<<","<<this->y<<"}";
	s>>i;
	return i;
}

float Vector2d::getX()
{
	return this->x;
}
float Vector2d::getY()
{
	return this->Y;
}