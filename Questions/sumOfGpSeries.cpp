#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, r, n, sum;

    cout << "Enter first term : ";
    cin >> a;
    cout << "Enter common ratio : ";
    cin >> r;
    cout << "Enter number of terms : ";
    cin >> n;

    sum = a * (1 - pow(r, n)) / (1 - r);

    cout << "Sum of GP series is : " << sum;

    return 0;
}