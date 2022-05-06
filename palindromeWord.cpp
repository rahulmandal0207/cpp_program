// word in palindrome or not

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char text[10];
    char rev[10];
    char original[10];

    cout << "Enter your word : ";
    gets(text);

    strcpy(original, text);

    strcpy(rev, strrev(text));

    if (strcmp(rev, original) == 0)
        cout << "Word is palindrome\n";
    else
        cout << "Word is not palindrome\n";

    getch();
    return 0;
}