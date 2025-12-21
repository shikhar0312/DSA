#include <iostream>
#include <vector>
using namespace std;

void swso(vector<int> &nums)
{

    int noz = 0;
    int noo = 0;
    int notw = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            noz++;
        else if (nums[i] == 1)
            noo++;
        else
            notw++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (i < noz)
            nums[i] = 0;
        else if (i < (noo + noz))
            nums[i] = 1;
        else
            nums[i] = 2;
    }
}

// Dutch flag algo

void soosw(vector<int> &v)
{
    int lo = 0;
    int mid = 0;
    int hi = v.size() - 1;
    while (mid <= hi)
    {
        if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }

        else if (v[mid] == 0)
        {
            int temp = v[mid];
            v[mid] = v[lo];
            v[lo] = temp;
            lo++;
            mid++;
        }

        else
            mid++;
    }
}

int main()
{
    vector<int> vec = {1, 1, 2, 2, 0, 0, 1};

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    soosw(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
