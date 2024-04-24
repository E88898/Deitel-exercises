#include <iostream>

int
main()
{
    double radius;
    std::cout << "Enter value for radius: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cerr << "Warning 1: The radius can't be negative or 0." << std::endl;
        return 1;
    }

    std::cout << "Diameter is: " << 2 * radius << std::endl;
    std::cout << "Circuferens is: " << 2 * 3.14159 * radius << std::endl;
    std::cout << "Area is: " << 3.14159 * radius * radius << std::endl;

    return 0;
}

