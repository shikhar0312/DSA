#include <iostream>
using namespace std;

// Use for reptition of code

// Syntax

// ReturnType FunctionName(aruguments)
void Func()
{
    cout << "Good Morning" << endl;
    cout << "Have a nice day" << endl;
}

void StarTriabgle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "@";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Enter t";
    cin >> t;
    Func();
    StarTriabgle(t);
}