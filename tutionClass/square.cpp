#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float side;

    cout << "Enter side : ";
    cin >> side;

    cout << "Perimeter : " << (4 * side) << endl;
    cout << "Area : " << (side * side) << endl;
    cout << "Diagonal : " << (sqrt(2) * side) << endl;

    getch();
    return 0;
}