#include "DoubleSubscriptedArray.h"
#include <iostream>

int main()
{
	DoubleSubscriptedArray matrix(3, 2);
	std::cin >> matrix;
	std::cout << matrix;
	DoubleSubscriptedArray matrix1(matrix);
	DoubleSubscriptedArray matrix2(5, 6);
	matrix2 = matrix;
	std::cout << matrix(1, 1) << std::endl;
	std::cout << matrix2;

	return 0;

}