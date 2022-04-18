#include <iostream>
#include <conio.h>

using namespace std;

class Sum
{
    float sum;

public:
    Sum(int *arr)
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }

        cout << "Sum is : " << sum << endl;
    }
};


int main()
{
    int arr[5] = {1,2,3,4,5};
    Sum s(arr);

    getch();
}