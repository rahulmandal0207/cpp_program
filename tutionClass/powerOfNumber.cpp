#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float x, p;

    cout << "Enter x : ";
    cin >> x;
    cout << "Enter power : ";
    cin >> p;
    cout << x << " to the power " << p << " is " << pow(x, p) << endl;

    getch();
    return 0;
}
