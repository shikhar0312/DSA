#include <iostream>
using namespace std;
int main()
{
    // Seperate Variable
    int n, i, a = 3;
    cout << "Enter n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << a << " ";
        a += 4; // 3 7 11 15 ...
    }
}