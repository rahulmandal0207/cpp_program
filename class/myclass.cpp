#include "myclass.h"

#include <iostream>

using namespace std;

template <class T>
Pair<T>::Pair(T a, T b) : first(a), second(b) {}

template <class T>
Pair<T>::Pair(T a)
{
    cout << a << " is not a character" << endl;
}

template <>
Pair<char>::Pair(char a)
{
    cout << a << " is a character" << endl;
}

template <class T>
T Pair<T>::bigger()
{
    return (first > second ? first : second);
}
