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
        std::cerr << "Error 1: it must be positive integer bigger than null." << std::endl;
        return 1;
    }
    
    double e = 1;
    int number = 0, factorial = 1;
    while (++number <= accurancy) {
        factorial *= number;
        e += 1.0 / factorial;
    }
    
    std::cout << "e is " << e << std::endl;
    
    return 0;
}
