#include <iostream>
using namespace std;

int fib(int p)
{
    if (p == 1)
    {
        return (1);
    }
    if (p == 0)
    {
        return (0);
    }
    return fib(p - 1) + fib(p - 2);
}

int main()
{
    int n;
    cout << "Enter";
    cin >> n;
    int a = fib(n);
    cout << "Fibonaci till " << n << " is " << a << endl;
}