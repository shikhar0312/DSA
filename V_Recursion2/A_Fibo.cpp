#include <iostream>
using namespace std;

// Without Recusrion

/*

int main()
{
    int a = 0;
    int b = 1;
    int sum;

    int n;
    cout << "Enter : ";
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    cout << b << endl;
}

*/

// Recursion
int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    cout << fibo(6);
}