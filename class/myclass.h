#ifndef MYCLASS_H
#define MYCLASS_H

template <class T>
class Pair
{
private:
	T first, second;

public:
	Pair(T a, T b);
	Pair(T a);
	T bigger();
};

#endif