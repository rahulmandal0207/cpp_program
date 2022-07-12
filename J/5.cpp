// difference of qube of two digit number
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    
    int num;
    int first;
    int second;
    int rem;
    int digitCount = 0;

    cout << "Enter a number : ";
    cin >> num;

    second = num % 10;
    
    while(num > 0)
    {
        first = num % 10;
        num = num / 10;
        digitCount++;

        if (digitCount > 2) {
            cout << "Enter a two digit number only ";

            getch();
            return 0;
        }
    }

    int firstCube = first * first * first;
    int secondCube = second * second * second;
    int result;

    if (first > second) 
    {
        result = firstCube - secondCube;
    }
    else
    {
        result = secondCube - firstCube;
    }

    cout << "Result : " << result << endl;

    getch();
    return 0;
}