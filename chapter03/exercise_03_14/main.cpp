#include "Employee.hpp"
#include <iostream>
#include <string>

int
main()
{
    std::string firstName1;
    std::cout << "Enter employee's first name: ";
    std::cin >> firstName1;
    
    std::string lastName1;
    std::cout << "Emter employee's last name: ";
    std::cin >> lastName1;

    int monthlySalary1;
    std::cout << "Enter monthly salary: ";
    std::cin >> monthlySalary1;
    
    Employee employee1(firstName1, lastName1, monthlySalary1);
    std::cout << std::endl << employee1.getFirstName() + " " + employee1.getLastName() << std::endl;
    std::cout << "Yearly salary of employee is " << 12 * employee1.getMonthlySalary() << std::endl;
    std::cout << "Raised salary (yearly): " << 13.2 * employee1.getMonthlySalary() << std::endl;       
    
    std::string firstName2;
    std::cout << "\nEnter employee's first name: ";
    std::cin >> firstName2;
    
    std::string lastName2;
    std::cout << "Emter employee's last name: ";
    std::cin >> lastName2;

    int monthlySalary2;
    std::cout << "Enter monthly salary: ";
    std::cin >> monthlySalary2;

    Employee employee2(firstName2, lastName2, monthlySalary2);
    std::cout << std::endl << employee2.getFirstName() + " " + employee2.getLastName() << std::endl; 
    std::cout << "Yearly salary of employee is " << 12 * employee2.getMonthlySalary() << std::endl;
    std::cout << "Raised salary (yearly): " << 13.2 * employee2.getMonthlySalary() << std::endl;    
    
    return 0;
}
  
