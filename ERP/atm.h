/* Code by Rahul Mandal */

class Atm
{
private:
    std::string Id;
    int PassCode;
    double TotalAmt;
    double WithdrawAmt;
    double DepositAmt;
    double TransferAmt;
    int ErrorCount;

private:
    void balance();
    void deposit(double amt);
    void withdraw(double amt);
    void transfer(int acc, double amt);
    void verification();
    void menu();

public:
    Atm(std::string id, int pass);
};
