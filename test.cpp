#include <iostream>
using namespace std;

class MyClass
{
public:
    int x = 15;

protected:
    int y = 100;
};

class childClass : public MyClass
{
public:
    void getPoints()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
    }
};

int main()
{
    childClass c1;

    c1.getPoints();

    return 0;
}