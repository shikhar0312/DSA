#include <iostream>
using namespace std;
int main()
{
    // 1-2+3-4+5-6......n

    int n, Osum = 0, Esum = 0, sum = 0;
    cout << "Enter n";
    cin >> n;
    // It's good but unnessary Method 1

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //         Esum = Esum + i;
    //     else
    //         Osum = Osum + i;
    // }
    // cout << "Sum of series is eqaul to " << Osum - Esum << endl;

    // Method 2
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //         sum = sum + i;
    //     else
    //         sum = sum - i;
    // }
    // cout << "Sum of series is eqaul to " << sum << endl;

    // Method 3
    if (n % 2 == 0)
        sum = -n / 2;
    else
        sum = (-n / 2) + n;
    cout << "Sum of series is eqaul to " << sum << endl;
}