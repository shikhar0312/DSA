#include <iostream>
using namespace std;
int main()
{
    char ch;
    int a, b;
    cout << "Enter the number";
    cin >> a;
    cout << " ";
    cin >> ch;
    cout << "Enter the second number";
    cin >> b;
    if (ch == '+')
    {
        cout << a + b << endl;
    }
    else if (ch == '-')
    {
        cout << a - b;
    }
    else if (ch == '*')
    {
        cout << a * b;
    }
    else if (ch == '/')
    {
        cout << a / b;
    }
}