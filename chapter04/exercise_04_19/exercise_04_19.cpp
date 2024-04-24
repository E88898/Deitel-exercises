#include <iostream>
#include <unistd.h>

int
main()
{
    int counter = 0, largest = -2147483648, secondLargest = -2147483648;
    
    while (++counter <= 10) {
        int number;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter the next number: ";
        }
        std::cin >> number;
        
        if (number > largest) {
            secondLargest = largest;
            largest = number;
        } else if (number > secondLargest) {
            secondLargest = number;
            }
    
    }
    
    std::cout << "Largest is " << largest << std::endl;
    std::cout << "Second largest " << secondLargest << std::endl;

    return 0;
}

