#include <iostream>
using namespace std;

// void gun()
// {
//     cout << "Hello India" << endl;
// }
// void fun()
// {
//     cout << "Hello World" << endl;
//     gun();
// }

void fun(int n)
{
    if (n == 0)
        return;
    cout << "Hello World" << endl;
    fun(n - 1);
}

void GoodMorning(int n)
{
    if (n == 0)
        return;
    cout << "Good Morning" << endl;
    GoodMorning(n - 1);
}

int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    GoodMorning(n);
}

// Good Morning n times
