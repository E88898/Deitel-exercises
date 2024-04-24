#include "Date.h"
#include <iostream>

void inputDate(int& day, int& month, int& year);
int inputFormat();
int daysMonth(const int& month, const int& year);


int
main()
{
    const int format = inputFormat();
    if (1 == format) {
        int day1, month1, year1;
        inputDate(day1, month1, year1);
        Date date1(day1, month1, year1);
        date1.print1();
        return 0;
    }

    if (2 == format) {
        int day2, month2, year2;
        inputDate(day2, month2, year2);
        Date date2(day2, month2, year2);
        date2.print2();
        return 0;
    }

    int day3, month3, year3;
    inputDate(day3, month3, year3);
    Date date3(day3, month3, year3);
    date3.print3();
    return 0;

}
void inputDate(int& day, int& month, int& year)
{
    std::cout << "Input month, day and year:";
    std::cin >> month >> day >> year;
    if (day <= 0 || month > 12 || month <= 0 || year < 1900 || year > 2100 || day > daysMonth(month, year)) {
        std::cerr << "Error 1: Invalid date." << std::endl;
        ::exit(1);
    }
}

int inputFormat()
{

    std::cout << "Date formats:"
        << "\t1 - DDD/YYYY"
        << "\t2 - DD/MM/YY"
        << "\t3 - Month day, year"
        << "> Choose: ";
    int format;
    std::cin >> format;
    if (format != 1 && format != 2 && format != 3) {
        std::cerr << "Error 3: Invalid date format." << std::endl;
        ::exit(3);
    }
    return format;
}

int daysMonth(const int& month, const int& year)
{
    if (2 == month) {
        if (0 == year % 400 || (year % 100 != 0 && 0 == year % 4)) {
            return 29;
        }
        return 28;
    }
    if (4 == month || 6 == month || 9 == month || 11 == month) {
        return 30;
    }
    return 31;

}