#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> obj1 = {11, 22, 33, 44};
    cout << obj1.at(3) << endl;
    cout << obj1[3] << endl;
    cout << obj1.front() << endl;
    cout << obj1.back() << endl;

    obj1.fill(43);
    for (int i = 0; i < 5; i++)
    {
        cout << obj1.at(i) << " ";
    }

    array<int, 5> obj2 = {1, 2, 3, 4, 5};
    obj1.swap(obj2);

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << obj1.at(i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << obj2.at(i) << " ";
    }
    cout << endl;
    cout << "size is : " << obj1.size();

}
