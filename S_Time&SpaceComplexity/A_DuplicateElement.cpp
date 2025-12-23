#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[7] = {1, 2, 3, 4, 5, 5, 6};

    /*
    // First Method{Brute Force}

    bool flag = false;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "The array contain a duplicate element : " << a[i] << endl;
            break;
        }
    }


    // Method 2(Time optimised but not space optimised)

    vector<int> v(7, 0);

    int b;
    for (int i = 0; i < 7; i++)
    {
        b = a[i];
        if (v[i] == 0)
            v[b] = 1;
        else
        {
            cout << "The array contain an duplicate element : " << b << endl;
            break;
        }
    }
        */

    // Method 3(Time and Space Optimised)

    int s = 0;
    int sum = (6 * (6 + 1)) / 2;
    for (int i = 0; i <= 6; i++)
        s = s + a[i];
    if (s != sum)
    {
        cout << "The array contain a duplicate element : " << s - sum << endl;
    }
}
