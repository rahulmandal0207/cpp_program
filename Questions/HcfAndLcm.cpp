#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf;

    cout << "Enter two numbers : ";
    cin >> n1 >> n2;

    int i = (n1 < n2) ? n1 : n2;

    for (i; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
    }

    cout << "HCF : " << hcf << endl;
    cout << "LCM : " << (n1 * n2) / hcf << endl;

    return 0;
}