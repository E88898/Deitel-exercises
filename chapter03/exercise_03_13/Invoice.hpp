#include <string>
    
class Invoice
{
public:
    Invoice(std::string partNumber, std::string partDescription, int purchasedItems, int pricePerItem);
    void setPartNumber(std::string partNumber);
    std::string getPartNumber();
    void setPartDescription(std::string partDescription);
    std::string getPartDescription();
    void setPurchasedItems(int purchasedItems);
    int getPurchasedItems();
    void setPricePerItem(int pricePerItem);
    int getPricePerItem();
    int getInvoiceAmount();
private:
    std::string partNumber_;
    std::string partDescription_;
    int purchasedItems_;
    int pricePerItem_;
};

