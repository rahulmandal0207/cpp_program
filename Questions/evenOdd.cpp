//  Write a C++ program to check whether a number is even or odd.
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even number." << endl;
    }
    else
    {
        cout << n << " is odd number." << endl;
    }

    getch();
    return 0;
}