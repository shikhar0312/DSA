#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter String";
    getline(cin, s);
    int n = s.length();

    // Taking sub string of second half

    cout << s.substr((n / 2)) << endl;
}