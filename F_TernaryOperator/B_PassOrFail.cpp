#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks of student : ";
    cin >> marks;
    marks > 33 ? cout << "The student is pass ." : cout << "The student is fail .";
}