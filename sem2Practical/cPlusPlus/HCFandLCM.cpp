#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, n1, n2, hcf, lcm;

    cout << "Enter two numbers : ";
    cin >> n1 >> n2;

    i = (n1 < n2) ? n1 : n2;

    for (i; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
    }

    lcm = (n1 * n2) / hcf;

    cout << "HCF : " << hcf << endl;
    cout << "LCM : " << lcm << endl;

    getch();
    return 0;
}