#include <iostream>
using namespace std;

class Shape
{
protected:
    float Width;
    float Height;

public:
    void setDimension(float w, float h)
    {
        Width = w;
        Height = h;
    }

    virtual float getArea() = 0;
};

class Rectangle : public Shape
{
public:
    float getArea()
    {
        return Width * Height;
    }
};

class Triangle : public Shape
{
public:
    float getArea()
    {
        return (Width * Height) / 2.0;
    }
};

int main()
{
    Rectangle r;
    Triangle t;

    r.setDimension(4, 5);
    cout << "Area of rectangle : " << r.getArea() << endl;

    t.setDimension(5, 7);
    cout << "Area of triangle : " << t.getArea() << endl;

    return 0;
}