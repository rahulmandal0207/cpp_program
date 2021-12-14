#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float d1, d2;

    cout << "Enetr first diagonal : ";
    cin >> d1;
    cout << "Enter second diagonal : ";
    cin >> d2;

    cout << "Area : " << (d1 * d2) / 2.0 << endl;
    cout << "Side : " << (sqrt((d1 * d1) + (d2 * d2)) / 2.0) << endl;

    getch();

    return 0;
}