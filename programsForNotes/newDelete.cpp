#include <iostream>
using namespace std;

int main()
{
    int *ptr;      // integer pointer variable declaration
    ptr = new int; // allocating memory to the pointer variable ptr
    *ptr = 5;
    cout << "Value of pointer variable : " << *ptr;
    delete ptr; // deleting the memory block ptr is pointing to.
    cout << "\nValue after de-allocation : " << *ptr;
    
    return 0;
}