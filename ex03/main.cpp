#include <iostream>
#include "Point.hpp"

int main()
{
    Point p1(1.0f, 1.0f);
    Point p2(5.0f, 1.0f);
    Point p3(3.0f, 4.0f);

    Point insidePoint(3.0f, 2.0f); 
    Point outsidePoint(6.0f, 2.0f);
    Point onEdgePoint(3.0f, 1.0f); 

    bool result1 = bsp(p1, p2, p3, insidePoint);
    bool result2 = bsp(p1, p2, p3, outsidePoint);
    bool result3 = bsp(p1, p2, p3, onEdgePoint);

    std::cout << "Point (3.0, 2.0) is " << (result1 ? "inside" : "outside") << " the triangle.\n";
    std::cout << "Point (6.0, 2.0) is " << (result2 ? "inside" : "outside") << " the triangle.\n";
    std::cout << "Point (3.0, 1.0) is " << (result3 ? "inside" : "outside") << " the triangle.\n";

    return 0;
}
