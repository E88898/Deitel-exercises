#include "Invoice.hpp"
#include <iostream>
#include <string>
    
Invoice::Invoice(std::string partNumber, std::string partDescription, int purchasedItems, int pricePerItem)
{
    setPartNumber(partNumber);
    setPartDescription(partDescription);
    setPurchasedItems(purchasedItems);
    setPricePerItem(pricePerItem);
}
    
void
Invoice::setPartNumber(std::string partNumber)
{
    if (partNumber.length() > 25) {
        std::cerr << "Warning 1: number exceeds maximum length (25)." << std::endl;
        partNumber_ = partNumber.substr(0, 25);

        return;
    }
    
    partNumber_ = partNumber;
}
    
std::string
Invoice::getPartNumber()
{
    return partNumber_;
}
    
void
Invoice::setPartDescription(std::string partDescription)
{
    if (partDescription.length() > 25) {
        std::cerr << "Warning 2. descripton exceeds maximum length (25)." << std::endl;
        partDescription_ = partDescription.substr(0, 25);
    
        return;
    }
    
    partDescription_ = partDescription;
}
     
std::string
Invoice::getPartDescription()
{
    return partDescription_;
}
    
void
Invoice::setPurchasedItems(int purchasedItems)
{
    if (purchasedItems < 0) {
        std::cerr << "Warning 3: purchased items is invalide.It was set to 0." << std::endl;
        purchasedItems = 0;

        return;
    }
    
    purchasedItems_ = purchasedItems;
}
    
int
Invoice::getPurchasedItems()
{
    return purchasedItems_;
}
    
void
Invoice::setPricePerItem(int pricePerItem)
{
    if (pricePerItem < 0) {
        std::cerr << "Warning 4: price per item is invalide.It was set to 0." << std::endl;
        pricePerItem = 0;
        
        return;
    }
    
    pricePerItem_ = pricePerItem;
}
    
int
Invoice::getPricePerItem()
{
    return pricePerItem_;
}
    
int
Invoice::getInvoiceAmount()
{
    return purchasedItems_ * pricePerItem_;
    
}

