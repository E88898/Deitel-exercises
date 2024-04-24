#include <iostream>
#include <unistd.h>

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter number between 1 and 30: ";
    }
    for (int counter = 1; counter <= 5; ++counter) {
        int number;
        std::cin >> number;
        if (number < 1 || number > 30) {
            std::cerr << "Error 1: invalid number." << std::endl;
            return 1;
        }
        for (int numberCounter = 1; numberCounter <= number; ++numberCounter) {
            std::cout << '*';
        }
        std::cout << '\n';
    }     
    return 0;
}

