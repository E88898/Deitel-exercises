#include <iostream>
#include <unistd.h>
#include <cmath>

int
main()
{
    int number;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter an odd number for the diamond size (1-19): ";
    }
    std::cin >> number;
    if (number < 1 || number > 19 || 0 == number % 2) {
        std::cerr << "Error 1:  invalid number." << std::endl;
        return 1;
    }
    int halfDiamond = number / 2;
    for (int column = 0; column < number; ++column) {
        for (int row = 0; row < number; ++row) {
            std::cout << (::fabs(column - halfDiamond) + ::fabs(row - halfDiamond) <= halfDiamond ? '*' : ' ');
        }
        std::cout << std::endl;
    }               
    return 0;
}

