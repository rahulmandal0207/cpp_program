#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];

    // copy str1 into str3
    strcpy(str3, str1);
    cout << "str3 : " << str3 << endl;

    // concatenates str2 in the end of str1
    strcat(str1, str2);
    cout << "str1 : " << str1 << endl;

    // returns the length of str1
    int length = strlen(str1);
    cout << "Length of str1 : " << length << endl;

    // compare str1 and str2 and return 0 if both are same
    cout << "compare str1 and str2 : " << strcmp(str1, str2) << endl;

    // reverse str1
    strrev(str1);
    cout << "str1 : " << str1 << endl; 

    // return str2 in lowercase
    strlwr(str2);
    cout << "str2 : " << str2 << endl; 

    // return str2 in uppercase
    strupr(str2);
    cout << "str2 : " << str2 << endl; 

    getch();
    return 0;
}