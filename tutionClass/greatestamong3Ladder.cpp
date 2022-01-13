#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    if (a == b && b == c)
        cout << "All are equal";
    else if (a == b && a > c && b > c)
        cout << "A and B are equal and greater than C";
    else if (a == b && a < c && b < c)
        cout << "C is greater and A and B are equal";
    else if (a == c && a > b && c > b)
        cout << "A and C are equal and greater than B";
    else if (a == c && a < b && c < b)
        cout << "B is greater and A and C are equal";
    else if (b == c && b > a && c > a)
        cout << "B and C are equal and greater than A";
    else if (b == c && b < a && c < a)
        cout << "A is greater and B and C are equal";
    else if (a > b && a > c)
        cout << "A is greater";
    else if (b > a && b > c)
        cout << "B is greater";
    else if (c > a && c > b)
        cout << "C is greater";

    getch();
}