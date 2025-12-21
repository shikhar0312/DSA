#include <iostream>
#include <string>
using namespace std;
int main()
{

    // Sorting String

    string s = "dcba";
    sort(s.begin(), s.end());

    // It sort the original one , doesn'r make copy

    // But it works on ASCI value so capital letter comes before small

    cout << s << endl; // abcd
}