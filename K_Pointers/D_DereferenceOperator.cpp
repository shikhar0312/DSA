// derefenrence Operator (star Operator)

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x;
    cout << p << endl;
    cout << *p << endl;

    // * means value at the given address

    int a = 15;
    cout << &a << endl;
    a = 30;
    cout << &a << endl;

    // Note :- In c++ if we update the value of any variable then at changes the value from the previous storage
}