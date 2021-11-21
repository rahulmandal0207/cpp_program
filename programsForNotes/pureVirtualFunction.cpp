#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog says: BowW BowW\n";
    }
};

int main()
{
    Dog d;
    d.makeSound();
    return 0;
}