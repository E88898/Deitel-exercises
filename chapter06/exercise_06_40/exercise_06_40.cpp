#include <iostream>
#include <unistd.h>
#include <cassert>

int integerPower(const int base, const int exponent);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter base: ";
    }
    int base;
    std::cin >> base;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter positive exponent: ";
    }
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
integerPower(const int base, const int exponent)
{
    assert(exponent > 0);
    if (1 == exponent) {
        return base;
    }
    if (1 == exponent % 2) {
        return base * integerPower(base, exponent - 1);
    }
    const int result = integerPower(base, exponent / 2);
    return result * result;
}
