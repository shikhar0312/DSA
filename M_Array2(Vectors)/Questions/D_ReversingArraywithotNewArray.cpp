#include <iostream>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reverseArray(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    display(a);

    // Reversing same array using swap

    // int i = 0;
    // int j = a.size() - 1;
    // while (i <= j)
    // {
    //     // Swapping
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    //     i++;
    //     j--;
    // }
    // display(a);

    // Method 2

    for (int i = 0, j = a.size() - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    display(a);

    vector<int> b = {2, 3, 1, 1, 2, 4, 5};
    display(b);
    reverseArray(b);
    display(b);
}