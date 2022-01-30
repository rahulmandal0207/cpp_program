// 1 * 3 + 3 * 5 + 5 * 7 + 7 * 9 + 9 * 11 ... n * (n+2)
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int lastTerm;
    float sum = 0;
    cout << "Enter last term : ";
    cin >> lastTerm;
    for (int i = 1; i <= lastTerm; i += 2)
    {
        sum += (i * (i + 2));
    }
    cout << "Sum is : " << sum;
    getch();
    return 0;
}