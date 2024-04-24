#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>

double SavingsAccount::annualInterestRate = 0.03;

void SavingsAccount::modifyInterestRate(const double rate)
{
    annualInterestRate = (rate >= 0.0 && rate <= 1.0) ? rate : 0.03;
}

SavingsAccount::SavingsAccount()
    : _savingsBalance(0)
{
}

SavingsAccount::SavingsAccount(const double balance)
    : _savingsBalance(balance >= 0 ? balance : 0)
{
}

void SavingsAccount::calculateMonthlyInterest()
{
    _savingsBalance += _savingsBalance * (annualInterestRate / 12);
}

void SavingsAccount::printBalance() const
{
    std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint)
        << '$' << std::setprecision(2) << _savingsBalance
        << std::resetiosflags(std::ios::fixed | std::ios::showpoint);
}