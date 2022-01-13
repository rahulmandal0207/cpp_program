#include <iostream>
#include <conio.h>
using namespace std;

float cal(float a, char o, float b, char e)
{
    if (e == '=')
    {
        switch (o)
        {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;

        default:
            cout << "Invalid";
        }
    }

    return 0.0;
}

int main()
{
    int a;
    int b;
    char o;
    char e;

    while (true)
    {
        cout << "Enter operation : ";    
        cin >> a;
        cin >> o;
        cin >> b;
        cin >> e;
        cout << cal(a, o, b, e) << endl;
    }
}