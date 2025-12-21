#include <iostream>
using namespace std;
int main()
{
    // Print Star Traingle

    // 1
    // 23
    // 456

    int n;
    cout << "Enter n";
    cin >> n;
    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}