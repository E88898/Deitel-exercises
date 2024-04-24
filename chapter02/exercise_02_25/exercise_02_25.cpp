#include <iostream>

int
main()
{
    int number1, number2;
    
    std::cout << "Enter two integers ";
    std::cin >> number1 >> number2;
    
    if (0 == number2) {
        std::cout << "Error 1: Number can't be divided by 0" << std::endl;
        
        return 1;
    }
    
    if (0 == number1 % number2) {
        std::cout << number1 << " is a multiple of " << number2 << std::endl;
       
        return 0;    
    }
    
    std::cout << number1 << " is not a multiple of " << number2 << std::endl;
    
    
    return 0;
}

