#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float length, breadth, area, perimeter;

    cout << "Enter lenght of rectangle : ";
    cin >> length;
    cout << "Enter breadth of rectangle : ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area of rectangle is : " << area << " square unit." << endl;
    cout << "Perimeter of rectangle is : " << perimeter << " unit." << endl;

    getch();
    return 0;
}