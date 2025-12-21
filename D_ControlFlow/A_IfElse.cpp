#include <iostream>
using namespace std;
int main()
{
    // Wheather the number is even or odd
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num % 2 == 0)
        cout << "The number is even ." << endl;
    else
    {
        cout << "The number is odd" << endl;
    }
}