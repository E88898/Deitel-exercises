#include <iostream>

int
main()
{
    int number;
    
    std::cout << "Enter number "; 
    std::cin  >> number;
    
    if (0 == number % 2) {
        std::cout << "The number " << number << " is even" << std::endl;
        
        return 0;
    }
     
    std::cout << "The number " << number << " is odd" << std::endl;         
    
    return 0;
}
