// Write a C++ program to find maximum between two numbers.
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;

    if (n1 > n2)
    {
        cout << n1 << " is greater." << endl;
    }
    else
    {
        cout << n2 << " is greater." << endl;
    }
    getch();
    return 0;
}