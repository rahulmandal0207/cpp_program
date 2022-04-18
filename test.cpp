#include <stdio.h>
#include <conio.h>
#include <string.h>

struct atm
{
    char Id[10];
    double TotalAmt;
    double WithdrawAmt;
    double DepositAmt;
    double TransferAmt;
    int ErrorCount;
    int PassCode;

    atm(char *id, int pass)
    {
        strcpy(Id, id);
        PassCode = pass;
    }
};

int main()
{
    struct atm card("Rahul",1234);

    getch();
}