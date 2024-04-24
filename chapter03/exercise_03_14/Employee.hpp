#include <string>

class Employee
{
public:
    Employee(std::string firstName, std::string lastName , int monthlySalary);
    void setFirstName(std::string firstName);
    std::string getFirstName();
    void setLastName(std::string lastName);
    std::string getLastName();
    void setMonthlySalary(int monthlySalary);
    int getMonthlySalary();
private:
    std::string firstName_;
    std::string lastName_;
    int monthlySalary_;
};

