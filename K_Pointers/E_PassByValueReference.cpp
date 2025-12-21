#include <iostream>
using namespace std;

// Pass by value
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }

// Pass by Reference

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int x = 15;
    int y = 20;
    cout << "x = " << x << " y = " << y << endl;

    swap(&x, &y);
    cout << "x = " << x << " y = " << y << endl;
}