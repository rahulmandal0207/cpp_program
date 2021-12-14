// sphere
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float r;
    cout << "Enter radius of sphere : ";
    cin >> r;

    cout << "Diameter : " << (2 * r) << endl;
    cout << "Surface area : " << (4 * 3.14 * r * r) << endl;
    cout << "Volume : " << (4 * 3.14 * r * r * r) / 3.0 << endl;

    getch();
}