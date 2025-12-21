#include <iostream>
using namespace std;
int main()
{
    //  Star Plus
    //      *
    //      *
    //  * * * * *
    //      *
    //      *

    int n;
    cout << "Enter n";
    cin >> n;
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        // Take middle value
        {
            if (j == mid || i == mid)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}