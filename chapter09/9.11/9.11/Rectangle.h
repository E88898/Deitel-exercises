#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle 
{
public:
	Rectangle();
	Rectangle(double length, double widht);
	void setLength(double length);
	void setWidth(double width);
	double perimeter();
	double area();

private:
	double _length;
	double _width;
};

#endif
