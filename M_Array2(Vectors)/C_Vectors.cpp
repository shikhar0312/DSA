#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // It is a dynamic array

    // Array is very fast but it have fixed size

    // Declaration of vectors

    vector<int> v; // You don't need to mention size

    // for inputing do not use []

    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }

    cout << endl;

    // Size of vector -> It means number of elements in vector

    cout << v.size() << endl;

    cout << endl;

    // Capacity of Vector
    cout << v.capacity() << endl;
}