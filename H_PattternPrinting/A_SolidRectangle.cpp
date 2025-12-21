#include <iostream>
using namespace std;
int main()
{
    // Print a solid reactangle using *

    // m -> number of column
    // n -> number of rows(Outer Loop Using endl)

    int n, m;
    cout << "Enter both";
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}