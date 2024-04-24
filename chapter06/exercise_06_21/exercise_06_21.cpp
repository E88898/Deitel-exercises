#include <iostream>
#include <unistd.h>
#include <cassert>

bool even(const int integer);

int
main()
{
    for (int counter = 1; counter <= 3; ++counter) {
        std::cout << "Enter an integer: ";
        int integer;
        std::cin >> integer;
        if (even(integer)) {
            std::cout << integer << " is an even integer\n\n";
        } else {
            std::cout << integer << " is an odd integer\n\n";
        }
    }
    return 0;
}

bool
even(const int integer)
{
    return 0 == integer % 2;
}
