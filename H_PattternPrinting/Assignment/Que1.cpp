#include <iostream>
using namespace std;
int main()
{
    // Print a Solid Sqaure

    // 111
    // 222
    // 333

    int n;
    cout << "Enter n";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a;
                }
        cout << endl;
        a++;
    }
}