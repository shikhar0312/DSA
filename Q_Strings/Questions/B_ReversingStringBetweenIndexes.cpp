#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string";
    getline(cin, s);
    cout << s << endl;

    // Reversing the string from n to m

    int n, m;
    cout << "Enter n and m : ";
    cin >> n >> m;

    reverse(s.begin() + n, s.begin() + (m + 1));

    cout << s << endl;
}
