#include "enemy.h"
#include <iostream>

using namespace std;

class Monster : public Enemy 
{
public:
    void attack()
    {
        cout << "Monster !" << endl;
    }
};
