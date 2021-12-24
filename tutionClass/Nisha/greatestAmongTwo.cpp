#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;
    cout << "enter third number : ";
    cin >> c;
    cout << "enter fourth number : ";
    cin >> d;
    if (a > b && a > c && a > d)
    {
        cout << "a is greater";
    }
    else if (b > a && b > c && b > d)
    {
        cout << "b is greater";
    }
    else if (c > a && c > b && c > d)
    {
        cout << "c is greater";
    }
    else if (d > a && d > b && d > c)
    {
        cout << "d is greater";
    }
    getch();
}