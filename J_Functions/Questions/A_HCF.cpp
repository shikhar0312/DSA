#include <iostream>
using namespace std;

// HCF(x,y)<= min(x,y)

int hcf(int a, int b)
{
    int hf = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            // Common factor
            hf = i;
            break;
        }
    }
    return hf;
}

int main()
{
    cout << "Find HCF of 2 numbers:" << endl;
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;

    int hct = hcf(a, b);
    cout << "HCF of numbers are " << hct << endl;
}