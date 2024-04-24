#include <iostream>

int main()
{
	long value1 = 200000, value2;
	long* longPtr = &value1;
	std::cout << *longPtr << std::endl;
	value2 = *longPtr;
	std::cout << value2 << std::endl;

	std::cout << &value1 << std::endl;
	std::cout << longPtr << std::endl;

	return 0;
}