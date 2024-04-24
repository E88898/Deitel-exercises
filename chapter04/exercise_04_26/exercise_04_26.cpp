#include <iostream>
#include <unistd.h>

int
main()
{
    int number;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter a five-digit number: ";
    }
    std::cin >> number;
    
    if (number > 99999) {
        std::cerr << "Error 1: integer is not five-digit" << std::endl;
        return 1;
    }
    
    if (number < 10000) {
        std::cerr << "Error 1: integer is not five digit" << std::endl;
        return 1;
    }
    
    int firstDigit = number / 10000;
    int secondDigit = number % 10000 / 1000;
    int fourthDigit = number % 100 / 10;
    int fifthDigit = number % 10;
    
    if (firstDigit == fifthDigit) {
        if (secondDigit == fourthDigit) {
            std::cout << number << " is a palindrome" << std::endl;
            return 0;
        }
    }
    
    std::cout << number << " is not a palindrome" << std::endl;
    
    
    return 0;
}

