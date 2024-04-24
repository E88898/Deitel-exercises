#include "Package.h"
#include <iostream>

void inputPerson(std::string& name, std::string& city, std::string& address, int& zipCode);
void inputPackage(double& weight, double& ouncesPrice);
void inputOvernightPackage(double& weight, double& ouncesPrice, double& addedValue);

int main()
{
    std::string senderName, senderCity, senderAddress;
    int senderZipCode;
    
    inputPerson(senderName, senderCity, senderAddress, senderZipCode);
    const Person sender(senderName, senderCity, senderAddress, senderZipCode);
    
    std::string recipientName, recipientCity, recipientAddress;
    int recipientZipCode;

    inputPerson(recipientName, recipientCity, recipientAddress, recipientZipCode);
    const Person recipient(recipientName, recipientCity, recipientAddress, recipientZipCode);
    
    double weight1, ouncesPrice1;
    inputPackage(weight1, ouncesPrice1);
    const Package package1(sender, recipient, weight1, ouncesPrice1);
    package1.print();
    std::cout << std::endl;

    double weight2, ouncesPrice2, addedValue2;
    inputOvernightPackage(weight2, ouncesPrice2, addedValue2);
    const OvernightPackage overnightPackage1(sender, recipient, weight2, ouncesPrice2, addedValue2);
    overnightPackage1.print();

    return 0;
}

void inputPerson(std::string& name, std::string& city, std::string& address, int& zipCode)
{
    std::cin >> name >> city >> address >> zipCode;
}

void inputPackage(double& weight, double& ouncesPrice)
{
    std::cin >> weight >> ouncesPrice;
    if (!(weight > 0) || ouncesPrice < 0) {
        std::cerr << "Error 1: Incorrect data!" << std::endl;
        ::exit(1);
    }
}

void inputOvernightPackage(double& weight, double& ouncesPrice, double& addedValue)
{
    std::cin >> weight >> ouncesPrice >> addedValue;
    if (!(weight > 0) || ouncesPrice < 0 || addedValue < 0) {
        std::cerr << "Error 1: Incorrect data!" << std::endl;
        ::exit(1);
    }
}