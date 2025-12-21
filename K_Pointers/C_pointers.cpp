#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    int *p = &x;

    float y = 4.5;
    float *b = &y;

    cout << &x << endl;
    cout << p << endl;

    cout << &y << endl;
    cout << b << endl;

    // Syntax Problem

    // int x = 12, y = 15;
    // int* p1 = &x , p2 = &y;  Error

    // Here p1 is pointer but p2 is integer

        int x = 12, y = 15;
    int *p1 = &x, p2 = y;
}