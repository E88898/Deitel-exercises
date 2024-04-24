#include <iostream>

int
main()
{

    int radius;
    
    std::cout << "Reads in radius ";
    std::cin >> radius;
    
    if (radius <= 0) {
        std::cout << "Error 1. Radius can't be negative or 0. " << std::endl;
        
        return 1;
    }
    
    std::cout << "Diameter is " << 2 * radius << std::endl;
    std::cout << "Circumference is " << 2 * 3.14159 * radius << std::endl;
    std::cout << "Area is " << 3.14159 * radius * radius << std::endl;
    
    return 0;
}
