#include <iostream>
using namespace std;

int fact(int n)
{
    int fnum = 1;
    for (int i = 1; i <= n; i++)
    {
        fnum *= i;
    }
    return fnum;
}

int main()
{
    int n;
    cout << "Enter number";
    cin >> n;

    int factorial = fact(n);
    cout << factorial << endl;
}