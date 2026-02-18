#include <iostream>
using namespace std;

// factorial Normal Method

void factUpto(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int f = 1;
        for (int j = 2; j <= i; j++)
        {
            f *= j;
        }
        cout << f << endl;
    }
} // But in this question time complexity is n^2

void factUpto2(int n)
{

    int f = 1;
    for (int i = 1; i <= n; i++)
    {

        f *= i;
        cout << f << endl;
    }
} // Time Complexity is n

int main()
{
    // factUpto(5);
    factUpto2(7);
}