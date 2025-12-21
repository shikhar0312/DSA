#include <iostream>
using namespace std;

int maxThree(int a, int b, int c)
{
    int max;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
        max = c;
    return max;
}

int main()
{
    int a, b, c;
    cout << "Enter Number";
    cin >> a;
    cout << "Enter Number";
    cin >> b;
    cout << "Enter Number";
    cin >> c;

    int max = maxThree(a, b, c);
    cout << "The max of these  numbers is " << max << endl;
}