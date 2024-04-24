#include <iostream>
#include <unistd.h>
#include <cassert>
#include <iomanip>

int quotient(const int a, const int b);
int remainder(const int a, const int b);
void integerIntoDigits(int integer);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter an integer between 1 and 32767: ";
    }
    int integer;
    std::cin >> integer;
    if (integer < 1 || integer > 32767) {
        std::cerr << "Error 1: invalid value." << std::endl;
        return 1;
    }
    integerIntoDigits(integer);
    return 0;
}

int
quotient(const int a, const int b)
{
    assert(b != 0);
    return a / b;
}

int
remainder(const int a, const int b)
{
    assert(b != 0);
    return a % b;
}

void
integerIntoDigits(int integer)
{
    int divisor = 10000;
    while (integer >= 1) {
        if (integer >= divisor) {
            std::cout << quotient(integer, divisor) << std::setw(3);
            integer = remainder(integer, divisor);
        } 
        divisor = quotient(divisor, 10);
    }
}
