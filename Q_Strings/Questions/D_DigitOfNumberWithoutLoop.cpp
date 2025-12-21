#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Returning the digit of number without loop

    int num;
    cout << "Enter the number";
    cin >> num;

    string s = to_string(num);

    cout << "The length of string is " << s.length() << endl;
}