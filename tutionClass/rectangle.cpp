#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float length, breadth;

    cout << "Enter length : ";
    cin >> length;
    cout << "Enter breadth : ";
    cin >> breadth;

    cout << "Perimeter : " << (2 * (length + breadth)) << endl;
    cout << "Area : " << (length * breadth) << endl;
    cout << "Diagonal : " << (sqrt((length * length) + (breadth * breadth))) << endl;

    getch();
    return 0;
}