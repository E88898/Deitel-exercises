#include <iostream>

int
main()
{
    int number;
    
    std::cout << "Enter five-digit number: ";
    std::cin >> number;
    
    if (10000 > number) {
        std::cout << "Error1: The number is not five-digit " << std::endl;
        
        return 1;
    }    
    
    if (99999 < number) {
        std::cout << "Error1: The number is not five-digit " << std::endl;
        
        return 1;
    }             
       
    std::cout << number / 10000 << "   ";
    number = number % 10000;
    std::cout << number / 1000 << "   ";
    number = number % 1000;
    std::cout << number / 100 << "   ";
    number = number % 100;
    std::cout << number / 10 << "   ";
    number = number % 10;
    std::cout << number << std::endl; 
    
    return 0;
}
