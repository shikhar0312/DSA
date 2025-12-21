#include <iostream>
using namespace std;
int main()
{
    // Print Star Traingle

    //   *
    //  **
    // ***
    //  **
    //   *

    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "*";
            }
        }

        else
        {
            for (int k = 1; k <= (2 * n - i); k++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
