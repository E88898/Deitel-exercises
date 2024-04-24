#include <iostream>
#include <iomanip>
#include <cmath>
#include <unistd.h>
#include <cassert>

double calculateCharges(const double hours);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the hours parked for 3 cars: ";
    }
    std::cout << "\nCar\tHours\tCharge\n";
    double totalCharges = 0.0;
    double totalHours = 0.0;
    for (int cars = 1; cars <= 3; ++cars) {
        std::cout << cars;
        double hours;
        std::cin >> hours;
        if (hours <= 0) {
            std::cerr << "Error 1: invalid hours." << std::endl;
            return 1;
        }
        if (hours > 24.0) {
            std::cerr << "Error 2: not allowed more than 24 hours." << std::endl;
            return 2;
        }
        totalHours += hours;
        std::cout << std::setw(12) << hours;
        const double charges = calculateCharges(hours);
        std::cout << std::setw(9) << charges << std::endl;
        totalCharges += charges;
    }
    std::cout << "\nTOTAL" << std::setw(8) << totalHours << std::setw(9) << totalCharges << std::endl;
    return 0;
}

double
calculateCharges(const double hours)
{
    assert(hours > 0 || hours < 24.0);
    if (hours < 3.0) {
        return 2.0;
    } 
    if (hours > 19.0) {
        return 10.0;
    }
    return 2.0 + std::ceil(hours - 3.0) * 0.5;
}
