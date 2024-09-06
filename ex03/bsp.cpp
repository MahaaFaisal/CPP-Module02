
#include "Point.hpp"

static Fixed area(const Point &p1, const Point &p2, const Point &p3)
{
    return Fixed(abs(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
                  p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
                  p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed A = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    return (A == A1 + A2 + A3);
}