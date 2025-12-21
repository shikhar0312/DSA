#include <iostream>
using namespace std;
#include <vector>

// method 1

void Sort(vector<int> &v)
{
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noz++;
        else
            noo++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < noz)
            v[i] = 0;
        else
            v[i] = 1;
    }
}

// method 2

void sort(vector<int> &vec)
{
    int n = vec.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (vec[i] == 0)
            i++;
        if (vec[i] == 1)
            j--;
        if (i > j)
            break;
        if (vec[i] == 1 && vec[j] == 0)
        {
            vec[i] = 0;
            vec[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);

    cout << "Before sorting:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;

    // Sort(vec);
    sort(vec);

    cout << "After sorting:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;

    cout << endl;
}