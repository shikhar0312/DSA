#include <iostream>
using namespace std;
int main()
{
    int n, a, num = 0;
    cin >> n;
    while (n > 0)
    {
        a = n % 10;
        // cout << a << endl;
        n /= 10;
        num = num + a;
    }
    cout << num << endl;
}