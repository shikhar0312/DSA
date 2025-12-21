#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n";
    int n, i;
    cin >> n;
    for (i = n; i <= (n * 10); i += n)
    {
        cout << i << endl;
    }
}