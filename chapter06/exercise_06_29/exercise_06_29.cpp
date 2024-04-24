#include <iostream>
#include <unistd.h>

bool perfect(const int number);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Perfect numbers between 1 and 1000" << std::endl;
    }
    for (int number = 2; number <= 1000; ++number) {
        if (perfect(number)) {
            std::cout << number << " is perfect" << std::endl;
        }
    }
    return 0;
}

bool
perfect(const int number)
{
    int sum = 1;
    for (int counter = 2; counter <= number / 2; ++counter) {
        if (0 == number % counter) {
            sum += counter;
        }
    }
    return sum == number ? true : false;
}
