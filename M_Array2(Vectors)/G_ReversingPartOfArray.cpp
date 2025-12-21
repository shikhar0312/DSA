// Reversing part of an Array

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

void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5};
    display(v);

    reversePart(0, 4, v);
    display(v);
}