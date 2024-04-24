#include "IntegerSet.h"
#include <iostream>

int main()
{
	IntegerSet a;
	std::cout << "Enter set A: " << std::endl;
	a.inputSet();
	IntegerSet b;
	std::cout << "Enter set B: " << std::endl;
	b.inputSet();
	IntegerSet c = a.unionOfIntegerSets(b);
	std::cout << "\nUnion of A and B: " << std::endl;
	c.setPrint();
	IntegerSet d = a.intersectionOfIntegerSets(b);
	std::cout << "\nIntersection of A and B: " << std::endl;
	d.setPrint();

	if (a.isEqualTo(b)) {
		std::cout << "\nSet A is equal to set B" << std::endl;
	} else {
		std::cout << "\nSet A is not equal to set B" << std::endl;
	}

	int insert;
	std::cout << "\nEnter number to insert into set A: " << std::endl;
	std::cin >> insert;

	a.insertElement(insert);
	std::cout << "\nSet A is now: " << std::endl;
	a.setPrint();
	
	int del;
	std::cout << "\nEnter number to delete into Set A: " << std::endl;
	std::cin >> del;

	a.deleteElement(del);
	std::cout << "\nSet A is now: " << std::endl;
	a.setPrint();

}