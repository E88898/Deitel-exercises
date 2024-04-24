#include <iostream>
#include <unistd.h>
#include <cassert>

int gcd(const int number1, const int number2);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter to numbers to find greates common divisor: ";
    }
    int number1, number2;
    std::cin >> number1 >> number2;
    if (number1 <= 0 || number2 < 0) {
        std::cerr << "Error 1: invalid value." << std::endl;
        return 1;
    }
    std::cout << gcd(number1, number2) << std::endl;
    return 0;
}

int
gcd(const int number1, const int number2)
{
    assert(number1 > 0 && number2 >= 0);
    if (0 == number2) {
        return number1;
    }
    return gcd(number2, number1 % number2);
}
