// circle
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float r;
    cout << "Enter radius : ";
    cin >> r;

    cout << "Diameter : " << (2 * r);
    cout << "Area of circle : " << (3.14 * r * r);

    getch();
}