#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float r1, r2;
    float d;

    d = b * b - 4 * a * c;

    r1 = 
    (-b + sqrt(d)) / 2 * a;
    r2 = (-b - sqrt(d)) / 2 * a;

    cout << "Root 1 : " << r1 << endl;
    cout << "Root 2 : " << r2 << endl;

    getch();
    return 0;
}