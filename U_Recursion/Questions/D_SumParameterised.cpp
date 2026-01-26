#include <iostream>
using namespace std;
// Sum from 1 to n (paramerised)

void sum1toN(int num, int n)
{
    if (n == 0)
    {
        cout << num << endl;
        return;
    }

    sum1toN(num + n, n - 1);
}

int main()
{
    sum1toN(0, 10);
}