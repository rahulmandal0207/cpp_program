#include "enemy.h"
#include <iostream>

using namespace std;

class Ninja : public Enemy
{
public:
    void attack()
    {
        cout << "Ninja ! " << endl;
    }
};
