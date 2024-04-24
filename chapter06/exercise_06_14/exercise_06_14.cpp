#include <iostream>
#include <cmath>
#include <unistd.h>

double roundToInteger(const double number);
double roundToTenths(const double number);
double roundToHundredths(const double number);
double roundToThousandths(const double number);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter number: ";
    }
    double number;
    std::cin >> number;
    std::cout << "The number rounded to the nearest integer: " << roundToInteger(number) << std::endl;
    std::cout << "The number rounded to the nearest tenth: " << roundToTenths(number) << std::endl;
    std::cout << "The number rounded to the nearest hundredth: " << roundToHundredths(number) << std::endl;
    std::cout << "The number rounded to the nearest thousandth: " << roundToThousandths(number) << std::endl;
    return 0;
}

double
roundToInteger(const double number)
{
    return floor(number + 0.5);
}

double
roundToTenths(const double number)
{
    return floor(number * 10 + 0.5) / 10;
}  

double
roundToHundredths(const double number)
{
    return floor(number * 100 + 0.5) / 100;
}

double
roundToThousandths(const double number)
{
    return floor(number * 1000 + 0.5) / 1000;
}  
