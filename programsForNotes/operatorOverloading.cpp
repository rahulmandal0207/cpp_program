#include <iostream>
using namespace std;

class Point
{
private:
    int X, Y;

public:
    void setPoint(int x, int y)
    {
        X = x;
        Y = y;
    }

    void getPoint()
    {
        cout << "X = "<< X << ", Y = " << Y << endl;
    }

    Point operator+(Point &obj)
    {
        Point temp;
        temp.X = X + obj.X;
        temp.Y = Y + obj.Y;
        return temp;
    }
};

int main()
{
    Point p1, p2, p3;

    p1.setPoint(4, 5);
    p2.setPoint(6, 3);

    p3 = p1 + p2;

    p1.getPoint();
    p2.getPoint();
    p3.getPoint();

    return 0;
}