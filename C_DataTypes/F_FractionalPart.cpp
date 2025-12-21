#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "enter a number";
    cin >> a;
    int b = (int)a;
    if (a < 0)
        b--;
    float c = a - b;
    cout << c << endl;
}