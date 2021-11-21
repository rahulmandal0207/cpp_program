#include <iostream>
#include <conio.h>
#include <math.h>
//#include "roots.cpp"

#define PI 3.14159265359

using namespace std;

void swap(int *n1, int *n2);
int hcf(int n1, int n2);

void halfPyr(char sym, int rows);        // Half Pyramid
void mirrHalfPyr(char sym, int rows);    // Mirrored half Pyramid
void invHalfPyr(char sym, int rows);     // Inverted half Pyramid
void mirrInvHalfPyr(char sym, int rows); // Mirrored inverted half Pyramid
void pyramid(char sym, int rows);        // pyramid
void invPyramid(char sym, int rows);     // Inverted pyramid
void rectangle(char sym, int rows);

int main()
{
    int n1, n2, n3, n4;
    float f1, f2, f3, f4;
    char c1;

reRun:
    cout << "1: Arithmetic operations \n";
    cout << "2: Mensuration\n";
    cout << "3: Multiplication table\n";
    cout << "4: Fibonacci Series\n";
    cout << "5: Max between two numbers\n";
    cout << "6: Max between three numbers\n";
    cout << "7: Swap two number\n";
    cout << "8: ASCII value of a character\n";
    cout << "9: Reverse of a number\n";
    cout << "10: HCF and LCM\n";
    cout << "11: Co-prime or not\n";
    cout << "12: Vowel or consonent\n";
    cout << "13: ASCII table\n";
    cout << "14: Palindrome or not\n";
    cout << "15: Armstrong or not\n";
    cout << "16: Prime or not\n";
    cout << "17: Temperature Converter\n";
    cout << "18: Square root of a number\n";
    cout << "19: Power of a number\n";
    cout << "20: Area using Heron's formula\n";
    cout << "21: Leap year or not\n";
    cout << "22: Sum of n series\n";
    cout << "23: Patterns\n";
    cout << "24: Length Converter\n";
    cout << "25: Time Converter\n";
    //cout << "24: Roots of quadratic equation\n";

    cout << endl;

    cout << "Enter your choice : ";
    cin >> n4;
    switch (n4)
    {
    // Arithmetic operations
    case 1:
        cout << "1: Sum\n";
        cout << "2: Difference\n";
        cout << "3: Product\n";
        cout << "4: Division\n";
        cout << "Enter your choice : ";
        cin >> n1;
        switch (n1)
        {
        case 1:
            cout << "Enter first number : ";
            cin >> f1;
            cout << "Enter second number : ";
            cin >> f2;
            cout << "Sum is : " << f1 + f2 << endl;
            break;
        case 2:
            cout << "Enter first number : ";
            cin >> f1;
            cout << "Enter second number : ";
            cin >> f2;
            cout << "Difference is : " << f1 - f2 << endl;
            break;
        case 3:
            cout << "Enter first number : ";
            cin >> f1;
            cout << "Enter second number : ";
            cin >> f2;
            cout << "Product is : " << f1 * f2 << endl;
            break;
        case 4:
            cout << "Enter divident : ";
            cin >> n2;
            cout << "Enter divisor : ";
            cin >> n3;
            cout << "Quotient : " << n2 / n3 << endl;
            cout << "Remainder : " << n2 % n3 << endl;
            break;
        default:
            cout << "Invalid choice";
        }
        break;
    // Mensuration
    case 2:
        cout << "1: Circle\n";
        cout << "2: Square\n";
        cout << "3: Rectangle\n";
        cout << "4: Triangle\n";
        cout << "5: Sphere\n";
        cout << "6: Cube\n";
        cout << "7: Cuboid\n";
        cout << "8: Cone\n";
        cout << "9: Cylinder\n";
        cout << "10: Hemisphere\n";
        cout << "11: Find the third angle of a triangle\n";
        cout << "12: Find the area of a equilateral triangle\n";

        cout << "\nEnter your choice : ";
        cin >> n4;

        switch (n4)
        {
        // circle
        case 1:
            cout << "Enter radius : ";
            cin >> f1;
            cout << "Area : " << PI * f1 * f1 << " sqr unit\n";
            cout << "Diameter : " << 2 * f1 << " unit\n";
            cout << "Circumference : " << 2 * PI * f1 << " unit\n";
            break;
        // square
        case 2:
            cout << "Enter length of side : ";
            cin >> f1;
            cout << "Area : " << f1 * f1 << " sqr unit\n";
            cout << "Perimeter : " << 4 * f1 << " unit\n";
            cout << "Diagonal : " << sqrt(2) * f1 << " unit\n";
            break;
        // rectangle
        case 3:
            cout << "Enter length : ";
            cin >> f1;
            cout << "Enter breadth : ";
            cin >> f2;
            cout << "Area : " << f1 * f2 << " sqr unit\n";
            cout << "Perimeter : " << 2 * (f1 + f2) << " unit\n";
            cout << "Diagonal : " << sqrt((f1 * f1) + (f2 + f2)) << " unit\n";
            break;
        // triangle
        case 4:
            cout << "Enter base : ";
            cin >> f1;
            cout << "Enter height : ";
            cin >> f2;
            cout << "Area : " << 0.5 * f1 * f2 << " sqr unit\n";
            break;
        // sphere
        case 5:
            cout << "Enter radius : ";
            cin >> f1;
            cout << "Diameter : " << 2 * f1 << " unit\n";
            cout << "Surface area : " << 4 * PI * f1 * f1 << " sqr unit\n";
            cout << "Volume : " << (4 * PI * f1 * f1 * f1) / 3 << " cube unit\n";
            break;
        // cube
        case 6:
            cout << "Enter side : ";
            cin >> f1;
            cout << "Lateral Surface Area (LSA) : " << 4 * f1 * f1 << " sqr unit\n";
            cout << "Total Surface Are (TSA) : " << 6 * f1 * f1 << " sqr unit\n";
            cout << "Volume : " << pow(f1, 3) << " cube unit\n";
            cout << "Diagonal : " << sqrt(3) * f1 << " unit\n";
            break;
        // cuboid
        case 7:
            cout << "Enter length, breadth and height : ";
            cin >> f1 >> f2 >> f3;
            cout << "Lateral Surface Area (LSA) : " << 2 * f3 * (f1 + f2) << " sqr unit\n";
            cout << "Total Surface Area (TSA) : " << 2 * ((f1 * f2) + (f2 * f3) + (f3 * f1)) << " sqr unit\n";
            cout << "Volume : " << f1 * f2 * f3 << " cube unit\n";
            cout << "Diagonal " << sqrt((f1 * f1) + (f2 * f2) + (f3 * f3)) << " unit\n";
            break;
        // cone
        case 8:
            cout << "Enter radius : ";
            cin >> f1;
            cout << "Enter height : ";
            cin >> f2;
            f3 = sqrt((f1 * f1) + (f2 * f2)); // slant height
            cout << "Slant height : " << f3 << " unit\n";
            cout << "Base area : " << PI * f1 * f1 << " sqr unit\n";
            cout << "Lateral Surface Area : " << PI * f1 * f3 << " sqr unit\n";
            cout << "Total Surface Area : " << PI * f1 * (f3 + f1) << " sqr unit\n";
            cout << "Volume : " << (PI * f1 * f1 * f2) / 3.0 << " cube unit\n";
            break;
        // cylinder
        case 9:
            cout << "Enter radius : ";
            cin >> f1;
            cout << "Enter height : ";
            cin >> f2;
            cout << "Lateral Surface Area : " << 2 * PI * f1 * f2 << " sqr unit\n";
            cout << "Total Surface Area : " << (2 * PI * f1 * f2) + (2 * PI * f1 * f1) << " sqr unit\n";
            cout << "Volume : " << PI * f1 * f1 * f2 << " cube unit\n";
            break;
        // hemisphere
        case 10:
            cout << "Enter radius : ";
            cin >> f1;
            cout << "Diameter : " << 2 * f1 << " unit\n";
            cout << "Surface Area : " << 3 * PI * f1 * f1 << " sqr unit\n";
            cout << "Volume : " << (2 * PI * f1 * f1 * f1) / 3.0 << " cube unit\n";
            break;
        // find the third angle of a triangle
        case 11:
            cout << "Enter first angle : ";
            cin >> f1;
            cout << "Enter second angle : ";
            cin >> f2;
            f3 = 180 - (f1 + f2);
            cout << "Third angle is : " << f3 << endl;
            break;
        // find thre area of equilateral triangle
        case 12:
            cout << "Enter side of equilateral triangle : ";
            cin >> f1;
            f2 = (sqrt(3) / 4) * (f1 * f1);
            cout << "Area of the quilateral triangle is : " << f2 << endl;
            break;
        default:
            cout << "Invalid choice\n";
        }
        break;
    // Multiplication table
    case 3:
        cout << "Enter a number : ";
        cin >> n1;
        for (n2 = 1; n2 <= 10; n2++)
        {
            cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        }
        break;
    // Fibonacci Series
    case 4:
        cout << "Enter the last term : ";
        cin >> n4;
        n1 = 0;
        n2 = 1;
        while (n2 < n4)
        {
            cout << n2 << "\t";
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        break;
    // Max between two
    case 5:
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        if (n1 == n2)
            cout << "Both are equal\n";
        else if (n1 > n2)
            cout << n1 << " is greater\n";
        else
            cout << n2 << " is greater\n";
        break;
    // Max between three
    case 6:
        cout << "Enter three numbers : ";
        cin >> n1 >> n2 >> n3;
        if (n1 > n2)
        {
            if (n1 > n3)
                cout << n1 << " is greater\n";
            else
                cout << n3 << " is greater\n";
        }
        else
        {
            if (n2 > n3)
                cout << n2 << " is greater\n";
            else
                cout << n3 << " is greater\n";
        }
        break;
    // swap two numbers
    case 7:
        cout << "Enter first number : ";
        cin >> n1;
        cout << "Enter Second number : ";
        cin >> n2;
        swap(&n1, &n2);
        cout << "First number : " << n1 << endl
             << "Second number : " << n2 << endl;
        break;
    // ASCII value of a character
    case 8:
        cout << "Enter a character : ";
        cin >> c1;
        cout << "ASCII value : " << (int)c1 << endl;
        break;
    //  Reverse of a number
    case 9:
        cout << "Enter a number : ";
        cin >> n1;
        while (n1 > 0)
        {
            n2 = n1 % 10;
            n3 = (n3 * 10) + n2;
            n1 /= 10;
        }
        cout << "Reverse : " << n3 << endl;
        break;
    // HCF and LCM
    case 10:
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        cout << "HCF : " << hcf(n1, n2) << endl;
        cout << "LCM : " << n1 * n2 / hcf(n1, n2) << endl;
        break;
    // Co-prime or not
    case 11:
        cout << "Enter two numbers : ";
        cin >> n1 >> n2;
        if (hcf(n1, n2) == 1)
            cout << "Co-prime\n";
        else
            cout << "Not co-prime\n";
        break;
    // Vowel or consonent
    case 12:
        cout << "Enter a letter : ";
        cin >> c1;
        if (c1 >= 'a' && c1 <= 'z' || c1 >= 'A' && c1 <= 'Z')
        {
            if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u')
                cout << c1 << " is vowel\n";
            else if (c1 == 'A' || c1 == 'E' || c1 == 'I' || c1 == 'O' || c1 == 'U')
                cout << c1 << " is vowel\n";
            else
                cout << c1 << " is not consonent\n";
        }
        else
            cout << "Not an alphabet ! \n";
        break;
    //  ASCII table
    case 13:
        for (n1 = 0; n1 <= 255; n1++)
        {
            cout << n1 << "\t" << (char)n1 << endl;
        }
        break;
    //  Palindrome or not
    case 14:
        cout << "Enter a number : ";
        cin >> n1;
        n4 = n1;
        while (n1 > 0)
        {
            n2 = n1 % 10;
            n3 = (n3 * 10) + n2;
            n1 /= 10;
        }
        if (n4 == n3)
        {
            cout << n4 << " is palindrome \n";
        }
        else
        {
            cout << n4 << " is not palindrome \n";
        }
        break;
    //  Armstrong or not
    case 15:
        cout << "Enter a number : ";
        cin >> n1;
        n4 = n1;
        n3 = 0;
        while (n1 > 0)
        {
            n2 = n1 % 10;
            n3 = n3 + pow(n2, 3);
            n1 /= 10;
        }
        if (n4 == n3)
        {
            cout << n4 << " is armstrong\n";
        }
        else
        {
            cout << n4 << " is not armstrong\n";
        }
        break;
    // Prime or not
    case 16:
        cout << "Enter a number : ";
        cin >> n1;
        for (n2 = 2; n2 < n1; n2++)
        {
            if (n1 % n2 == 0)
            {
                break;
            }
        }
        if (n2 == n1)
        {
            cout << n1 << " is prime number\n";
        }
        else
        {
            cout << n1 << " is not prime number\n";
        }
        break;
    // Temperature converter
    case 17:
        cout << "1. Celcius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celcius\n";

        cout << "\nEnter your choice : ";
        cin >> n1;

        switch (n1)
        {
        case 1:
            cout << "Enter temperature in celcius : ";
            cin >> f1;
            cout << "Temperature : " << f1 * 9 / 5 + 32 << (char)248 << " F\n"; // ascii value for ° is 248
            break;
        case 2:
            cout << "Enter temperature in fahrenheit : ";
            cin >> f1;
            cout << "Temperature : " << (f1 - 32) * 5 / 9 << (char)248 << " C\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
        break;
    // squre root of a number
    case 18:
        cout << "Enter a number : ";
        cin >> f1;
        cout << "Square root of " << f1 << " is " << sqrt(f1) << endl;
        break;
    // power of a number
    case 19:
        cout << "Enter base : ";
        cin >> f1;
        cout << "Enter exponent : ";
        cin >> f2;
        cout << "Power : " << pow(f1, f2) << endl;
        break;
    // Heron's formula
    case 20:
        cout << "Enter three sides : ";
        cin >> f1 >> f2 >> f3;
        f4 = (f1 + f2 + f3) / 2.0;
        cout << "Area is : " << sqrt(f4 * (f4 - f1) * (f4 - f2) * (f4 - f3)) << " sqr unit\n";
        break;
    // leap year
    case 21:
        cout << "Enter a year : ";
        cin >> n1;
        if (n1 % 400 == 0 || (n1 % 4 == 0 && n1 % 100 != 0))
        {
            cout << n1 << " is leap year\n";
        }
        else
        {
            cout << n1 << " is not leap year\n";
        }
        break;
    // sum of n series
    case 22:
        cout << "Enter last term of series : ";
        cin >> n1;
        n3 = 0;
        for (n2 = 1; n2 <= n1; n2++)
        {
            n3 += n2;
        }
        cout << "Sum is : " << n3 << endl;
        break;
    // patterns
    case 23:
        cout << "1. Half pyramid\n";
        cout << "2. Mirrored Half pyramid\n";
        cout << "3. Inverted half pyramid\n";
        cout << "4. Mirrored Inv half pyramid\n";
        cout << "5: Pyramid\n";
        cout << "6: Inverted pyramid\n";
        cout << "7: Rectangle\n";
        cout << "8: Hollow rectangle\n";
        cout << "9: Hollow Half Pyramid\n";
        cout << "10: Hollow inverted half pyramid\n";

        cout << "Enter your choice : ";
        cin >> n2;
        //cout << "Enter symbol : ";
        //cin >> c1;
        c1 = '*';
        cout << "Enter number of rows : ";
        cin >> n1;
        switch (n2)
        {
        // half pyramid
        case 1:
            for (n3 = 1; n3 <= n1; n3++)
            {
                for (n4 = 1; n4 <= n3; n4++)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        // mirrored half pyramid
        case 2:
            for (n2 = 1; n2 <= n1; n2++)
            {

                for (n3 = n1; n3 >= n2; n3--)
                {
                    cout << "  ";
                }
                for (n4 = 1; n4 <= n2; n4++)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        // inverted half pyramid
        case 3:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = n1; n3 >= n2; n3--)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        // mirrored inv half pyramid
        case 4:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = 1; n3 <= n2; n3++)
                {
                    cout << "  ";
                }
                for (n4 = n1; n4 >= n2; n4--)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        // pyramid
        case 5:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = n1; n3 >= n2; n3--)
                {
                    cout << " ";
                }
                for (n4 = 1; n4 <= n2; n4++)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        // inverted pyramid
        case 6:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = 1; n3 <= n2; n3++)
                {
                    cout << " ";
                }
                for (n4 = n1; n4 >= n2; n4--)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        case 7:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = 1; n3 <= n1; n3++)
                {
                    cout << c1 << " ";
                }
                cout << endl;
            }
            break;
        // hollow rectangle
        case 8:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = 1; n3 <= n1; n3++)
                {
                    if (n2 == 1 || n3 == 1 || n2 == n1 || n3 == n1)
                    {
                        cout << c1 << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << "\n";
            }
            break;
        // hollow half pyramid
        case 9:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = 1; n3 <= n2; n3++)
                {
                    if (n2 == 1 || n2 == n1 || n3 == 1 || n3 == n2)
                    {
                        cout << c1 << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        case 10:
            for (n2 = 1; n2 <= n1; n2++)
            {
                for (n3 = n1; n3 >= n2; n3--)
                {
                    if (n2 == 1 || n3 == n1 || n3 == n2)
                    {
                        cout << c1 << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        default:
            cout << "Invalid choice !";
            break;
        }
        break;
        //// roots of quadratic eq
        //case 24:
        //    roots();
        //    break;
    // length conversion
    case 24:
        cout << "1: Centimeter to Meter , Kilometer\n";
        cout << "2: Meter to Centimeter , Kilometer\n";
        cout << "3: Kilometer to Centimeter , Meter\n";
        cout << "Enter your choice : ";
        cin >> n4;
        switch (n4)
        {
        case 1:
            cout << "Enter length in Centimeter : ";
            cin >> f1;
            f2 = f1 / 100;
            f3 = f1 / 1000;
            cout << "Lenght in Meter : " << f2 << endl;
            cout << "Lenght in Kilometer : " << f3 << endl;
            break;
        case 2:
            cout << "Enter length in Meter : ";
            cin >> f1;
            f2 = f1 * 100;
            f3 = f1 / 10;
            cout << "Length in Centimeter : " << f2 << endl;
            cout << "Length in Kilometer : " << f3 << endl;
            break;
        case 3:
            cout << "Enter length in Kilometer : ";
            cin >> f1;
            f2 = f1 * 1000;
            f3 = f1 * 100;
            cout << "Length in Centimeter : " << f2 << endl;
            cout << "Length in Meter : " << f3 << endl;
            break;
        default:
            cout << "Invalid choice !\n";
        }
        break;
    // time converter
    case 25:
        cout << "1: Seconds to Minutes, Hours\n";
        cout << "2: Minutes to Seconds, Hours\n";
        cout << "3: Hours to Seconds, Minutes\n";
        cout << "4: Days to Weeks, Months, Years\n";
        cout << "5: Weeks to Days, Months, Years\n";
        cout << "6: Months to Days, Weeks, Years\n";
        cout << "7: Years to Days, Weeks, Years\n";
        cout << "Enter your choice : ";
        cin >> n4;
        switch (n4)
        {
        case 1:
            cout << "Enter Seconds : ";
            cin >> f1;
            cout << "Minute(s) : " << f1 / 60 << endl;
            cout << "Hour(s) : " << f1 / (60 * 60) << endl;
            break;
        case 2:
            cout << "Enter Minutes : ";
            cin >> f1;
            cout << "Second(s) : " << f1 * 60 << endl;
            cout << "Hour(s) : " << f1 / 60 << endl;
            break;
        case 3:
            cout << "Enter Hours : ";
            cin >> f1;
            cout << "Second(s) : " << f1 * 60 * 60 << endl;
            cout << "Minute(s) : " << f1 * 60 << endl;
            break;
        case 4:
            cout << "Enter number of days : ";
            cin >> f4;
            f1 = f4 / 7.0;
            f2 = f4 / 30.417;
            f3 = f4 / 365.0;
            cout << "Week(s) equivalent to " << f4 << " Day(s) : " << f1 << endl;
            cout << "Month(s) equivalent to " << f4 << " Day(s) : " << f2 << endl;
            cout << "Year(s) equivalent to " << f4 << " Day(s) : " << f3 << endl;
            break;
        case 5:
            cout << "Enter number of Weeks : ";
            cin >> f4;
            f1 = f4 * 7;
            f2 = f4 / 4.345;
            f3 = f4 / 52.143;
            cout << "Days(s) equivalent to " << f4 << " Week(s) : " << f1 << endl;
            cout << "Months(s) equivalent to " << f4 << " Week(s) : " << f2 << endl;
            cout << "Year(s) equivalent to " << f4 << " Week(s) : " << f3 << endl;
            break;
        case 6:
            cout << "Enter number of Months : ";
            cin >> f4;
            f1 = f4 * 30.417;
            f2 = f4 * 4.345;
            f3 = f4 / 12.0;
            cout << "Days(s) equivalent to " << f4 << " Month(s) : " << f1 << endl;
            cout << "Week(s) equivalent to " << f4 << " Month(s) : " << f2 << endl;
            cout << "Year(s) equivalent to " << f4 << " Month(s) : " << f3 << endl;
            break;
        case 7:
            cout << "Enter number of years : ";
            cin >> f4;
            f1 = f4 * 365;
            f2 = f4 * 52.143;
            f3 = f4 * 12;
            cout << "Day(s) equivalent to " << f4 << " year(s) : " << f1 << endl;
            cout << "Week(s) equivalent to " << f4 << " year(s) : " << f2 << endl;
            cout << "Month(s) equivalent to " << f4 << " year(s) : " << f3 << endl;
            break;
        default:
            cout << "Invalid choice !";
        }
        break;
    default:
        cout << "Invalid choice\n";
    }

    cout << "\n\nPress 'Y/y' to re-run (any other key to end): ";
    c1 = getch();
    cout << "\n\n";
    if (c1 == 'Y' || c1 == 'y')
        goto reRun;

    cout << "\n*** END OF PROGRAM ***";
    //getch();
    return 0;
}

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int hcf(int n1, int n2)
{
    int h;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            h = i;
        }
    }
    return h;
}
