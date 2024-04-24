#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Person
{
public:
	Person(const std::string& name, const std::string& city, const std::string& adress, const int zipCode);
	Person(const Person& other);
	std::string getName() const;
	std::string getCity() const;
	std::string getAddress() const;
	int getZipCode() const;

private:
	std::string _name;
	std::string _city;
	std::string _address;
	int _zipCode;
};

class Package
{
public:
	Package(const Person& sender, const Person& recipient, const double weight, const double ouncesPrice);
	double calculateCost() const;
	void print() const;
	double getWeight() const;
	double getOuncesPrice() const;
private:
	Person _sender;
	Person _recipient;
	double _weight;
	double _ouncesPrice;
};

class TwoDayPackage : public Package
{
public:
	TwoDayPackage(const Person& sender, const Person& recipient, const double weight, const double ouncesPrice, const double addedValue);
	double calculateCost() const;
private:
	double _addedValue;
};

class OvernightPackage : public Package
{
public:
	OvernightPackage(const Person& sender, const Person& recipient, const double weight, const double ouncesPricei, const double addedValude);

	double calculateCost() const;
	void print() const;
private:
	double _addedValue;
};



#endif
