#include <iostream>
#include <unistd.h>
#include <cassert>

void chooseGraph(const int number, char fillCharacter);
void square(char fillCharacter);
void chess(char fillCharacter);

int
main()
{
    std::cout << "Square 0: \n"
              << "Chess board 1: \n";
    std::cout << "Enter number: ";
              
    int number;
    std::cin >> number;
    if (number < 0 || number > 1) {
        std::cerr << "Error 1: invalid number." << std::endl;
        return 1;
    }
    std::cout << "Enter character: ";
    char fillCharacter;
    std::cin >> fillCharacter;
    chooseGraph(number, fillCharacter);
    return 0;
}

void
chooseGraph(const int number, char fillCharacter)
{
    switch (number) {
    case 0: square(fillCharacter); break;
    case 1: chess(fillCharacter);  break;
    default: assert(0);            break;
    }
}

void
square(char fillCharacter)
{
    int side;
    std::cout << "Enter side: ";
    std::cin >> side;
    assert(side > 0);
    for (int column = 0; column < side; ++column) {
        for (int row = 0; row < side; ++row) {
            std::cout << fillCharacter;
        }
        std::cout << std::endl;
    }
}

void
chess(char fillCharacter)
{
    for (int column = 1; column <= 8; ++column) {
        for (int row = 1; row <= 16; ++row) {
            if (0 == (column + row) %2) {
                std::cout << ' ';
            } else {
                std::cout << fillCharacter;
            }
        }
        std::cout << std::endl;
    }
}
