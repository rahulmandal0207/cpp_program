#include <iostream>
#include <conio.h>

using namespace std;

class Area
{
    float length, breadth;

public:
    void setDim(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void getArea()
    {
        cout << "Area is : " << length * breadth << endl;
    }
};

int main()
{
    Area r1;
    Area r2;
    r1.setDim(4, 6);
    r1.getArea();
    r2.setDim(5, 3);
    r2.getArea();
    return 0;
}