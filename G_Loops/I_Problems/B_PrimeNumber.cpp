#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1 || n == 0)
    {
        cout << "0 and 1 is niether prime nor composite" << endl;
    }
    else if (flag == false)
    {
        cout << "The number is composite number" << endl;
    }
    else
    {
        cout << "The number is Prime number" << endl;
    }
}