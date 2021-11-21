#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal
{
public:
    void makeSound()    // overriding makeSound() of base class
    {
        cout << "Dog says: BowW BowW...\n";
    }
};

int main()
{
    Dog d;
    d.makeSound();

    return 0;
}

