#include <iostream>
using namespace std;

class Shape
{
private:
    float width;
    float height;

public:
    void setDimension(float w, float h)
    {
        width = w;
        height = h;
    }

    friend void getDimension(Shape); // decleration of friend function
};

void getDimension(Shape s) // definition of friend function
{
    cout << "Width : " << s.width << endl;
    cout << "Height : " << s.height << endl;
}

int main()
{
    Shape s1;

    s1.setDimension(4, 5);

    getDimension(s1); // calling friend function

    return 0;
}