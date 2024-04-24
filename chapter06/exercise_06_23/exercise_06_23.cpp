#include <iostream>
#include <unistd.h>

void square(const int side, const char fillCharacter);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter side: ";
    }
    int side;
    std::cin >> side;
    if (side < 1) {
        std::cerr << "Error 1: invalid side." << std::endl;
        return 1;
    }
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter character: ";
    }
    char fillCharacter;
    std::cin >> fillCharacter;
    square(side, fillCharacter);
    return 0;
}

void
square(const int side, const char fillCharacter)
{
    for (int row = 1; row <= side; ++row) {
        for (int column = 1; column <= side; ++column) {
            std::cout << fillCharacter;
        }
        std::cout << std::endl;
    }
}
