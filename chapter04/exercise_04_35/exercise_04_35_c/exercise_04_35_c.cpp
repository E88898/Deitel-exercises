#include <iostream>
#include <unistd.h>

int
main()
{
    int accurancy;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter accurancy of the number of terms to estimate the value of the mathematical constant e: ";
    }
    std::cin >> accurancy;

    if (accurancy <= 0) {
        std::cout << "Error 1: it must be positive integer bigger than null." << std::endl;
        return 1;
    }
    
    double xPower;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the x power: ";
    }
    std::cin >> xPower;

    double temp = xPower, e = 1;   
    int number = 0, factorial = 1;
    while (++number <= accurancy) {
        factorial *= number;
        e += xPower / factorial;
        xPower *= temp; 
    }
    
    std::cout << "\ne^x = " << e << std::endl;
    
    return 0;
}

