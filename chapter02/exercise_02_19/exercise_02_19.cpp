#include <iostream>

int
main()
{
    int number1, number2, number3;
    
    std::cout << "Input three different integers: ";
    std::cin >> number1 >> number2 >> number3;
    
    if (number1 == number2) {
        std::cout << "Error 1. Input three different integers" << std::endl;
        return 1;
        
    }
    
    
    if(number1 == number3) {
        std::cout << "Error 1. Input three different integers" << std::endl;
        return 1;
     
    }
    
    if (number3 == number2) {
        std::cout << "Error 1. Input three different integers" << std::endl;
        return 1;
    
    }
    
    
    std::cout << "Sum is " << number1 + number2 + number3 << std::endl;
    std::cout << "Averange is " << (number1 + number2 + number3) / 3 << std::endl;
    std::cout << "Product is " << number1 * number2 * number3 << std::endl; 
    
    int max = number1, min = number1;
            
    if (number2 > max)
        max = number2;
        
    if (number3 > max)
        max = number3;
        
    if (number2 < min)
        min = number2;
       
    if (number3 < min)
        min = number3;
        
    std::cout << "Smallest is " << min << std::endl;
    std::cout << "Largest is " << max << std::endl;                
    
    return 0;
}
