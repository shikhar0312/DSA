#include <iostream>
#include <string>
using namespace std;
int main()
{
    // String as a datatype

    string str = "Shikhar Singh";
    cout << str[1] << endl;

    // There is by default null character at the end of string

    string s;
    cout << "Enter";
    // cin >> s;
    getline(cin, s);
    cout << s << endl;

    // But we cann't hold 2 words in a string for cin so we use getline instead of cin

    string ss;
    ss = "Shikhar Singh";
    cout << ss << endl;
}
