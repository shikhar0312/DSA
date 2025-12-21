#include <iostream>
using namespace std;
int main()
{
    // Sum of elemtns of array
    int n;
    cout << "Enter";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "The sum of all elements of array is " << sum << endl;
}