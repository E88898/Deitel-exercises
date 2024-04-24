#include "Date.hpp"
#include <iostream>
#include <string>
      
Date::Date(int month, int day, int year)
{
    setMonth(month);
    setDay(day);
    setYear(year);
}
    
void
Date::setMonth(int month)
{
    if (month > 12) {
        std::cerr << "\nWarning 1: the entered month is incorrect. Resetting to 1." << std::endl;
        month_ = 1;
        return;
    }
    
    if (month < 1) {
        std::cerr << "\nWarning 1: the entered month is incorrect. Resetting to 1." << std::endl;
        month_ = 1;
        return;
    }
    
    month_ = month;
}
    
int
Date::getMonth()
{
    return month_;
}
    
void
Date::setDay(int day)
{
    if (day > 31) {
        std::cerr << "\nWarning 2: the entered day is incorrect. Resetting to 1." << std::endl;
        day_ = 1;
        return;
    }

    if (day < 1) {
        std::cerr << "\nWarning 2: the entered day is incorrect. Resetting to 1." << std::endl;
        day_ = 1;
        return;
    }

    day_ = day;
}
    
int
Date::getDay()
{
    return day_;
}
    
void
Date::setYear(int year)
{
    if (year < 0) {
        std::cerr << "\nWarning 3: the entered year is incorrect. Resetting to 2000." << std::endl;
        year = 2000;
    }

    year_ = year;
}

int
Date::getYear()
{
    return year_;
}
    
void
Date::displayDate()
{
    std::cout << "\nDate: " << getMonth() << " / "
                            << getDay() << " / "   
                            << getYear() << std::endl;
}

