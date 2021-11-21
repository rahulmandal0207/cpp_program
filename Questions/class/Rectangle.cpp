/* Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively 
by creating a class named 'Rectangle' with a function named 'Area' which returns the area. 
Length and breadth are passed as parameters to its constructor. */

#include <iostream>

using namespace std;

class Rectangle
{
    float length;
    float breadth;
public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r1(4,5);
    cout << "Area is : " << r1.area() << endl;

    Rectangle r2(5,8);
    cout << "Area is : " << r2.area() << endl;
}