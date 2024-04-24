#include "DoubleSubscriptedArray.h"
#include <iostream>

DoubleSubscriptedArray::DoubleSubscriptedArray()
	: _row(0)
	, _column(0)
{
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const int row, const int column)
	:_row(row)
	,_column(column)
	,_matrix(new int[_row * _column])
{
	for (int idx = 0; idx < _row * _column; ++idx) {
		_matrix[idx] = 0;
	}
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray& other)
	: _row(other._row)
	, _column(other._column)
	, _matrix(new int[_row * _column])
{
	for (int idx = 0; idx < _row * _column; ++idx) {
		_matrix[idx] = other._matrix[idx];
	}
	std::cout << "called copy ctor" << std::endl;
}

DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& other)
{
	if (this == &other) {
		return *this;
	}

	delete _matrix;
	_matrix = new int[_row * _column];
	_row = other._row;
	_column = other._column;
	for (int idx = 0; idx < _row * _column; ++idx) {
		_matrix[idx] = other._matrix[idx];
	}
	std::cout << "Called operator=" << std::endl;
	return *this;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray& other) const
{
	if (_row != other._row || _column != other._column) {
		return false;
	}
	for (int idx = 0; idx < _row * _column; ++idx) {
		if (_matrix[idx] != other._matrix[idx]) {
			return false;
		}
	}
	return true;

}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray& other) const
{
	return !(*this == other);
}

int DoubleSubscriptedArray::operator()(const int row, const int column) const
{
	if (row >= _row || row < 0 || column >= _column || column < 0) {
		std::cerr << "Error: invalid number." << std::endl;
	}
	return _matrix[row * _column + column];
}

int& DoubleSubscriptedArray::operator()(const int row, const int column)
{
	if (row >= _row || row < 0 || column >= _column || column < 0) {
		std::cerr << "Error: invalid number." << std::endl;
	}
	return _matrix[row * _column + column];
}

std::istream& operator>>(std::istream& input, DoubleSubscriptedArray& matrix)
{
	for (int idx = 0; idx < matrix._row * matrix._column; ++idx) {
		input >> matrix._matrix[idx];
	}
	return input;
	
}

std::ostream& operator<<(std::ostream& output, const DoubleSubscriptedArray& matrix)
{
	for (int i = 0; i < matrix._row; ++i) {
		for (int j = 0; j < matrix._column; ++j) {
			output << matrix(i, j) << ' ';
		}
		output << '\n';
	}
	return output;

}