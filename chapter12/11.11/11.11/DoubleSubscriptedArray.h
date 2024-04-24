#ifndef DOUBLE_SUBSCRIPTED_ARRAY_H
#define DOUBLE_SUBSCRIPTED_ARRAY_H
#include <iostream>

class DoubleSubscriptedArray
{
	friend std::istream& operator>>(std::istream& input, DoubleSubscriptedArray& matrix);
	friend std::ostream& operator<<(std::ostream& output, const DoubleSubscriptedArray& matrix);

public:
	DoubleSubscriptedArray();
	DoubleSubscriptedArray(const int row, const int column);
	DoubleSubscriptedArray(const DoubleSubscriptedArray& other);
	DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray& ohter);
	bool operator==(const DoubleSubscriptedArray& other) const;
	bool operator!=(const DoubleSubscriptedArray& other) const;
	int operator()(const int row, const int column) const;
	int& operator()(const int row, const int column);
private:
	int _row;
	int _column;
	int* _matrix;
};

#endif
