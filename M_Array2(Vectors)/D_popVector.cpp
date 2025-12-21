#include <iostream>
using namespace std;

int main()
{
    vector<int> v;  // size capacity
    v.push_back(6); // 1 1
    v.push_back(5); // 2 2
    v.push_back(7); // 3 4
    v.push_back(8); // 4 4
    v.push_back(6); // 5 8
    v.push_back(4); // 6 8
    v.push_back(1); // 7 8

    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is :" << v.capacity() << endl;

    cout << endl;

    // pop

    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is :" << v.capacity() << endl;

    // If we give size of vector then we can input in it like array

    // We can use at instead of []

    cout << v.at(2);

    // If we don't assing earleir then

    vector<int> s;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cout << "Enter x";
        cin >> x;
        s.push_back(x);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << s[i] << endl;
    }

    cout << "Size is :" << s.size() << endl;
    cout << "Capacity is :" << s.capacity() << endl;

    // Sorting

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}