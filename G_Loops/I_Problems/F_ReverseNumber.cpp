#include <iostream>
using namespace std;
int main()
{
    int n, a, num = 0;
    cin >> n;
    while (n > 0)
    {
        num *= 10;
        a = n % 10;

        n /= 10;
        num = a + num;
        // num *= 10;
    }
    cout << num << endl;
}