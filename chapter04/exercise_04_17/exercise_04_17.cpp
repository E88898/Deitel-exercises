#include <iostream>
#include <unistd.h>

int
main()
{
    int counter = 0, largest = -2147483648;
    
    while (counter <= 10) {
        int number;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter number : ";
        }
        std::cin >> number;
        
        if (number > largest) {
            largest = number;
        }
        ++counter;
    }
    std::cout << "Largest is " << largest << std::endl;
    
    return 0;
}

