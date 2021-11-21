#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, r, n, sum;
    cout << "Enter first term : ";
    cin >> a;
    cout << "Enter common ratio : ";
    cin >> r;
    cout << "Enter last term : ";
    cin >> n;
    sum = a * (1 - pow(r, n)) / (1 - r);
    cout << "Sum is : " << sum;
    return 0;
}