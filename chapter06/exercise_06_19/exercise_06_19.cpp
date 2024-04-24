#include <iostream>
#include <cmath>
#include <cassert>
#include <unistd.h>
#include <iomanip>

double hypotenuse(const double side1, const double side2);

int
main()
{
    for (int counter = 1; counter <= 3; ++counter) {
        std::cout << "Enter 2 sides of right triangle: ";
        double side1, side2;
        std::cin >> side1 >> side2;
        if (side1 <= 0 || side2 <= 0) {
            std::cerr << "Error 1: sides must be nonzero and positive." << std::endl;
            return 1;
        }
        std::cout << "Hypotenuse: " << std::setprecision(2) << hypotenuse(side1, side2) << std::endl;
    }
    return 0;
}

double
hypotenuse(const double side1, const double side2)
{
    assert (side1 > 0 && side2 > 0);
    return std::sqrt(side1 * side1 + side2 * side2);
}
