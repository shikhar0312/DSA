#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter String";
    getline(cin, s);
    cout << s << endl;

    // Reversing first half

    int n = s.length();

    reverse(s.begin(), s.begin() + ((n / 2)));

    cout << s << endl;
}