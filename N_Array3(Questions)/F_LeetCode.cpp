#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n)
{
    // int arr1[] = 1 2 3 0 0 0 int arr2[] = 2 5 6

        for (int i = 0; i < m; i++)
    {
        if (m > n)
            arr1[i] = arr2[i - p];
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 0, 0, 0};
    int arr2[] = {2, 5, 6};
    merge(arr1, 6, arr2, 3);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}