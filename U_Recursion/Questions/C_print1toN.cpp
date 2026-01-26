#include <iostream>
using namespace std;

// Prting 1 to n (after recursive call)
void print(int n)
{
    // Base Case
    if (n == 0)
        return;
    print(n - 1);
    cout << n << endl;
}

int main()
{
    print(6);
}