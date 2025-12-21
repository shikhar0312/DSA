#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter number";
    cin >> n;
    int a = n;

    for (int i = 1; n > 0; i++)
    {
        n /= 10;
        count++;
    }
    if (a == 0)
        cout << "1 " << endl;
    else
        cout << count << endl;
}