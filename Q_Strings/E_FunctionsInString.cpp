#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Shikhar Singh is at College";

    // length()

    cout << str.size() << endl; // or.length()

    // push_back()

    string s = "sabs";
    cout << s << endl;

    s.push_back('e');
    cout << s << endl;

    // pop_back()

    s.pop_back();

    // + operator -> It is use to add string to the end of the string but we cann't add numbers

    string ss = "abc";
    string sa = "def";

    ss = ss + sa;
    cout << ss << endl;

    // reverse()

    string sas = "abcdef";
    reverse(sas.begin(), sas.end());

    // reverse(s.begin()+m,s.end()-n)

    // m - > Index from where you wanna start

    // n -> Index + 1 where wanna end

    reverse(sas.begin() + 2, sas.end() + 5);

    cout << sas << endl;
}
