/* WAP in c++ , to design a class Resort having 
name - customer name
days - no of days stay
charge - per day charge
compute() - to calculate the total charge paid by the customer according to day*charge.
            ifa customer have more than 110000 then his/her charge is increase as 1.02*days*charge.
getInfo() - to take input for all data.
dispInfo() - to display the result. */

#include <iostream>
#include <conio.h>

using namespace std;

class Resort
{
public:
    char Name[50];
    int Days;
    float Charge;
    float Amount;


    void compute()
    {
        Amount = Days * Charge;
        if (Amount > 11000)
            Amount = 1.02 * Days * Charge;
        cout << "Total charge : " << Amount << endl;
    }

    void getInfo()
    {
        cout << "Enter name of customer : ";
        cin >> Name;
        cout << "Enter number of days to stay : ";
        cin >> Days;
        cout << "Enter charge per day : ";
        cin >> Charge;
    }

    void dispInfo()
    {
        cout << "Name of the customer : " << Name << endl;
        cout << "Number of days stayed : " << Days << endl;
        compute();
    }
};

int main()
{
    Resort r1;
    r1.getInfo();
    r1.dispInfo();

    getch();
    return 0;
}