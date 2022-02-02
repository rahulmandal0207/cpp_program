// decimal to binary
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, r, i = 0, j, a[20];
    cout << "Enter n : ";
    cin >> n;
    while (n > 0)
    {
        r = n % 2;
        a[i] = r;
        i += 1;
        n = n / 2;
    }
    cout << "Binary number is : ";
    for (j = i - 1; j >= 0; j -= 1)
    {
        cout << a[j];
    }
    getch();
}