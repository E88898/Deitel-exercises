#ifndef HUGE_INTEGER_H
#define HUGE_INTEGER_H

const int SIZE = 40;

class HugeInteger
{
public:
	HugeInteger();
	void input(int[SIZE]);
	void output();
	bool isZero();
	bool isEqual(HugeInteger* other);
	bool isNotEqual(HugeInteger* other);
	bool isGreatherThan(HugeInteger* other);
	bool isLessThan(HugeInteger* other);
	bool isGreaterThanOrEqual(HugeInteger* other);
	bool isLessThanOrEqual(HugeInteger* other);
	HugeInteger add(HugeInteger* other);
	HugeInteger subtract(HugeInteger* other);
	HugeInteger multiply(HugeInteger* other);
	HugeInteger divide(HugeInteger* other);
private:
	int _hugeInteger[SIZE];
};

#endif
