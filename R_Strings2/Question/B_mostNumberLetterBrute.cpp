#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Finding number with most frequnecy

    // First finding max number

    string s = "shikhar";
    int n = s.length();
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[j] == s[i])
                count++;
        }
        if (max < count)
            max = count;
    }
    cout << max << endl;

    // Now finding the letter

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        char ch = s[i];
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[j] == s[i])
                count++;
        }
        if (max == count)
            cout << ch << " : " << max << endl;
    }
}