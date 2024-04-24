#include <iostream>

int
main()
{
    static int count = 1;
    if (5 == count) {
        return 0;
    }
    std::cout << ++count << std::endl;
    main();
    return 0;
}

