#include <iostream>
using namespace std;
int main()
{
    int a = 65;
    char f = (char)a;
    cout << f << endl;
    char b = 'A';
    cout << (int)b << endl;
    char s = 55;
    int c = b; // here it is automatically typecasting the c into b
    cout << c << endl;
    if (b == f)
        cout << "Both are same" << endl;
    else
        cout << "Both are different" << endl;
    cout << s << endl;
    cout << s + a; // if we try to add string to a number it adds the to integer to the  ASCII value of the string
}