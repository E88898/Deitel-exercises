#include "Rational.h"
#include <iostream>

Rational::Rational() 
{
	_numinator = 0;
	_denominator = 1;
}

Rational::Rational(const int numinator, const int denominator)
{
	_numinator = numinator;
	_denominator = denominator;
	reduce();
}

Rational Rational::add(const Rational& fraction)
{
	const int numinator = _numinator * fraction._denominator + fraction._numinator * _denominator;
	const int denominator = _denominator * fraction._denominator;
	const Rational sum(numinator, denominator);
	return sum;
}

Rational Rational::subtracting(const Rational& fraction)
{
	const int numinator = _numinator * fraction._denominator - fraction._numinator * _denominator;
	const int denominator = _denominator * fraction._denominator;
	const Rational dif(numinator, denominator);
	return dif;
}

Rational Rational::multiply(const Rational& fraction)
{
	const int numinator = _numinator * fraction._numinator;
	const int denominator = _denominator * fraction._denominator;
	const Rational res(numinator, denominator);
	return res;
}

Rational Rational::divide(const Rational& fraction)
{
	const int numinator = _numinator * fraction._denominator;
	const int denominator = _denominator * fraction._numinator;
	const Rational quo(numinator, denominator);
	return quo;
}

void Rational::printRational()
{
	if (_numinator == _denominator) {
		std::cout << "1";
		return;
	}
	std::cout << _numinator << " / " << _denominator << std::endl;
}

void Rational::reduce()
{
	
	if (_numinator != 0) {
		int n = std::abs(_numinator);
		int d = std::abs(_denominator);
		while (n != d) {
			if (n > d) {
				n -= d;
			}
			else {
				d -= n;
			}
		}
		_numinator /= n;
		_denominator /= d;
	}
}