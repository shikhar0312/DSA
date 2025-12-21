#include <iostream>
#include <string>
using namespace std;

int main()
{
    // s.substr(index,length)

    // index of where you wanna start
    // By defualt length till end

    string s = "abcdefgh";

    cout << s.substr(0, 4) << endl; // abcd
}