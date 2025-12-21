#include <iostream>
#include <vector>
using namespace std;

// Sort Function

void Sort(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    int temp;
    while (i < j)
    {
        if (v[i] < 0)
            i++;
        if (v[j] > 0)
            j--;
        if (i > j)
            break;
        if (v[i] > 0 && v[j] < 0)
        {

            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> vec;

    vec.push_back(4);
    vec.push_back(-1);
    vec.push_back(5);
    vec.push_back(-4);
    vec.push_back(4);
    vec.push_back(-2);
    vec.push_back(4);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    Sort(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}