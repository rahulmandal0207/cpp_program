#include <iostream>
#include <conio.h>

using namespace std;

class Maruti
{
public:
    Maruti() { cout << "Maruti "; }
};

class Suzuki
{
public:
    Suzuki() { cout << "Suzuki "; }
};

class Car : public Maruti, public Suzuki
{
public:
    Car(string name) { cout << name << endl; }
};

int main()
{
    Car c("Swift");
    Car c1("Desize");

    getch();
    return 0;
}