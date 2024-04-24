#include <iostream>
#include <cassert>
#include <unistd.h>

void towers(const int disk, const int tower1, const int tower2, const int tower3);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter disk number: ";
    }
    int disk;
    std::cin >> disk;
    if (disk < 0) {
        std::cerr << "Error 1: invalid disk." << std::endl;
        return 1;
    }
    towers(disk, 1, 2, 3);
    return 0;
}

void
towers(const int disk, const int tower1, const int tower2, const int tower3)
{
    assert(disk >= 0);
    if (1 == disk) {
        std::cout << tower1 << " --> " << tower3 << std::endl;
        return;
    }
    towers(disk - 1, tower1, tower3, tower2);
    std::cout << tower1 << " --> " << tower3 << std::endl;
    towers(disk - 1, tower2, tower1, tower3);
}
