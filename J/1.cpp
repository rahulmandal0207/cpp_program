// sum of first and last digit of a number 
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num;
    int first;
    int last;

    cout << "Enter a number : ";
    cin >> num;

    last = num % 10;

    while(num > 0)
    {
        first = num % 10;
        num = num / 10;
    }

    cout << "First : " << first << endl;
    cout << "Last : " << last << endl;

    cout << "Sum : " << first + last << endl;
    
    getch();
    return 0;
}