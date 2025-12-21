
#include <iostream>
using namespace std;

// Formal Paramter (x and y)
void fun(int x = 10, int y = 15)
{
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
}

int main()
{
    // Acutal Paramters

    fun(12, 44);

    int a = 12;
    int b = 13;
    fun(a, b);

    // Default Values of argument

    // If you are giving default value then give it to each one unless it shows error

    fun();

    // If we give one value and other by default

    fun(4); // x = 4 and y = 15
}