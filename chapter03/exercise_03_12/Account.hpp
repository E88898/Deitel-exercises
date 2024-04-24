class Account
{
public:
    Account(int balance);
    void credit(int addedMoney);
    void debit(int withdrawedMoney);
    int getBalance();
private:
    int balance_;
};

