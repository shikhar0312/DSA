#include <iostream>
using namespace std;
int main()
{
    // Arthimatic Progression
    int i, n, num = 100;
    cout << "Enter n";
    cin >> n;
    // 3 5 7 9 11 13 15
    for (i = 3; i <= ((2 * n) - 1); i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    // Negative Ap 100 97 94 91 ...
    for (int a = 1; a <= 34; a++)
    {
        cout << num << " ";
        num -= 3;
    }
}