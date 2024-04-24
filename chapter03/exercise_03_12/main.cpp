#include "Account.hpp"
#include <iostream>

int
main()
{
    int firstBalance;
    std::cout << "Enter the first account's balance: ";
    std::cin >> firstBalance;
    Account firstAccount(firstBalance);
    
    int firstCredit;
    std::cout << "\nEnter the first account's credit: ";
    std::cin >> firstCredit;
    firstAccount.credit(firstCredit);
    std::cout << "Your balance after credit: " << firstAccount.getBalance() << std::endl;
    
    int firstDebit;
    std::cout << "\nEnter the first account's debit: ";
    std::cin >> firstDebit;
    firstAccount.debit(firstDebit);
    std::cout << "Your balance after debit: " << firstAccount.getBalance() << std::endl;
    
    int secondBalance;
    std::cout << "\n\nEnter the second account's balance: ";
    std::cin >> secondBalance;
    Account secondAccount(secondBalance);
    
    int secondCredit;
    std::cout << "\nEnter the second account's credit: ";
    std::cin >> secondCredit;
    secondAccount.credit(secondCredit);
    std::cout << "Your balance after credit: " << secondAccount.getBalance() << std::endl;
    
    int secondDebit;
    std::cout << "\nEnter the second account's debit: ";
    std::cin >> secondDebit;
    secondAccount.debit(secondDebit);
    std::cout << "Your balance after debit: " << secondAccount.getBalance() << std::endl;
    
    return 0;
}

