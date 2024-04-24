#include <iostream> 

int
main()
{
    for (int count = 1; count <= 10; ++count) {
        std::cout << count << ' ';
        if (4 == count) {
            count = 11;
        }
    }
    return 0;
}

