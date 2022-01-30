//primeCounter
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int j=1;
    int counter=0;
    while (i <= 1000)
    {
        i = 2;
        while (i < j)
        {
            if (j % i == 0)
                break;
            i++;
        }
        if (i == j)
            counter++;  .
        j++;
    }

    cout << "Total count : " << counter << endl;

    //getch();
}