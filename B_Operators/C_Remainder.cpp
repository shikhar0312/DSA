#include <iostream>
using namespace std;
int main()
{
    // Method 1

    int dividend, divisor, quotient, remainder;
    cout << "Enter the dividend : ";
    cin >> dividend;
    cout << "Enter the divisor : ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend - (divisor * quotient);
    cout << "The remainder is " << remainder << endl;

    // Method 2

    int remainder2 = dividend % divisor;
    cout << "The remainder is " << remainder2 << endl;
}
