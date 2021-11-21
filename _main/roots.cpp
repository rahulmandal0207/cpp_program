
using namespace std;

void roots()
{
    double a, b, c;
    double dis, r1, r2;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    dis = b * b - 4 * a * c;

    if(a != 0)
    {
        if (dis > 0)
        {
            r1 = (-b + sqrt(dis)) / (2 * a);
            r2 = (-b - sqrt(dis)) / (2 * a);
            cout << "Roots are real and different :- " << endl;
            cout << "r1 = " << r1 << endl;
            cout << "r2 = " << r2 << endl;
        }
        else if (dis == 0)
        {
            r1 = r2 = -b / (2 * a);
            cout << "Roots are real and same :- " << endl;
            cout << "r1 = " << r1 << endl;
            cout << "r2 = " << r2 << endl;
        }
        else
        {
            r1 = -b / (2 * a);
            r2 = sqrt(-dis) / (2 * a);
            cout << "Roots are complex and different :- " << endl;
            cout << "r1 = " << r1 << "+" << r2 << "i" << endl;
            cout << "r2 = " << r1 << "-" << r2 << "i" << endl;
        }
    }
    else
    {
        cout << "Not a quadratic equation" << endl;
    }

}

