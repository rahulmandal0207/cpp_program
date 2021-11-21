#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float radius, area;

    cout << "Enter radius of circle : ";
    cin >> radius;
    
    area = 3.14 * radius * radius;
    cout << "Area is : " << area << endl;

    getch();
    return 0;
}