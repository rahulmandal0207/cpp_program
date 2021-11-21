#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    int n;
    int rem;
    int sum = 0;

    cout << "Enter a number : ";
    cin >> num;

    n = num;

    while (num > 0)
    {
        rem = num % 10;
        sum += (rem * rem * rem);
        num /= 10;
    }

    if (n == sum)
    {
        cout << "Number is armstrong." << endl;
    }
    else
    {
        cout << "Number is not armstrong." << endl;
    }
    
    getch();
    return 0;
}