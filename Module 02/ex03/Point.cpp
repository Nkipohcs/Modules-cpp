#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &/* other */) {
    // Les membres const ne peuvent pas être modifiés, donc cette méthode est vide
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}

bool bsp(Point const /* a */, Point const /* b */, Point const /* c */, Point const /* point */) {
    // Implémentation de la fonction bsp
    // Cette implémentation est un exemple basique et doit être adaptée en fonction
    // de la logique spécifique requise pour déterminer si un point est dans un triangle.
    // Placeholder - Remplacer par la logique appropriée

    return true; // Placeholder - à remplacer par la logique appropriée
}
