
#include "Point.hpp"

Point::Point () : _x(0), _y(0) {}

Point::Point (const Fixed &x, const Fixed &y) : _x(x), _y(y) { }

Point::Point (const Point &rhs): _x(rhs._x), _y(rhs._y) { }

Point  &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Point::~Point() {}

Fixed const &Point::getX() const
{
	return (this->_x);
}

Fixed const &Point::getY() const
{
	return (this->_y);
}

