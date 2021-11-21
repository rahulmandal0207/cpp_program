#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float area, s;

    cout << "Enter first side : ";
    cin >> a;
    cout << "Enter second side : ";
    cin >> b;
    cout << "Enter third side : ";
    cin >> c;

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of triangle : " << area << endl;

    getch();
    return 0;
}