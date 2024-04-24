#include <iostream>
#include <cmath>

int
main()
{
    int halfSize = 4;
    for (int column = -halfSize; column <= halfSize; ++column) {
        for (int row = -halfSize; row <= halfSize; ++row) {
            
            std::cout << (::fabs(column) + ::fabs(row) <= halfSize ? '*' : ' ');
        }
        std::cout << std::endl;
    }
    return 0;
}

