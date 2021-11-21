#include <iostream>
using namespace std;

int main()
{

    int *a = new int;   // requesting block of memory for int
    *a = 34;            // assigning value to the memory block
    
    // reauesting block of memory for float and assigning value to it
    float *b = new float(3.14);

    int *arr = new int[5];  // requesting memory block for array of int
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;     // assigning values 
    }

    cout << "Value in the memeory block a pointing to : " << *a << endl;
    cout << "Value in the memeory block b pointing to : " << *b << endl;
    cout << "Values in the memeory block arr pointing to : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    delete a;       // freed the allocated memroy
    delete b;
    delete[] arr;   // freed the block of allocated memory

    return 0;
}