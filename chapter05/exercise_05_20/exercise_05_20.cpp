#include <iostream>
#include <cmath> 

int
main()
{
    int counter = 0;
    int size = 500;
    for (int side1 = 3; side1 <= size / std::sqrt(2); ++side1) {
        int firstSideSquared = side1 * side1; 
        for (int side2 = side1 + 1; side2 <= size; ++side2) {
            int sidesSquared = firstSideSquared + side2 * side2;
            int hypotenuse = std::sqrt(sidesSquared);
            if (hypotenuse > size) { break; }
            if (hypotenuse * hypotenuse == sidesSquared) {
                std::cout << side1 << '\t' << side2 << '\t'
                          << hypotenuse << std::endl;
                ++counter;
            }
        }
    }
    std::cout << "There are " << counter << " triangles." << std::endl;
    return 0;
}

