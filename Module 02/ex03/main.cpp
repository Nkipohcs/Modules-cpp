#include "Point.hpp"
#include <iostream>

int main() {
    Point a(0.0f, 0.0f);
    Point b(1.0f, 0.0f);
    Point c(0.0f, 1.0f);
    Point point(0.3f, 0.3f);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is outside the triangle" << std::endl;

    return 0;
}
