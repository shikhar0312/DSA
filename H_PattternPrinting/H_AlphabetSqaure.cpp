#include <iostream>
using namespace std;
int main()
{
    // Print Alphabet Sqaure

    // ABC
    // ABC
    // ABC

    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char a = 65;
        for (int j = 1; j <= n; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}