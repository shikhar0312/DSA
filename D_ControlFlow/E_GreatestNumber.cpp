#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number";
    cin >> a;
    cout << "Enter the number";
    cin >> b;
    cout << "Enter the number";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "The greatest number is " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The greatest number is " << b << endl;
    }
    else
    {
        cout << "The greatest number is " << c << endl;
    }
}