#include "Package.h"
#include <iostream>

Person::Person(const std::string& name, const std::string& city, const std::string& address, const int zipCode)
	:_name{ name },
	_city{city},
	_address{address},
	_zipCode{zipCode}
{
}

Person::Person(const Person& other)
	:_name{other._name},
	_city{other._city},
	_address{other._address},
	_zipCode{other._zipCode}
{
}

std::string Person::getName() const
{
	return _name;
}

std::string Person::getCity() const
{
	return _city;
}

std::string Person::getAddress() const
{
	return _address;
}

int Person::getZipCode() const
{
	return _zipCode;
}

Package::Package(const Person& sender, const Person& recipient, const double weight, const double ouncesPrice)
	:_sender{sender},
	_recipient{recipient},
	_weight{weight},
	_ouncesPrice{ouncesPrice}
{
}


double Package::calculateCost() const
{
	return _weight * _ouncesPrice;
}

void Package::print() const
{
	std::cout << "Name sender - " << _sender.getName() << std::endl;
	std::cout << "City sender - " << _sender.getCity() << std::endl;
	std::cout << "Address sender - " << _sender.getAddress() << std::endl;
	std::cout << "Sender Zip Code - " << _sender.getZipCode() << std::endl;
	std::cout << "Name reicipient - " << _recipient.getName() << std::endl;
	std::cout << "City reicipient - " << _recipient.getCity() << std::endl;
	std::cout << "Address reicipient - " << _recipient.getAddress() << std::endl;
	std::cout << "Reicipient Zip Code - " << _recipient.getZipCode() << std::endl;
	std::cout << "Package weight - " << _weight << std::endl;
	std::cout << "Ounces price - " << _ouncesPrice << std::endl;
	std::cout << "Package delivery price - " << calculateCost() << std::endl;
}

double Package::getWeight() const
{
	return _weight;
}

double Package::getOuncesPrice() const
{
	return _ouncesPrice;
}

TwoDayPackage::TwoDayPackage(const Person& sender, const Person& recipient, const double weight, const double ouncesPrice, const double addedValue)
	:Package(sender,recipient,weight,ouncesPrice),
	_addedValue{addedValue}
{
}

double TwoDayPackage::calculateCost() const
{
	return Package::calculateCost() + (_addedValue * getWeight());
}

OvernightPackage::OvernightPackage(const Person& sender, const Person& recipient, const double weight, const double ouncesPrice, const double addedValue)
	: Package(sender, recipient, weight, ouncesPrice),
	_addedValue(addedValue)
{
}

double OvernightPackage::calculateCost() const
{
	return Package::calculateCost() + (_addedValue * getWeight());
}

void OvernightPackage::print() const
{
	std::cout << "Overnight packing" << std::endl;
	Package::print();
	std::cout << "Added value - " << _addedValue * getWeight() << std::endl;
	std::cout << "The whole value - " << calculateCost() << std::endl;
}
