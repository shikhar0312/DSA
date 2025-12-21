#include <iostream>
using namespace std;
int main()
{
    // Logical and (&&) and or (||)

    // Tell wheather the number is 3 digit or not

    int n;
    cout << "Enter the number";
    cin >> n;
    if (n >= 100 && n <= 999)
    {
        cout << "The number is 3 digit number" << endl;
    }
    else
    {
        cout << "The number is not 3 digit number" << endl;
    }
}