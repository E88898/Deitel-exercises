#include "Rectangle.h"
#include <iostream>
#include <cmath>

Vertex::Vertex()
    : _x(0)
    , _y(0)
{
}

Vertex::Vertex(const int x, const int y)
    : _x(x)
    , _y(y)
{
}

void Vertex::setVertex(const int x, const int y)
{
    setX(x);
    setY(y);
}

void Vertex::setX(const int x)
{
    _x = x;
}

void Vertex::setY(const int y)
{
    _y = y;
}

int Vertex::getX() const
{
    return _x;
}

int Vertex::getY() const
{
    return _y;
}

Rectangle::Rectangle()
    : _a(0, 0)
    , _b(0, 0)
    , _c(0, 0)
    , _d(0, 0)
{
}

Rectangle::Rectangle(const Vertex& a, const Vertex& b, const Vertex& c, const Vertex& d)
    : _a(a)
    , _b(b)
    , _c(c)
    , _d(d)
{
}


double Rectangle::length() const
{
    const double ab = Rectangle::distance(_a, _b);
    const double bc = Rectangle::distance(_b, _c);
    return (ab > bc) ? ab : bc;

}

double Rectangle::width() const
{
    const double ab = Rectangle::distance(_a, _b);
    const double bc = Rectangle::distance(_b, _c);
    return (ab < bc) ? ab : bc;
}

double Rectangle::perimeter() const
{
    return 2 * (length() + width());
}

double Rectangle::area() const
{
    return length() * width();
}

bool Rectangle::isSquare() const
{
    return length() == width();
}

void Rectangle::print() const
{
    std::cout << "length - " << length() << std::endl;
    std::cout << "width - " << width() << std::endl;
    std::cout << "perimeter - " << perimeter() << std::endl;
    std::cout << "area - " << area() << std::endl;
    if (isSquare()) {
        std::cout << "Yes, this is square." << std::endl;
    }
    else {
        std::cout << "No, this is not a square." << std::endl;
    }
}

double Rectangle::distance(const Vertex& a, const Vertex& b) 
{
    return std::sqrt(((a.getX() - b.getX()) * (a.getX() - b.getX())) + ((a.getY() - b.getY()) * (a.getY() - b.getY())));
}

