#include <iostream>

int
main()
{
    int column = 8;
    
    while (--column > 0) {
        int row = 8;

        if (0 == column % 2) {
            std::cout << " ";
        }

        while (--row > 0) {
            std::cout << "* ";
        }
    
        std::cout << std::endl;
    }

    return 0;
}

