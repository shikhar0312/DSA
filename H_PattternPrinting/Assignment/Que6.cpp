#include <iostream>
using namespace std;
int main()
{
    // Print a solid reactangle using *

    // m -> number of rows(Outer Loop Using endl)
    // n -> number of column

    int n, m;
    cout << "Enter both";
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || i == m || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}