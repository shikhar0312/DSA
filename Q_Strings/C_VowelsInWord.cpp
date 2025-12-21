#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Inputing a string of length n

    int n;
    cout << "Enter n";
    cin >> n;
    char str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    cout << "The number of vowels in the given string is " << count << endl;
}