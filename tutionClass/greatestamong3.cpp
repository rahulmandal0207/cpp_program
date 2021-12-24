#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "Enter C : ";
    cin >> c;

    if (a == b)
    {
        if (a == c)
        {
            cout << "All are equal\n";
        }
        else if (a > c)
        {
            cout << "A and B are equal and greater than C\n";
        }
        else
        {
            cout << "A and B are equal and smaller than C \n";
        }
    }
    else if (b == c)
    {
        if (b > a)
        {
            cout << "B and C are equal and greater than A\n";
        }
        else
        {
            cout << "B and C are equal and smaller than A";
        }
    }
    else if (a == c)
    {
        if (a > b)
        {
            cout << "A and C are equal and greater than B\n";
        }
        else
        {
            cout << "A and C are equal and smaller than B\n";
        }
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "A is greater\n";
            }
            else
            {
                cout << "C is greater\n";
            }
        }
        else
        {
            if (b > c)
            {
                cout << "B is greater\n";
            }
            else
            {
                cout << "C is greater\n";
            }
        }
    }
    getch();
}
