#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>

int main()
{
	SavingsAccount saver1(2000.0), saver2(3000.0);

	SavingsAccount::modifyInterestRate(.03);

	std::cout << "\nOutput monthly balances for one year at .03"
		<< "\nBalances: Saver 1 ";
	saver1.printBalance();
	std::cout << "\tSaver 2 ";
	saver2.printBalance();
	for (int month = 1; month <= 12; ++month) {
		saver1.calculateMonthlyInterest();
		saver2.calculateMonthlyInterest();
		std::cout << "\nMonth" << std::setw(3) << month << ": Saver 1 ";
		saver1.printBalance();
		std::cout << "\tSaver 2 ";
		saver2.printBalance();
	}

	SavingsAccount::modifyInterestRate(.04);
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	std::cout << "\nAfter setting interest rate to .04"
		<< "\nBalances: Saver 1 ";
	saver1.printBalance();
	std::cout << "\tSaver 2 ";
	saver2.printBalance();
	std::cout << std::endl;

	return 0;
}
