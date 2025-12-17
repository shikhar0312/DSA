#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    // Pre Increment ++x first increment then use
    cout << ++x << endl; // first increment 11 then print

    // Post Increment x++ first use then increment
    cout << x++ << endl; // Still gives 11 then increment
    cout << x << endl;
}