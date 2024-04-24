#include <iostream>
#include <unistd.h>
#include <cassert>

bool multiple(const int first, const int second);

int
main()
{
    for (int counter = 1; counter <= 3; ++counter) {
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter two integers: ";
        }
        int first, second;
        std::cin >> first >> second;
        if (0 == first) {
            std::cerr << "Error 1: integer can't be devide by 0." << std::endl;
            return 1;
        }
        if (multiple(first, second)) {
            std::cout << second << " is a multiple of " << first << "\n\n";
        } else {
            std::cout << second << " is not a multiple of " << first << "\n\n";
        }
    }
    return 0;
}

bool
multiple(const int first, const int second)
{
    assert (first != 0);
    return 0 == second % first;
}
