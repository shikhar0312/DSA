#include <iostream>
#include <string>
using namespace std;

int main()
{
    // In C++ string are mutable but not in java

    // Update all the even position to a

    // Inputing a string of length n

    string str;
    cout << "Enter str";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
            str[i] = 'a';
    }

    cout << "The new str will be " << str << endl;
}
