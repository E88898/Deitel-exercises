#include "Employee.hpp"
#include <iostream>
#include <string>

Employee::Employee(std::string firstName, std::string lastName, int monthlySalary)
{
    setFirstName(firstName);
    setLastName(lastName);
    setMonthlySalary(monthlySalary);
}

void
Employee::setFirstName(std::string firstName)
{
    if (firstName.length() > 25) {
        std::cerr << "Warning 1. First name exceeds maximum length (25). " << std::endl;
        firstName_ = firstName.substr(0, 25);

        return;
    }

    firstName_ = firstName;
}

std::string
Employee::getFirstName()
{
    return firstName_;
}

void
Employee::setLastName(std::string lastName)
{
    if (lastName.length() > 25) {
        std::cerr << "Warning 2. Last name exceeds maximum length (25)." << std::endl;
        lastName_ = lastName.substr(0, 25);
        
        return;
    }

    lastName_ = lastName;
}

std::string
Employee::getLastName()
{
    return lastName_;
}

void
Employee::setMonthlySalary(int monthlySalary)
{
    if (monthlySalary < 0) {
        std::cerr << "Warning 3. Salary is invalid value." << std::endl;
        monthlySalary = 0;
    }
    monthlySalary_ = monthlySalary;
}

int
Employee::getMonthlySalary()
{
    return monthlySalary_;
}

