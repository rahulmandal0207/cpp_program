#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float side;

    cout << "Enter side : ";
    cin >> side;

    cout << "LSA : " << (4 * side * side) << endl;
    cout << "TSA : " << (6 * side * side) << endl;
    cout << "Volume : " << (side * side * side) << endl;
    cout << "Space diagonals : " << (sqrt(3) * side) << endl;

    getch();
    return 0;
}