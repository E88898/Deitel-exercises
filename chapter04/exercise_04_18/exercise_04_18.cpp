#include <iostream>

int
main()
{
    int n = 0;

    std::cout << "N\t10 * N\t100 * N\t1000 * N\n\n";

    while (++n <= 5) {
        std::cout << n << '\t' << 10 * n << '\t' << 100 * n
                  << '\t' << 1000 * n << '\n';
    }

    return 0;
}

