#include "Invoice.hpp"
#include <iostream>
#include <string>

int 
main()
{
    std::string partNumber;
    std::cout << "Enter part number: ";
    std::getline(std::cin, partNumber);

    std::string partDescription;
    std::cout << "Enter items name: ";
    std::getline(std::cin, partDescription);
    
    int purchasedItems;
    std::cout << "Enter how many were purchased: ";
    std::cin >> purchasedItems;
    
    int pricePerItem;
    std::cout << "Enter how much were cost each: ";
    std::cin >> pricePerItem;
    
    Invoice myInvoice(partNumber, partDescription, purchasedItems, pricePerItem);
    std::cout << std::endl << myInvoice.getPartNumber() + " " + myInvoice.getPartDescription() 
                           <<"The waste was: " << myInvoice.getInvoiceAmount() << std::endl;
    
    return 0;
}

