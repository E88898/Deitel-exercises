#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
	Rational();
	Rational(const int numinator, const int denominator);
	Rational add(const Rational& fraction);
	Rational subtracting(const Rational& fraction);
	Rational multiply(const Rational& fraction);
	Rational divide(const Rational& fraction);
	void printRational();

private:
	void reduce();
	int _numinator;
	int _denominator;

};

#endif