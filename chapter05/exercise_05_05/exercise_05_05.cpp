#include <iostream>
#include <unistd.h>

int
main()
{
    int number;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the number of values to be processed: ";
    }
    std::cin >> number;
    
    if (number < 0) {
        std::cout << "Error 1: negative number is invalide" << std::endl;
        return 1;
    }
    
    int sum = 0;
    for (int counter = 1; counter <= number; counter++) {
        int value;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter a value: ";
        }
        std::cin >> value;
        sum += value;
    }
    
    std::cout << "Sum of the " << number << " values is "
              << sum << std::endl;
    
    return 0;
}

