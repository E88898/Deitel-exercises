#include <iostream>
#include <unistd.h>

int
main()
{
    int number; 
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the number of integers to be processed: ";
    }
    std::cin >> number;
    
    if (number <= 0) {
        std::cerr << "Error 1: number is invalid." << std::endl;
        return 1;
    }
    
    int smallest = 2147483647;
    for (int counter = 1; counter <= number; ++counter) {
        int value;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter number to compare: ";
        }
        std::cin >> value;
        if (value < smallest) {
            smallest = value;
        }
    }
    
    std::cout << "The smallest: " << smallest << std::endl;
    
    return 0;
}

