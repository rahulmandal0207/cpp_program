#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Shape
{
protected:
    float radius;
    float length;
    float width;
    float height;
    const float PI = 3.14159;
};

class Circle : public Shape
{
public:
    Circle(float r)
    {
        radius = r;
    }

    float getArea()
    {
        return (PI * radius * radius);
    }

    float getCircumference()
    {
        return (2 * PI * radius);
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float getArea()
    {
        return (length * width);
    }
};

class Square : public Rectangle
{
public:
    Square(float l) : Rectangle(l, l)
    {
        length = l;
    }

    float getArea()
    {
        return (length * length);
    }
};

class Triangle : public Shape
{
public:
    Triangle(float base, float height)
    {
        width = base;
        this->height = height;
    }

    float getArea()
    {
        return ((width * this->height) / 2.0);
    }
};

class Sphere : public Shape
{
public:
    Sphere(float r)
    {
        radius = r;
    }
    float getArea()
    {
        return (4 * PI * radius * radius);
    }

    float getVolume()
    {
        return (4 * PI * radius * radius * radius) / 3.0;
    }
};

class Cuboid : public Shape
{
public:
    Cuboid(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    float getArea()
    {
        return (2 * ((length * width) + (width * height) + (height * length)));
    }

    float getVolume()
    {
        return (length * width * height);
    }
};

class Cube : public Cuboid
{
public:
    Cube(float l) : Cuboid(l, l, l)
    {
        length = l;
    }

    float getArea()
    {
        return (6 * length * length);
    }

    float getVolume()
    {
        return (length * length * length);
    }
};

class Cone : public Shape
{
public:
    Cone(float r, float h)
    {
        radius = r;
        height = h;
    }
    float getArea()
    {
        return (PI * radius * (radius + sqrt((height * height) + (radius * radius))));
    }

    float getVolume()
    {
        return ((PI * radius * radius * height) / 3.0);
    }
};

int main()
{

    Circle circle(5.0);
    cout << "Area of circle is : " << circle.getArea() << endl;
    cout << "Circumference of circle is : " << circle.getCircumference() << endl;

    Rectangle rectangle(4, 5);
    cout << "Area of rectangle : " << rectangle.getArea() << endl;

    Square square(5);
    cout << "Area of square : " << square.getArea() << endl;

    Triangle triangle(4, 5);
    cout << "Area of triangle : " << triangle.getArea() << endl;

    Sphere sphere(5);
    cout << "Total surface area of sphere : " << sphere.getArea() << endl;
    cout << "Volume of sphere : " << sphere.getVolume() << endl;

    Cuboid cuboid(4, 5, 6);
    cout << "Total surface area of cuboid : " << cuboid.getArea() << endl;
    cout << "Volume of cuboid : " << cuboid.getVolume() << endl;

    Cube cube(5);
    cout << "Total surface area cube : " << cube.getArea() << endl;
    cout << "Voume of cube : " << cube.getVolume() << endl;

    Cone cone(4, 5);
    cout << "Total surface area of cone : " << cone.getArea() << endl;
    cout << "Volume of cone : " << cone.getVolume() << endl;

    getch();
    return 0;
}