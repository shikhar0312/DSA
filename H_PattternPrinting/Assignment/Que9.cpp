#include <iostream>
using namespace std;
int main()
{
    /*

    Flipped alphabet Triangle

    A
  A B
A B C

*/

    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}