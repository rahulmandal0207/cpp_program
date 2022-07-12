#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    int rem;
    int sum;
    int sum2 =0;

    for (int i = 1; i < 1000; i++) 
    {
        num = i;
        sum = 0;
        while (num > 0)
        {
            rem = num % 10;
            sum += (rem * rem * rem);
            num /= 10;
        }
        if (sum == i)
        {
            int temp = i;
            while (temp > 0)
            {
                rem = temp % 10;
                sum2 += rem;
                temp = temp / 10;                
            }
        }
    }

    cout << "Sum : " << sum2 << endl;
    getch();
}