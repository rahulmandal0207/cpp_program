#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float l, b, h;

    cout << "Enter length : ";
    cin >> l;
    cout << "Enter breadth : ";
    cin >> b;
    cout << "Enter height : ";
    cin >> h;

    cout << "LSA : " << (2 * h * (l + b)) << endl;
    cout << "TSA : " << (2((l * b) + (b * h) + (h * l))) << endl;
    cout << "Volume : " << (l * b * h) << endl;
    cout << "Space diagonals : " << ()

    return 0;
}