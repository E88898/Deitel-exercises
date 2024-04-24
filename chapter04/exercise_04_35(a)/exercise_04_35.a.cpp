#include <iostream>
#include <unistd.h>
int
main()
{
    int number;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter positive integer: ";
    }
    std::cin >> number;

    if (number < 0) {
        std::cerr << "Error 1: it can't be negative number." << std::endl;
        return 1;
    }
        
    int factorial = 1;
    if (0 == number) {
        std::cout << "Factorial is: " << factorial << std::endl;
        return 0;
    }
    
    while (number > 0) {
        factorial *= number;
        number--;
    }

    std::cout << "Factorial is: " << factorial << std::endl;

    return 0;
}

