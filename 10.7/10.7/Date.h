#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date();
	Date(const int month, const int day, const int year);
	void print1() const;
	void print2() const;
	void print3() const;
	bool isLeapYear() const;

private:
	int _month;
	int _day;
	int _year;

};
#endif
