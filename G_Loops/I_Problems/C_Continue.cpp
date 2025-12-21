#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        // Print odd Numbers using contiue
        if (i % 2 == 0)
            continue;
        cout << i << endl;
    }
    // Print even numbers using continue

    for (int j = 1; j <= 100; j++)
    {
        if (j % 2 != 0)
            continue;
        cout << j << endl;
    }
}