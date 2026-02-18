#include <iostream>
using namespace std;

int pow(int n, int p)
{
    if (p == 0 || n == 1)
        return 1;
    int ans = pow(n, p / 2);
    if (p % 2 == 0)
        return ans * ans;
    else
        return ans * ans * n;
}

int main()
{
    cout << pow(2, 4) << endl;
}