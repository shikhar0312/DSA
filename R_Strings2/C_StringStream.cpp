#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string s = "My name is 'Bond' 'James Bond'";

    cout << s << endl;

    stringstream ss(s);
}
