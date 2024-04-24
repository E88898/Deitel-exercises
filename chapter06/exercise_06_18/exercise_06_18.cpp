#include <iostream>
#include <unistd.h>
#include <cassert>

int integerPower(const int base, int exponnent);

int
main()
{
    std::cout << "Enter base: ";
    int base;
    std::cin >> base;
    std::cout << "Enter positive exponent: ";
    int exponent;
    std::cin >> exponent;
    if (exponent < 1) {
        std::cerr << "Error 1: invalid value." << std::endl;
        return 1;
    }
    std::cout << base << " to the power " << exponent << " is: "
              << integerPower(base, exponent) << std::endl;
    return 0;
}

int
integerPower(const int base, int exponent) 
{
    assert(exponent > 0);
    int temp = base;
    int result = 1;
    while (exponent != 0) {
        if (1 == exponent % 2) {
            result *= temp;
        }
        exponent /= 2;
        temp *= temp;
    }
    return result;
}
