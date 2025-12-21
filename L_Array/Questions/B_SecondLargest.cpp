#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int n;
    cout << "Enter";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    int secondmax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (secondmax < arr[i] && arr[i] != max)
            secondmax = arr[i];
    }

    // Second Max

    cout << "The second max of array is " << secondmax << endl;
}