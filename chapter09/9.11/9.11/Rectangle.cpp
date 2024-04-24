#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
	_length = 1.0;
	_width = 1.0;
}

Rectangle::Rectangle(double length, double width)
{
	setLength(length);
	setWidth(width);
}

void Rectangle::setLength(double length)
{
	if (length < 0.0 || length > 20.0) {
		std::cerr << "Error: invalid value of length, was set to 1." << std::endl;
		_length = 1.0;
		return;
	}
	_length = length;
}

void Rectangle::setWidth(double width)
{
	if (width < 0.0 || width > 20.0) {
		std::cerr << "Error: invalid value of width, was set to 1." << std::endl;
		_width = 1.0;
		return;
	}
	_width = width;
}

double Rectangle::perimeter()
{
	return 2 * (_length + _width);
}

double Rectangle::area()
{
	return _length * _width;
}