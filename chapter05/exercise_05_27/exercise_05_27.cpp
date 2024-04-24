#include <iostream>

int
main()
{
    for (int count = 1; count <= 10; ++count) {
        if (5 != count) {
            std::cout << count << ' ';
        }
    }
    return 0;
}

