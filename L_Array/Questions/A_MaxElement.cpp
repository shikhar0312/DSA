#include <iostream>
#include <climits>

using namespace std;
int main()
{

    // Max element

    int n;
    cout << "Enter";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0]; // max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max << endl;
}