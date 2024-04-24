#include <iostream>
#include <unistd.h>

void square(const int side);

int
main()
{
    std::cout << "Enter side: " << std::endl;
    int side;
    std::cin >> side;
    if (side < 1) {
        std::cerr << "Error 1: invalid size." << std::endl;
        return 1;
    }
    square(side);
    return 0;
}

void
square(const int side)
{
    for (int row = 1; row <= side; ++row) {
        for (int column = 1; column <= side; ++column) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
