
#ifndef POINT_HPP
# define POINT_HPP

#include "iostream"
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const  _x;
		Fixed const _y;
	
	public:
		Point ();
		Point(const Fixed &x, const Fixed &y);
		Point (const Point &rhs);
		Point   &operator=(const Point &rhs);
		~Point();

		Fixed const &getX() const;
		Fixed const &getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif