#include <iostream>
#include <unistd.h>

double smallest(const double number1, const double number2, const double number3);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter three numbers: ";
    }
    double number1, number2, number3;
    std::cin >> number1 >> number2 >> number3;
    std::cout << "The smallest value is " << smallest(number1, number2, number3) << std::endl;
    return 0;
}

double
smallest(const double number1, const double number2, const double number3)
{
    double temp = number1;
    if (temp > number2) {
        temp = number2;
    }
    if (temp > number3) {
        temp = number3;
    }
    return temp;
}
