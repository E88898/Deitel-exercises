#include "Date.hpp"
#include <iostream>

int
main()
{
    int month;
    std::cout << "Enter month: ";
    std::cin >> month;

    int day;
    std::cout << "Enter day: ";
    std::cin >> day;

    int year;
    std::cout << "Enter year: ";
    std::cin >> year;

    Date date(month, day, year);
    date.displayDate();

    return 0;
}

