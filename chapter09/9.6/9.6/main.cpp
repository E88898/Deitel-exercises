#include "Rational.h"
#include <iostream>

void inputRational(double& numinator, double& denominator);

int main() 
{
	double firstNuminator, firstDenominator, secondNuminator, secondDenominator;

	inputRational(firstNuminator, firstDenominator);
	inputRational(secondNuminator, secondDenominator);

	Rational rational1(firstNuminator, firstDenominator);
	Rational rational2(secondNuminator, secondDenominator);
	
	Rational addRational = rational1.add(rational2);
	addRational.printRational();
	Rational subtractingRational = rational1.subtracting(rational2);
	subtractingRational.printRational();
	Rational multiplyRational = rational1.multiply(rational2);
	multiplyRational.printRational();
	Rational divideRational = rational1.divide(rational2);
	divideRational.printRational();

	return 0;
}

void inputRational(double& numinator, double& denominator)
{
	std::cout << "Input real numbers: ";
	std::cin >> numinator >> denominator;
	if (static_cast<int>(denominator) == 0) {
		std::cerr << "Error: denominator can't be zero" << std::endl;
	}
}