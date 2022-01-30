/*to find the number and sum of all integer and sum of all 
integer b/w 100 and 200 which are divisible by 9*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 100; i <= 200; i++)
    {
        if(i % 9 == 0)
        {
            sum += i;
        }
    }

    cout << "Sum is : " << sum;
    getch();
    return 0;
}