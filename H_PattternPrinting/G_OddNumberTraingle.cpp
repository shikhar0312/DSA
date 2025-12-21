// Print Odd Number Triangle

// 1
// 13
// 135
// 1357

// #include <iostream>
// using namespace std;
// int main()
// {
//     // Without Using AP
//     int n;
//     cout << "Enter n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << a;
//             a += 2;
//         }
//         cout << endl;
//     }
// }

// With Using AP

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
