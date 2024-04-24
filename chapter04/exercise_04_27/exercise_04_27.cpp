#include <iostream>
#include <unistd.h>

int
main()
{
    int number; 
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter binary number: ";
    }
    std::cin >> number;
    
    if (number < 0) {
        std::cerr << "Error 1: invalid number." << std::endl;
        return 1;
    }
    
    int decimal = 0, power = 1;
    while (number > 0) {
        int lastDigit = number % 10;
        if (lastDigit != 1) {
            if (lastDigit != 0) {
                std::cerr << "Error 2: is not binary number." << std::endl;
                return 2;
            }
        }
        
        decimal += lastDigit * power;
        power *= 2;
        number /= 10;
    }
   
    std::cout << "The decimal equivalent: " << decimal << std::endl;

    return 0;
}

