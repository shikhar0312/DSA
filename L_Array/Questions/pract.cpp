#include <iostream>
using namespace std;
int main()
{
    //  Duplicate

    int n;
    cout << "Enter";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value : ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << "The missing possitive number is " << i + 1 << endl;
            break;
        }
    }
}
