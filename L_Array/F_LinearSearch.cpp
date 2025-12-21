#include <iostream>
using namespace std;
int main()

{
    // Linear Seach

    int arr[5] = {1, 2, 33, 4, 5};
    int target = 2;
    bool present = false;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
            present = true;
    }

    if (present == true)
        cout << "The elemets is present in array" << endl;
    else
        cout << "The element is not present in array" << endl;
}
