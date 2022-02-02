#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double balance = 100, deposit;
    int option, withdraw;
    do
    {
        cout << "\n\t*******MENU******";
        cout << "\n\t*								";
        cout << "\n\t*	1. check balance      			";
        cout << "\n\t*	2. Deposit					";
        cout << "\n\t*	3. Withdraw					";
        cout << "\n\t*	4. Transfer					";
        cout << "\n\t*	5. Exit						";
        cout << "\n\t*								";
        cout << "\n\t***************";
        cout << "\n\t  please choose an option:";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\n\t your balance is :$" << balance << endl;
            break;

        case 2:
            cout << "\n\tAmount you want deposite :$";
            cin >> deposit;
            balance += deposit;
            cout << "\n\t Current balnace :$" << balance << endl;
            break;

        case 3:
            cout << "\n\t how do you want to withdrow";
            cin >> withdraw;
            if (balance < withdraw)
            {
                cout << "\n\t you do not have enough money in your account to withdraw" << endl;
            }
            else
            {
                balance += deposit;
                cout << "\n\t Current balnace :$" << balance << endl;
                break;
            }
        case 4:
            cout << "\n\t this service is currently not avilable" << endl;
            break;
            
        default:
            if (option != 5)
                cout << "\n\tinvalid option " << endl;
            break;
        }
    } while (option != 5);
    system("pause");
    getch();
}