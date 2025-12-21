#include <iostream>
using namespace std;
int main()
{
    // Find the greatest number between 3 numbers without using  && and ||
    int a, b, c;
    cout << "Enter the number";
    cin >> a;
    cout << "Enter the number";
    cin >> b;
    cout << "Enter the number";
    cin >> c;

    // Good try but their is better solution

    if (a > b)
    {
        if (a > c)
        {
            cout << "The greatest number is a = " << a << endl;
        }
        else // a < c
        {
            cout << "The greatest number is c = " << c << endl;
        }
    }
    else // a<b
    {
        if (b > c)
        {
            cout << "The greatest number is b = " << b << endl;
        }
        else // b < c
        {
            cout << "The greatest number is c = " << c << endl;
        }
    }
}
