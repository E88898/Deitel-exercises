#include <iostream>
#include <iomanip>

long factorial(const long number);
void printRecursion(const int number);

int
main()
{
    for (int number = 0; number <= 10; ++number) {
        std::cout << std::setw(3) <<  number << "! = \n" << factorial(number) << std::endl;
    }
    return 0;
}

long
factorial(const long number)
{
    if (number <= 1) {
        return 1;
    } 
    printRecursion(number);
    return (number * factorial(number - 1));
}

void
printRecursion(const int number)
{
    std::cout << "number =" << std::setw(number) << number << std::endl;
}
