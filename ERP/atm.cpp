/* Code by Rahul Mandal */

#ifndef ATM_CPP
#define ATM_CPP

#include "atm.h"

using namespace std;

Atm::Atm(string id, int pass)
{
    WithdrawAmt = 0;
    TotalAmt = 100;
    DepositAmt = 0;
    TransferAmt = 0;
    ErrorCount = 0;
    Id = id;
    PassCode = pass;

    verification();
}

void Atm::verification()
{
    int pass;
    string id;
    cout << "Enter your id : ";
    cin >> id;
    do
    {
        cout << "Enter your passcode : ";
        cin >> pass;
        if (pass == PassCode && id == Id && ErrorCount < 3)
        {
            menu();
            break;
        }
        else
        {
            cout << "Wrong Passcode !\n";
            ErrorCount++;
        }
    } while (ErrorCount < 3);
    if (ErrorCount >= 3)
        cout << "Your entered wrong id/passcode,\nYOUR ACCOUNT HAS BEEN LOCKED\n";
}

void Atm::menu()
{
reRun:
    cout << "\n*************\n";
    cout << "1. Check balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Transfer money\n";
    cout << "0. Exit\n";
    cout << "*************\n";
    cout << "\nEnter your choice : ";
    int choice;
    double amt;
    int acc;

    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 0:
        cout << "Exiting...";
        break;
    case 1:
        balance();
        goto reRun;
    case 2:
        cout << "Enter your Deposite amount : ";
        cin >> amt;
        deposit(amt);
        goto reRun;

    case 3:
        cout << "Enter withdrawl amount : ";
        cin >> amt;
        withdraw(amt);
        goto reRun;

    case 4:
        cout << "Enter account number : ";
        cin >> acc;
        cout << "Enter transfer amount : ";
        cin >> amt;
        transfer(acc, amt);
        goto reRun;

    default:
        cout << "Invalid choice !\n\n";
        goto reRun;
    }
}

void Atm::balance()
{
    cout << "\nID : " << Id << endl;
    cout << "Available Balance : " << TotalAmt << endl;
    cout << endl;
}

void Atm::deposit(double amt)
{
    DepositAmt = amt;
    if (DepositAmt > 0)
    {
        TotalAmt = TotalAmt + DepositAmt;
        cout << "Deposited Successfuly !\n";
        balance();
    }
    else
        cout << "Invalid Amount ! \n";
}

void Atm::withdraw(double amt)
{
    WithdrawAmt = amt;
    if (WithdrawAmt <= TotalAmt)
    {
        TotalAmt = TotalAmt - WithdrawAmt;
        cout << "Withdrawl successfuly !\n";
        balance();
    }
    else
        cout << "Invalid Amount !\n";
}

void Atm::transfer(int acc, double amt)
{
    TransferAmt = amt;
    if (TransferAmt <= TotalAmt)
    {
        TotalAmt -= TransferAmt;
        cout << "Transfered ! \n";
        balance();
    }
    else
        cout << "Invalid Amount ! \n";
}

#endif