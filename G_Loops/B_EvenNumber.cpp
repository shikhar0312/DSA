#include <iostream>
using namespace std;
int main()
{
    // even number till n

    // Method 1

    int n, i;
    cout << "Enter n";
    cin >> n;
    for (i = 2; i <= n; i += 2)
    {
        cout << i << endl;
    }

    // Method 2

    for (i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
            cout << i << endl;
    };
}