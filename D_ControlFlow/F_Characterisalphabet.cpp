#include <iostream>
using namespace std;
int main()
{
    // &&(and) have greater heirarchy than ||(or)

    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    int asci = (int)ch;
    if ((asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122))
    {
        cout << "The character is alphabet ." << endl;
    }
    else
    {
        cout << "The chacter is not alphabet ." << endl;
    }
}