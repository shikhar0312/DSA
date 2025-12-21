#include <iostream>
using namespace std;
int main()
{
    int i, a = 65;
    for (i = 1; i <= 26; i++)
    {
        cout << (char)a << " = " << a << " ";
        a++;
    }
}