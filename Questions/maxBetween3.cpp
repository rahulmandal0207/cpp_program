// Write a C++ program to find maximum between three numbers.
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Enter third number : ";
    cin >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << n1 << " is greater." << endl;
        }
        else
        {
            cout << n3 << " is greater." << endl;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << n2 << " is greater." << endl;
        }
        else
        {
            cout << n3 << " is greater." << endl;
        }
    }

    return 0;
}
