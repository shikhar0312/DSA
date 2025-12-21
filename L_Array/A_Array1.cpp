#include <iostream>
using namespace std;

int main()
{
    // Array is list to store similar datatypes

    //  Syntax and Declaration

    int x[10];
    x[0] = 11;
    x[3] = 13;
    cout << x[3] << endl;

    for (int i = 0; i < 7; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 7; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}