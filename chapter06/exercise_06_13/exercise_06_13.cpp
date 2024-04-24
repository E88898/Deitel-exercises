#include <iostream>
#include <cmath>

int
main()
{
    for (int counter = 1; counter <= 5; ++counter) {
        std::cout << "Enter a number: ";
        double number;
        std::cin >> number;
        const double roundedNumber = std::floor(number + 0.5);
        std::cout << number << " rounded is " << roundedNumber << std::endl;
    }
    return 0;
}
