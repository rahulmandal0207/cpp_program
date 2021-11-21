#include <iostream>

using namespace std;

class Average
{
private:
    float num1;
    float num2;
    float num3;
    float avg;

public:
    Average(float a, float b, float c) : num1(a), num2(b), num3(c) {}

    void caculate()
    {
        avg = (num1 + num2 + num3) / 3.0;
        cout << avg << endl;
    }
};

int main()
{
    Average(4, 5, 6).caculate();
}