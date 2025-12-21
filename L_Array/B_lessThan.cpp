#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of subjects";
    cin >> n;

    int marks[6];
    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter the " << i << "st element : ";
        cin >> marks[i];
    }

    for (int i = 0; i <= 5; i++)
    {
        if (marks[i] < 35)
            cout << i << " , ";
    }

    cout << endl;
}
