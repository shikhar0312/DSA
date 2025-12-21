#include <iostream>
using namespace std;
int main()
{
    // Wheather the number is diviible by 5 ?
    int n;
    cout << "Enter the number";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "The number is divisible by 5" << endl;
    }
    else
    {
        cout << "The number is not divisible by 5" << endl;
    }
}