#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    int num;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    // Reversing the array

    vector<int> arr;

    for (int i = vec.size() - 1; i >= 0; i--)
    {
        arr.push_back(vec.at(i));
    }

    cout << "The the reversed array is : " << endl
         << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << endl;
    }
}