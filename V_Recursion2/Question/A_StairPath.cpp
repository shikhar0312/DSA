#include <iostream>
using namespace std;

// for upto 3 steps can step up at a time
int Stairpath(int n)
{
    if (n == 2 || n == 1)
        return n;
    if (n == 3)
        return 4;
    return Stairpath(n - 1) + Stairpath(n - 2) + Stairpath(n - 3);
}

int main()
{

    cout << Stairpath(5) << endl;
}