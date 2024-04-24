#include "Account.hpp"
#include <iostream>

Account::Account(int balance)
{
    if (balance < 0) {
        balance_ = 0;
        std::cerr << "Warning 1. The initial balance is invalid. Resetting to 0..." << std::endl;
        std::cout << "Your balance: 0" << std::endl;
        return;
    }    
    balance_ = balance;  
}

void
Account::credit(int addedMoney)
{
    if (addedMoney < 0) {
        std::cerr << "Warning 2: the credit is negative. Ignoring..." << std::endl;
        return;
    }
    balance_ = balance_ + addedMoney;      
}

void
Account::debit(int withdrawedMoney)
{
    if (withdrawedMoney < 0) {
        std::cerr << "Warning 3: the debit is negative. Reseting to 0..." << std::endl;
        return;
    }
    
    if (balance_ < withdrawedMoney) {
        std::cerr << "Warning 3. Debit amount exceeded account balance." << std::endl;
        return;
    } 
    balance_ = balance_ - withdrawedMoney;        
}

int
Account::getBalance()
{
    return balance_;
}

