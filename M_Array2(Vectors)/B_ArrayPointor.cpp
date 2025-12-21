#include <iostream>
using namespace std;
int main()
{
    // Pointer in array
    int arr[5] = {1, 2, 3, 4, 5};

    // In array arr shows it's address not value hence

    int *ptr = arr;

    int *ptr0 = &arr[0];

    cout << ptr;
    cout << endl
         << ptr0 << endl;
    cout << ptr[2] << endl;

    // Second method of printing an array

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << ' ';
        ptr++; // It means move to next pointer
    }

    ptr = arr;

    cout << endl;

    // Third Method

    for (int i = 0; i < 5; i++)
    {
        cout << i[arr] << ' '; // or i[ptr]
    }
}
