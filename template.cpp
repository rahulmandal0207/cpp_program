#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b)
{
    return (a + b);
}

int main()
{
    // calling sum() with int arguments
    cout << "Sum is : " << sum<int>(2, 3) << endl;  
    // calling sum() with double arguments
    cout << "Sum is : " << sum<double>(2.2, 3.3) << endl;
    return 0;
}