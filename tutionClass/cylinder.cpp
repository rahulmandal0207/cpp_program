// cylinder
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float radius, height;

    cout << "Enter radius : ";
    cin >> radius;
    cout << "Enter height : ";
    cin >> height;

    cout << "LSA : " << (2 * 3.14 * radius * height) << endl;
    cout << "TSA : " << ((2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius)) << endl;
    cout << "Volume : " << (3.14 * radius * radius * height) << endl;

    getch();
    return 0;
}