#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float n, sr;

    cout << "Enter a number : ";
    cin >> n;

    sr = sqrt(n);

    cout << "Square root : " << sr << endl;
    getch();
    return 0;
}