#include <iostream>

int
main()
{
    for (int row = 1; row <= 10; ++row) {
        for (int column = 1; column <= row; ++column) {
            std::cout << '*';
        }
        for (int space = 1; space <= 10 - row; ++space) {
            std::cout << ' ';
        }
        std::cout << '\t';
        for (int column = 10; column >= row; --column) {
            std::cout << '*';
        }
        for (int space = 1; space < row; ++space) {
            std::cout << ' ';
        }
        std::cout << '\t';
        for (int space = 10; space > row; --space) {
            std::cout << ' ';
        }
        for (int column = 1; column <= row; ++column) {
            std::cout << '*';
        }
        std::cout << '\t';
        for (int space = 1; space < row; ++space) {
            std::cout << ' ';
        }
        for (int column = 10; column >= row; --column) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    return 0;
}

