/* if a ball is dropped from a certain height , then calculate time taken to reach
 the ground.*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    const float g = 9.8; // acceleration due to gravity 
    float height;
    float v;    // final velocity
    float time; // time taken

    cout << "Enter height in meter : ";
    cin >> height;

    v = sqrt(2 * g * height);

    time = v / g;

    cout << "Time taken to reach the ground : " << time << " seconds" << endl;
    cout << "The velocity of the body on reaching the ground : " << v << " m/s" << endl;

    getch();
    return 0;
}
