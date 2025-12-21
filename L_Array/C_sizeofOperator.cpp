#include <iostream>
using namespace std;

int main()
{
    // Always give size of array or directly put vlue in it

    int arr[] = {1, 2, 3, 3, 455, 5, 5};
    // cout << arr[4];

    // sizeof Operator

    cout << endl
         << sizeof(arr) / sizeof(arr[0]);
}
