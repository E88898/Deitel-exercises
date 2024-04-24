#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

int flip();

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::srand(std::time(0));
    }
    int headCounter = 0, tailCounter = 0;
    for (int loop = 1; loop <= 100; ++loop) {
        if (0 == flip()) {
            ++tailCounter;
            std::cout << "Tails ";
        } else {
            ++headCounter;
            std::cout << "Heads ";
        }
        if (0 == loop % 10) {
            std::cout << std::endl;
        }
    }
    std::cout << "\nThe total number of Head was " << headCounter <<
                 "\nThe total number of Tails was " << tailCounter << std::endl;

    return 0;
}

int
flip()
{
    return std::rand() % 2;
}
