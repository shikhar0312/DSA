#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number";
    cin >> a;

    cout << "Enter the second number";
    cin >> b;
    char ch;
    cout << "Enter the operation ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
    }
}