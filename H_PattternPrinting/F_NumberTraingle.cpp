#include <iostream>
using namespace std;
int main()
{
    // Print Number Triangle

    // 1
    // 12
    // 123

    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}