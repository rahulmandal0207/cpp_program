// leap year
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int year;

    cout << "Enter year : ";
    cin >> year;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        cout <<"leap year." << endl;
    }
    else
    {
        cout << "not leap year." << endl;
    }
    getch();
    return 0;
}