#include "Rectangle.h"
#include <iostream>

void inputRectangle(int& x1, int& y1, int& x2, int& y2, int& x3, int& y3, int& x4, int& y4);


int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	inputRectangle(x1, y1, x2, y2, x3, y3, x4, y4);
	const Vertex a(x1, y1), b(x2, y2), c(x3, y3), d(x4, y4);

	if (Rectangle::distance(a, c) != Rectangle::distance(b, d)) {
		std::cerr << "Error 1: Invalid rectangle:" << std::endl;
		return 1;
	}
	if (x1 < 0 || x1 > 20 || y1 < 0 || y1 > 20 || x2 < 0 || x2 > 20 || y2 < 0 || y2 > 20 || x3 < 0 || x3 > 20 || y3 < 0 || y3 > 20 || x4 < 0 || x4 > 20 || y4 < 0 || y4 > 20) {
		std::cerr << "Error 2: Rectangle parameters do not accept values in the range (0, 20)):" << std::endl;
		return 2;
	}
	const Rectangle rectangle2(a, b, c, d);
	rectangle2.print();


	return 0;
}

void inputRectangle(int& x1, int& y1, int& x2, int& y2, int& x3, int& y3, int& x4, int& y4)
{
	std::cout << "Input rectangle cordinates:";
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

}