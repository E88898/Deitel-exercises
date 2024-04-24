#include <iostream>

int
main()
{
    double pi = 0;
    int sign = 1, fractions = 0, divider = 1, tens = 1000;
    while (tens != 0) {
        int desiredPi = 314159 / tens * tens * 10;
        while(desiredPi != static_cast<int>(pi * 1000000)) {
            pi += sign * 4.0 / divider;
            ++fractions, divider += 2, sign *= -1;
        }
        std::cout << fractions << '\t' << pi << std::endl;
        tens /= 10;
    }
    return 0;
}

