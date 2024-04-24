#include "HugeInteger.h"
#include <iostream>

HugeInteger::HugeInteger()
{
	for (int i = 0; i <= SIZE - 1; ++i) {
		_hugeInteger[i] = 0;
	}
}

void HugeInteger::input(int arr[SIZE])
{
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		_hugeInteger[idx] = arr[idx];
	}
}

void HugeInteger::output()
{
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		std::cout << _hugeInteger[idx] << " ";
	}
}

bool HugeInteger::isZero()
{
	bool result = true;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger[idx] != 0) {
			std::cout << "No" << std::endl;
			return false;
		}
	}
	std::cout << "Yes" << std::endl;
	return result;
}

bool HugeInteger::isEqual(HugeInteger* other)
{
	bool result = true;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger[idx] != other -> _hugeInteger[idx])
			std::cout << "No" << std::endl;
			return false;
	}
	std::cout << "Yes" << std::endl;
	return result;
}

bool HugeInteger::isNotEqual(HugeInteger* other)
{
	bool result = true;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger[idx] == other->_hugeInteger[idx]) {
			std::cout << "No" << std::endl;
			return false;
		}
	}
	std::cout << "Yes" << std::endl;
	return true;
}

bool HugeInteger::isGreatherThan(HugeInteger* other)
{
	bool result = false;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger[idx] > other->_hugeInteger[idx]) {
			std::cout << "Yes" << std::endl;
			return true;
		}
	}
	std::cout << "No" << std::endl;
	return result;
}

bool HugeInteger::isLessThan(HugeInteger* other)
{
	bool result = false;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger[idx] < other->_hugeInteger[idx]) {
			std::cout << "Yes" << std::endl;
			return true;
		}
	}
	std::cout << "No" << std::endl;
	return false;
}

bool HugeInteger::isGreaterThanOrEqual(HugeInteger* other)
{
	bool result = false;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger >= other->_hugeInteger) {
			std::cout << "Yes" << std::endl;
			return true;
		}
	}
	std::cout << "No" << std::endl;
	return false;
}
bool HugeInteger::isLessThanOrEqual(HugeInteger* other)
{
	bool result = false;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		if (_hugeInteger[idx] <= other->_hugeInteger[idx]) {
			std::cout << "Yes" << std::endl;
			return true;
		}
	}
	std::cout << "No" << std::endl;
	return false;
}

HugeInteger HugeInteger::add(HugeInteger* other)
{
	HugeInteger result;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		result._hugeInteger[idx] = _hugeInteger[idx] + other->_hugeInteger[idx];
	}
	return result;
}

HugeInteger HugeInteger::subtract(HugeInteger* other)
{
	HugeInteger result;
	for (int idx = 0; idx <= SIZE - 1; ++idx) {
		result._hugeInteger[idx] = _hugeInteger[idx] - other->_hugeInteger[idx];
	}
	return result;
}

HugeInteger HugeInteger::multiply(HugeInteger* other) 
{
	HugeInteger result;
	for (int idx = 0; idx <= SIZE - 1; ++idx)
	{
		result._hugeInteger[idx] = _hugeInteger[idx] * other -> _hugeInteger[idx];
	}
	return result;
}

HugeInteger HugeInteger::divide(HugeInteger* other)
{
	HugeInteger result;
	for (int idx = 0; idx <= SIZE - 1; ++idx)
	{
		result._hugeInteger[idx] = _hugeInteger[idx] / other -> _hugeInteger[idx];
	}
	return result;
}