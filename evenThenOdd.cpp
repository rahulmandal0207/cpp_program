#include <iostream>
#include <conio.h>

using namespace std;

void isEven(int a, int b)
{
    if (a % 2 == 0)
    {
        cout << a << endl;
        goto label_1;
    label_2:
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
        goto label_2;
    label_1:
        cout << b << endl;
    }
}

int main()
{

    isEven(5, 2);

    getch();
    return 0;
}