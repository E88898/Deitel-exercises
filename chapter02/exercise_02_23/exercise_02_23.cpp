#include <iostream>

int
main()
{
    int number1, number2, number3, number4, number5; 
    
    std::cout << "Enter five integers ";
    std::cin >> number1 >> number2 >> number3 >> number4 >> number5;
    
    if (number1 == number2) {
        if (number2 == number3) {
            if (number3 == number4) {
                if (number4 == number5) {
                    std::cout << "Error 1. Five integers are equal " << std::endl;
                    
                    return 1;
                    
                }
            } 
        }
    } 
    
    int largest = number1, smallest = number1;
        
    if (number1 > largest)
        largest = number1;
        
    if (number2 > largest)
        largest = number2;
        
    if (number3 > largest)
        largest = number3;
        
    if (number4 > largest)
        largest = number4;
        
    if (number5 > largest)
        largest = number5;
        
    if (number1 < smallest)
        smallest = number1;
        
    if (number2 < smallest)
        smallest = number2;
        
    if (number3 < smallest)
        smallest = number3;
        
    if (number4 < smallest)
        smallest = number4;
        
    if (number5 < smallest)
        smallest = number5;    
        
    std::cout << "Largest is " << largest << std::endl;
    std::cout << "Smallest is " << smallest << std::endl;    
     
    return 0;
}
