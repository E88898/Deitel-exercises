#include <iostream>
#include <unistd.h>

int
main()
{
    while (true) {
        float hoursWorked;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "\nEnter hours worked (-1 to end): ";
        }
        std::cin >> hoursWorked;
        if (-1 == static_cast<int>(hoursWorked)) {
        
            return 0;
        }
        
        if (hoursWorked < 0) {
            std::cerr << "Error 1: hours worked should be positive number." << std::endl;
        
            return 1;
        }
        
        double hoursPaid;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter hourly rate of the worker ($00.00): ";
        }
        std::cin >> hoursPaid;
        if (hoursPaid < 0 ) {
            std::cerr << "Error 2: hours paid shouuld be positive number." << std::endl;
            
            return 2;
        }
        
        int salary = hoursWorked * hoursPaid;
        
        if (hoursWorked > 40) {
            salary =  1.5 * salary - 20 * hoursPaid;
        } 
        
        std::cout << "Salary is $" << salary << std::endl;
        
    }
    
    return 0;
}
