#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, original, rem, rev = 0;
    cout << "Enter a number  : ";
    cin >> num;
    original = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    if (rev == original)
        cout << original << " is palindrome number.\n";
    else
        cout << original << " is not a plindrome number.\n";

    getch();
    return 0;
}