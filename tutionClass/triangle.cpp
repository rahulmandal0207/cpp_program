// triangle
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, s;

    cout << "Enter three sides : ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2.0;

    cout << "Area : " << (sqrt(s * (s - a) * (s - b) * (s - c)));

    getch
    return 0;
}