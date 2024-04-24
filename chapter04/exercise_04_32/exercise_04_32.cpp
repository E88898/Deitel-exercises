#include <iostream>
#include <unistd.h>

int
main()
{
    double aSize, bSize, cSize;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter three sizes of triangle: ";
    }
    std::cin >> aSize >> bSize >> cSize;
    
    if (aSize <= 0) {
        std::cerr << "Error 1. Size of triangle cant be 0 or negative." << std::endl;
        return 1;
    }

    if (bSize <= 0) {
        std::cerr << "Error 1. Size of triangle cant be 0 or negative." << std::endl;
        return 1;
    }

    if (cSize <= 0) {
        std::cerr << "Error 1. Size of triangle cant be 0 or negative." << std::endl;
        return 1;
    }

    if (aSize < bSize + cSize) {
        if (bSize < aSize + cSize) {
            if (cSize < aSize + bSize) {
                std::cout << "They can represent the sides of a triangle." << std::endl;
                return 0;
            }
        }
    }

    std::cout << "They can't represent the sides of a triangle." << std::endl;

    return 0;
}

