#include <iostream>
using namespace std;
int main()
{
    // Memory Allocation

    int arr[5] = {0, 1, 2, 3, 4};

    // 16 bytes stored in memory and memory allocation in array is contionous in nature

    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    cout << arr << endl;
}