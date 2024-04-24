#include "IntegerSet.h"
#include <iostream>

IntegerSet::IntegerSet()
{
	 emptySet();

}


bool IntegerSet::validEntry(const int number) const
{
	return number >= 0 && number <= 100; 
}

void IntegerSet::emptySet()
{
	for (int idx = 0; idx < MAX_SIZE; ++idx) {
		_set[idx] = 0;
	}
}

void IntegerSet::insertElement(const int number)
{
	if (validEntry(number)) {
		_set[number] = 1;
	} else {
		std::cerr << "Invalid insert. " << std::endl;
	}
}

void IntegerSet::deleteElement(const int number)
{
	if (validEntry(number) && _set[number]) {
		_set[number] = 0;
	} else {
		std::cerr << "Invalid delete. " << std::endl;
	}
}

void IntegerSet::inputSet()
{
	int number;
	do {
		std::cout << "Enter an element (-1 to end): ";
		std::cin >> number;
		if (validEntry(number)) {
			_set[number] = 1;
		} else if (number != -1) {
			std::cerr << "Invalid element. " << std::endl;
		}
	} while (number != -1);
}

IntegerSet IntegerSet::unionOfIntegerSets(const IntegerSet& other)
{
	IntegerSet temp;
	for (int idx = 0; idx < MAX_SIZE; ++idx) {
		if (_set[idx] == 1 || other._set[idx] == 1) {
			temp._set[idx] = 1;
		}
	}
	return temp;
}

IntegerSet IntegerSet::intersectionOfIntegerSets(const IntegerSet& other)
{
	IntegerSet temp;
	for (int idx = 0; idx < MAX_SIZE; ++idx) {
		if (_set[idx] == 1 && other._set[idx] == 1) {
			temp._set[idx] = 1;
		}
	}
	return temp;
}

void IntegerSet::setPrint() const
{
	for (int idx = 0; idx < MAX_SIZE; ++idx) {
		if (_set[idx]) {
			std::cout << idx << " ";
		}
	}
}

bool IntegerSet::isEqualTo(const IntegerSet& other) const
{
	for (int idx = 0; idx < MAX_SIZE; ++idx) {
		if (_set[idx] != other._set[idx]) {
			return false;
		}
	}
	return true;
}