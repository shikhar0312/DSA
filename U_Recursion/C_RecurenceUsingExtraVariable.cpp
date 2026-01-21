#include <iostream>
using namespace std;

void print(int i, int n)
{
    // Base Case
    if (i > n)
        return;
    cout << i << endl;
    print(i + 1, n);
}

int main()
{
    print(1, 6);
}