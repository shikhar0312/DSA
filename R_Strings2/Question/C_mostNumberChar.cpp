#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // We will use special array of size 26 which is basically indeirectly targetting to all alphabets

    // Basically we will use asci value the ascii value will be index + 97

    // ascii = index + 97

    string s = "leetcode";
    vector<int> arr(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii - 97]++;
    }

    int mx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mx < arr[i])
            mx = arr[i];
    }

    for (int i = 0; i < 26; i++)
    {

        int ascii = i + 97;
        char cha = (char)ascii;
        if (mx == arr[i])
        {
            cout << "Max : " << cha << endl;
        }
    }
}
