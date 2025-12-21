#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num % 3 == 0 || num % 5 == 0)
    {
        if (num % 15 == 0)
        {
            cout << "The number is divisible by 3 or 5 but also divisible by 15 ." << endl;
        }
        else
        {
            cout << "The number is divisible by 3 or 5 but not divisible by 15 ." << endl;
        }
    }
}