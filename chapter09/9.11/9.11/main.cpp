#include "Rectangle.h"
#include <iostream>

void inputSizeOfRectangle(double& length, double& width);

int main()
{
	double length, width;
	inputSizeOfRectangle(length, width);
	Rectangle rectangle(length, width);
	std::cout << "Rectangles perimeter: " << rectangle.perimeter() << std::endl;
	std::cout << "Rectangles area: " << rectangle.area() << std::endl;

	return 0;
}

void inputSizeOfRectangle(double& lenght, double& width)
{
	std::cout << "Enter lengt of Rectangle (0 - 20): ";
	std::cin >> lenght;
	std::cout << "Enter width of Rectangle (0 - 20): ";
	std::cin >> width;
}

