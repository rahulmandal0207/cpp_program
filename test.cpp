#include <iostream>

using namespace std;

class Item
{
    static int m_count;

public:
    Item()
    {
        m_count++;
    }

    void getCount()
    {
        cout << "Count : " << m_count;
    }
};

int main()
{
    Item a;

    a.getCount();
    return 0;
}