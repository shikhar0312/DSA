#include <iostream>
using namespace std;
int main()
{
    int a = 1, n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
}