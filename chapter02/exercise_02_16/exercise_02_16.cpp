#include <iostream>

int
main()
{
    int number1, number2;
    
    std::cout << "Enter two numbers ";
    std::cin >> number1 >> number2;
    std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
    std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
    
    if (0 == number2) { 
        std::cout << "Error 1: Number can't be divided by 0" << std::endl;
        
        return 1;
    } 
    
    std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
    
    return 0;
}
