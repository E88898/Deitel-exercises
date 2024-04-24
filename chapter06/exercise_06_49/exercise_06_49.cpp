#include <iostream>
#include <cstdio>

int
main()
{
    int c;
    if ((c = std::cin.get()) != EOF) {
        main();
        std::cout << c;
    }
    return 0;
}
