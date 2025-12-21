#include <iostream>
using namespace std;
int main()
{
    // Print a Number Sqaure

    // 1 2 3
    // 1 2 3
    // 1 2 3

    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}