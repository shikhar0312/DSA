#include <iostream>
using namespace std;

int main()
{
    // 2 3 4 2 5 3  find last occurence of 2

    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);

    // Seaching from start

    int ele = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == 2)
            ele = i;
    }
    cout << ele << endl;

    // but this method is less optimised

    // Check it from backwards

    int elem = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v.at(i) == 2)
        {
            elem = i;
            break;
        }
    }
    cout << elem << endl;
}