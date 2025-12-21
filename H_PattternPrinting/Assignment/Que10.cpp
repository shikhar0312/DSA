#include <iostream>
using namespace std;
int main()
{
    /*
    1
    21
    321

    */
    int n;
    cout << "enter n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = n;
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}