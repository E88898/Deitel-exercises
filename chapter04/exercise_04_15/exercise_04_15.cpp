#include <iostream>
#include <unistd.h>

int
main()
{
    while (true) {
        double sales;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "\nEnter sales in dollars (-1 to end): ";
        }
        std::cin >> sales;
        if (-1 == static_cast<int>(sales)) {
         
            return 0;
        }
        
        if (sales < 0) {
            std::cerr << "Error 1: sales should be positive number" << std::endl;
            
            return 1;
        }
        
        std::cout << "Salary is: $" << 200 +(0.09 * sales) << std::endl;
    }
    
    return 0;
}

