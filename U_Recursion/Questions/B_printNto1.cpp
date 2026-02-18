#include <iostream>
using namespace std;

// Printing N to 1

void print(int n)
{
    // Base Case
    if (n == 0)
        return;
    cout << n << endl;
    print(n - 1);
}

int main()
{
    print(6);
}