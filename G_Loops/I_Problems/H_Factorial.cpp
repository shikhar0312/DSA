#include <iostream>
using namespace std;
int main()
{
    // Facorial of a number
    int n, a, sum = 1;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << sum << endl;
}