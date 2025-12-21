#include <iostream>
using namespace std;

// In case of array , fuction always takes reference of array

void display(int a[], int size)
{
    // here a is pointer that points towards array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return;
}

void change(int b[])
{
    b[0] = 100;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Accessing thr elements of array in another function
    // Updation , pass by value / reference ?
    display(arr, size);
    cout << endl;
    change(arr);
    display(arr, size);
}