#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <cmath>

double distance(const double x1, const double y1, const double x2, const double y2);

int
main()
{
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the first points: ";
    }
    double x1, y1;
    std::cin >> x1 >> y1;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter the second points: ";
    }
    double x2, y2;
    std::cin >> x2 >> y2;
    std::cout << "Distance between (" << x1 << ", "
              << y1 << ") and (" << x2 << ", " << y2 << ") is " 
              << distance(x1, y1, x2, y2) << std::endl;
    
    return 0;
}

double
distance(const double x1, const double y1, const double x2, const double y2)
{
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}
