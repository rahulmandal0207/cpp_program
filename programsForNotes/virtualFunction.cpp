#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()    // virtual function definition
    {
        cout << "Animal is making sound\n";
    }

    void eat()
    {
        cout << "Animal is eating\n";
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog says: BowW BowW\n";
    }

    void eat()
    {
        cout << "Dog is eating\n";
    }
};

int main()
{
    Animal *a;
    Dog d;
    a = &d;

    a->makeSound(); // virtual function, binded at run-time
    a->eat();       // non-virtual function, binded at compile-time.

    return 0;
}