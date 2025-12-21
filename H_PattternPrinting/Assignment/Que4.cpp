#include <iostream>
using namespace std;
int main()
{
    // Alphabet and Number Triangle

    // 1
    // AB
    // 123
    // ABCD

    int n;
    cout << "Enter n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {

                cout << ch;
                ch += 1;
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {

                cout << j;
            }
        }

        cout << endl;
    }
}