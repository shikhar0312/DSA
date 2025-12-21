#include <iostream>
#include <vector>
using namespace std;

// 1 4 5 8
// 2 3 6 7 10  merge both => 1 2 3 4 5 6 7 8 10

void MergeArray(vector<int> &v, vector<int> &ve, vector<int> &vec)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < v.size() && j < ve.size())
    {
        if (v[i] < ve[j])
        {
            vec.push_back(v[i]);
            i++;
            k++;
        }
        else if (v[i] > ve[j])
        {
            vec.push_back(ve[j]);
            j++;
            k++;
        }
    }

    // For remaining element

    if (i == v.size()) // means i khtm ho gya
    {
        while (j < ve.size())
        {
            vec.push_back(ve[j]);
            k++;
            j++;
        }
    }

    if (j == ve.size()) // means i khtm ho gya
    {
        while (i < v.size())
        {
            vec.push_back(v[i]);
            k++;
            i++;
        }
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 7};
    vector<int> ve = {10, 11, 12};
    vector<int> rec;

    MergeArray(v, ve, rec);
    for (int i = 0; i < rec.size(); i++)
    {
        cout << rec[i] << " ";
    }
}