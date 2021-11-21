#include <iostream>
#include <conio.h>

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
        sum = (sum * 10) + lastDigit;
        num /= 10;
    }

    if (temp == sum)
        cout << temp << " is palindrome number" << endl;
    else
        cout << temp << " is not palindrome number" << endl;

    getch();
    return 0;
}