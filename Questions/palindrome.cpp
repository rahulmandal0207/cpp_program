#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int num;
    int originalNum;
    int rev = 0;
    int rem;

    cout << "Enter a number : ";
    cin >> num;

    originalNum = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    if (originalNum == rev)
    {
        cout << "Number is palindrome." << endl;
    }
    else
    {
        cout << "Number is not palindrome." << endl;
    }
    getch();
    return 0;
}