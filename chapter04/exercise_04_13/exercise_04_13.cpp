#include <iostream>
#include <unistd.h>

int
main()
{
    double totalMiles = 0, totalGallons = 0;

    while (true) { 
        double miles;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "\nEnter the miles used (-1 to quit): ";
        }
        std::cin >> miles;
        if (-1 == static_cast<int>(miles)) {
            return 0;
        }
        if (miles < 0) {
            std::cerr << "Error 1: miles are invalid value." << std::endl;
            return 1;
        }

        double gallons;
        if (::isatty(STDIN_FILENO)) {
            std::cout << "Enter gallons: ";
        }
        std::cin >> gallons;
        if (gallons < 0) {
            std::cerr << "Error 2: gallons are invalid value." << std::endl;
            return 2;
        }

        totalMiles += miles;
        totalGallons += gallons;
        std::cout << "MPG this tankful: " << miles / gallons << std::endl;
        std::cout << "Total MPG: " << totalMiles / totalGallons << std::endl;
    }

    return 0;
}

