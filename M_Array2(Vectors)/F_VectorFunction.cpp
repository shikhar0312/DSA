#include <iostream>
using namespace std;

void change(vector<int> a)
{
    a[0] = 100;
}

void changeAdress(vector<int> &b)
{
    b.at(0) = 100;
}

// Vectors are passed by value
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(5);

    // printing before applyng function
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // Aplying function

    change(v);

    // printing after applyng function
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // As we can see no change hence we have to change the value by it's address

    // Applying second fucntions

    changeAdress(v);

    // printing after applyng second function
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}