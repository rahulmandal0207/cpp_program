#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nFirst value : " << a << endl;
    cout << "Second value : " << b << endl;

    getch();
    return 0;
}