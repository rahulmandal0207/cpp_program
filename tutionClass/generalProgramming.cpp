#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int n1, n2, n3;
    float f1, f2, f3;
    char c;
reRun:
    cout << "1. Airthmetic operations\n";
    cout << "2. Mensuration\n";

    cout << "Enter your choice : ";
    cin >> n1;
    switch (n1)
    {
    case 1:
        cout << "1. Sum of two numbers\n";
        cout << "2. Difference of two numbers\n";
        cout << "3. Product of two numbers\n";
        cout << "4. Quotient of two numbers\n";
        cout << "5. Remainder of two numbers\n";

        cout << "Enter your choice : ";
        cin >> n3;

        cout << "Enter first number : ";
        cin >> n1;
        cout << "Enter second number : ";
        cin >> n2;

        switch (n3)
        {
        case 1:
            cout << "Sum : " << n1 + n2;
            break;
        case 2:
            cout << "Difference : " << n1 - n2;
            break;
        case 3:
            cout << "Product : " << n1 * n2;
            break;
        case 4:
            cout << "Quotient : " << n1 / n2;
            break;
        case 5:
            cout << "Remainder : " << n1 % n2;
            break;
        }
        break; // break for outer case 1;
    case 2:
        cout << "1. Circle\n";
        cout << "2. Square\n";
        cout << "3. Rectangle\n";
        cout << "4. Rhombus\n";
        cout << "5. Triangle\n";
        cout << "6. Sphere\n";
        cout << "7. Cube\n";
        cout << "8. Cuboid\n";
        cout << "9. Cylinder\n";

        cout << "Enter your choice : ";
        cin >> n3;

        switch (n3)
        {
        case 1: /* circle */
            cout << "Enter radius of the circle : ";
            cin >> f1;
            cout << "Diameter : " << (2 * f1) << endl;
            cout << "Area : " << (3.14 * f1 * f1) << endl;
            break;
        case 2: /* square */
            cout << "Enter side : ";
            cin >> f1;
            cout << "Perimeter : " << (4 * f1) << endl;
            cout << "Area : " << (f1 * f1) << endl;
            cout << "Diagonal : " << (f1 * sqrt(2)) << endl;
            break;
        case 3: /* Rectangle */
            cout << "Enter length : ";
            cin >> f1;
            cout << "Enter breadth : ";
            cin >> f2;
            cout << "Perimeter : " << (2 * (f1 + f2)) << endl;
            cout << "Area : " << (f1 * f2) << endl;
            cout << "Diagonal : " << (sqrt((f1 * f1) + (f2 * f2))) << endl;
            break;
        case 4: /* Rhombus */
            cout << "Enter first daigonal : ";
            cin >> f1;
            cout << "Enter second diagonal : ";
            cin >> f2;
            cout << "Area : " << ((f1 * f2) / 2.0) << endl;
            cout << "Side : " << (sqrt((f1 * f1) + (f2 * f2)) / 2.0) << endl;
            break;
        case 5: /* Triangle */
            cout << "Enter base : ";
            cin >> f1;
            cout << "Enter height : ";
            cin >> f2;
            cout << "Area : " << ((f1 * f2) / 2.0) << endl;
            break;
        case 6: /* Sphere */
            cout << "Enter radius : ";
            cin >> f1;
            cout << "Diameter : " << (2 * f1) << endl;
            cout << "Surface area : " << (4 * 3.14 * f1 * f1) << endl;
            cout << "Volume : " << (4 * 3.14 * f1 * f1 * f1) / 3.0 << endl;
            break;
        case 7: /* Cube */
            cout << "Enter side : ";
            cin >> f1;
            cout << "LSA : " << (4 * f1 * f1) << endl;
            cout << "TSA : " << (6 * f1 * f1) << endl;
            cout << "Volume : " << (f1 * f1 * f1) << endl;
            break;
        case 8: /* Cuboid */
            cout << "Enter lenth : ";
            cin >> f1;
            cout << "Enter breadth : ";
            cin >> f2;
            cout << "Enter height : ";
            cin >> f3;
            cout << "LSA : " << 2 * f3 * (f1 + f2) << endl;
            cout << "TSA : " << 2 * ((f1 * f2) + (f2 * f3) + (f3 * f1)) << endl;
            cout << "Volume : " << (f1 * f2 * f3) << endl;
            break;
        case 9: /* Cylinder */
            cout << "Enter base radius : ";
            cin >> f1;
            cout << "Enter height : ";
            cin >> f2;
            cout << "LSA : " << (2 * 3.14 * f1 * f2) << endl;
            cout << "TSA : " << (2 * 3.14 * f1 * f2) + (2 * 3.14 * f1 * f1) << endl;
            cout << "Volume : " << (3.14 * f1 * f1 * f2) << endl;
            break;
        }
        break; // break for outer case 2
    default:
        cout << "Invalid choice !\n";
    }

    // asking to Re run the program
    cout << "\nEnter y/Y to re-run the program : ";
    cin >> c;
    if (c == 'y' || c == 'Y')
        goto reRun;
    else
        cout << "*** End of the program ***";

    getch();
}