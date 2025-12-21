#include <iostream>
using namespace std;
int main()
{
    // Calculate absolute value
    int n;
    cout << "Enter the number";
    cin >> n;
    if (n > 0)
    {
        cout << "The absoluate value of " << n << " is " << n << endl;
    }
    else
    {
        cout << "The absoluate value of " << n << " is " << -(n) << endl;
    }
}