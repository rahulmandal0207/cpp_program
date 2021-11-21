/*
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by 
creating a class named 'Triangle' with a function to print the area and perimeter. */

#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
private:
    float A;
    float B;
    float C;

public:
    Triangle(float a, float b, float c)
    {
        A = a;
        B = b;
        C = c;
    }

    void caculate()
    {
        float semi_peri = (A + B + C) / 2.0;
        float area = sqrt(semi_peri * (semi_peri - A) * (semi_peri - B) * (semi_peri - C));
        cout << "Area is : " << area << endl;
        cout << "Perimeter is : " << A + B + C << endl;
    }
};

int main()
{
    Triangle t1(3, 4, 5);
    t1.caculate();
}