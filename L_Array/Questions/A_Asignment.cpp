#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    // 1.Product of elements in array

    // int pro = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     pro *= arr[i];
    // }

    // cout << pro << endl;

    // 2.Second Largest Element in one pass

    // By Sorting

    // for(int i=0;i<n;i++){

    // }

    // 3.Find the minimum value out of all elements in the array.

    // int min = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (min > arr[i])
    //         min = arr[i];
    // }
    // cout << min << endl;

    // 4.Given an array, predict if the array contains duplicates or not.

    // bool flag = false;

    // for (int i = 0; i < n; i++)
    // {
    //     int dup = arr[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] == dup)
    //             flag = true;
    //     }
    // }

    // if (flag == true)
    //     cout << "The elements contain Duplicate elements" << endl;
    // else
    //     cout << "The elements do not contain Duplicate elements" << endl;

    // 5.WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
}