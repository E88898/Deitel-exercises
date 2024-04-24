#include <iostream>
#include <unistd.h>

int
main()
{
    while (true) {
        int accountNumber;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "\nEnter account number (-1 to end): ";
        }
        std::cin >> accountNumber;
        if (-1 == accountNumber) {
        
            return 0;
        }
        if (accountNumber <= 0) {
            std::cerr << "Error 1: account number invalid value." << std::endl;
            
            return 1;
        }

        double balance;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter beginning balance: ";
        }
        std::cin >> balance;
        if (balance < 0) {
            std::cerr << "Error 2: balance should be positive." << std::endl;

            return 2;
        }

        double charges;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter total chargres: ";
        }
        std::cin >> charges;
        if (charges < 0) {
            std::cerr << "Error 3: charges should be positive." << std::endl;
            
            return 3;
        }

        double credit;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter total charges: ";
        }
        std::cin >> credit;
        if (credit < 0) {
            std::cerr << "Error 4: credit should be positive." << std::endl;
            
            return 4;
        }
        
        int newBalance = charges + balance - credit;

        if (newBalance < 0) {
            std::cerr << "Error 5: credit bigger than your new balance." << std::endl;
            
            return 5;
        }

        double limit;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter credit limit: ";
        }
        std::cin >> limit;
        if (limit < 0) {
            std::cerr << "Error 6: credit limit should be positive." << std::endl;

            return 6;
        }

        std::cout << "New balance is " << newBalance << std::endl;

        if (newBalance > limit) {
            std::cout << "Account: " << accountNumber << std::endl;
            std::cout << "Credit limit: " << limit << std::endl;
            std::cout << "Balance:      " << charges + balance - credit << std::endl;
            std::cout << "Credit limit Exceeded." << std::endl;
        }
    }

    return 0;
}

