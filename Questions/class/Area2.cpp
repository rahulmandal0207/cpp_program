#include <iostream>

using namespace std;

class Area
{
private:
    float length;
    float breadth;

public:
    Area(float l, float b) : length(l), breadth(b) {}

    float returnArea() { return length * breadth; }
};

int main()
{
    int l, b;
    cout << "Enter length and breadth of reactangle : ";
    cin >> l >> b;
    Area r1(l, b);
    cout << r1.returnArea() << endl;
}