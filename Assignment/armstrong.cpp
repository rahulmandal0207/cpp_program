#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int num, temp, lastDigit, sum = 0;
    cout << "Enter a number : ";
    cin >> num;
    temp = num;

    while (num > 0)
    {
        lastDigit = num % 10;
        sum = sum + pow(lastDigit, 3);
        num /= 10;
    }
    
    if (temp == sum)
        cout << temp << " is armstrong number" << endl;
    else
        cout << temp << " is not a armstrong number " << endl;

    getch();
    return 0;
}