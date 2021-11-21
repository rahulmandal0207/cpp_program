#include <iostream>
using namespace std;

int main()
{
    float a, d, n, sum;

    cout << "Enter first term : ";
    cin >> a;
    cout << "Enter common difference : ";
    cin >> d;
    cout << "Enter number of terms : ";
    cin >> n;

    sum = n / 2 * ((2 * a) + (n - 1) * d);

    cout << "Sum of AP series : " << sum;
    
    return 0;
}