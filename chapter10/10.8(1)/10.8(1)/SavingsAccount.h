#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount
{
public:
	SavingsAccount();
	SavingsAccount(const double balance);
	static void modifyInterestRate(const double rate);
	static double annualInterestRate;
	void calculateMonthlyInterest();
	void printBalance() const;

private:
	double _savingsBalance;


};

#endif
