#include <iostream>
#include <vector>
#include <algorithm> // 🔹 needed for sort()

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(41);
    vec.push_back(5);
    vec.push_back(61);
    vec.push_back(17);

    cout << "Before sorting:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end()); // ✅ sorts in ascending order

    cout << "After sorting:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;
}
