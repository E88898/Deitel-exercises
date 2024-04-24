#include "Date.h"
#include <iostream>
#include <iomanip>

static const int MONTHS = 12;
static const int DAYS_PER_MONTH[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
static const std::string MONTH_NAMES[] = { "January", "February", "March",
										   "April", "May", "June", "July",
									       "August", "September", "October",
									       "November", "December" };

Date::Date()
	: _day(1)
	, _month(1)
	, _year(2000)
{
}

Date::Date(const int month, const int day, const int year)
	: _day(day)
	, _month(month)
	, _year(year)
{
}

void Date::print1() const
{
	int sumDay = 0;
	for (int idx = 0; idx < _month - 1; ++idx) {
		sumDay += DAYS_PER_MONTH[idx];
	}
	if (isLeapYear() && _month > 2) {
		++sumDay;
	}
	std::cout << std::setw(3) << std::setfill('0') << _day + sumDay << ' ' << _year << std::setfill(' ') << std::endl;
}

void Date::print2() const
{
	std::cout << std::setw(2) << std::setfill('0') << _month
		      << '/' << std::setw(2) << _day << '/' << _year
	 	      << std::setfill(' ') << std::endl;
}

void Date::print3() const
{
	std::cout << MONTH_NAMES[_month - 1] << ' ' << std::setw(2) << std::setfill('0')
		<< _day << ", " << _year << std::setfill(' ') << std::endl;
}

bool Date::isLeapYear() const
{
	return _year % 400 == 0 || (_year % 4 == 0 && _year % 100 != 0);
}
