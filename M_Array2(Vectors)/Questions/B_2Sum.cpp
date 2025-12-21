// Leetcode question 2 sum

#include <iostream>
using namespace std;

int main()
{
    // 1 3 2 4 3 4 1 6. target = 7

    int target = 7;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == target)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}