/*

Method 1
#include <iostream>
using namespace std;
int main()
{
    // Binary Triangle

    // 1
    // 01
    // 101
    // 0101

    int n;
    cout << "Enter n";
    cin >> n;
    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        if (a % 2 == 0)
            a = 0;
        else
            a = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << a;

            // flipping
            if (a == 1)
                a = 0;
            else
                a = 1;
        }
        cout << endl;
    }
}

*/

// Method 2

#include <iostream>
using namespace std;
int main()
{
    // Binary Triangle

    // 1
    // 01
    // 101
    // 0101

    int n;
    cout << "Enter n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                cout << 1;
            }
            else if (((i % 2 == 0) & (j % 2 == 0)) || ((i % 2 != 0) & (j % 2 != 0)))

            // ((i % 2 == 0) & (j % 2 == 0)) || ((i % 2 != 0) & (j % 2 != 0)) = (i+j)%2==0

            {
                cout << 1;
            }

            else
                cout << 0;
        }
        cout << endl;
    }
}
