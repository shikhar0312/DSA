#include <iostream>
using namespace std;
int main()
{
    // && have greater heirarchy than ||
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    int asci = (int)ch;
    if ((asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "The character is vowel ." << endl;
        }
        else
        {
            cout << "The character is consonent ." << endl;
                }
    }
    else
    {
        cout << "The chacter is not alphabet ." << endl;
    }
}