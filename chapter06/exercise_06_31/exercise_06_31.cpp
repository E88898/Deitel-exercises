#include <iostream>
#include <unistd.h>

int reverse(int number);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter positive integer: ";
    }
    int number;
    std::cin >> number;
    if (number < 0) {
        std::cout << "Error 1: invalid value." << std::endl;
        return 1;
    }
    std::cout << reverse(number) << std::endl;
    return 0;
}

int
reverse(int number)
{   
    int divider = 1, counter = 0;
    while (number / divider > 0) {
        divider *= 10;
        ++counter;
    }
    int reverse = 0;
    while (0 != divider) {
        divider /= 10;
        reverse += number % 10 * divider;
        number /= 10;
    }
    return reverse;
}
 
