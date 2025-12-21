#include <iostream>
using namespace std;
int main()
{
    // Print a Solid Sqaure

    //   ***
    //  ***
    // ***

    int n;
    cout << "Enter n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}