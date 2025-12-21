#include <iostream>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    // Rotating by 2 element

    vector<int> v = {1, 6, 2, 3, 7, 4, 8};

    display(v);

    reversePart(0, 4, v);
    reversePart(5, 6, v);

    display(v);

    reversePart(0, 6, v);
    display(v);
}

// leet
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();
        // 0 to n-k-1 and n-k to n

        if (k > n)
            k = k % n;

        int i = 0;
        int j = n - k - 1;

        while (i <= j)
        {
            int temp = nums.at(i);
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }

        int a = n - k;
        int b = n - 1;

        while (a <= b)
        {
            int temp = nums.at(a);
            nums.at(a) = nums.at(b);
            nums[b] = temp;
            a++;
            b--;
        }

        int c = 0;
        int d = n - 1;

        while (c <= d)
        {
            int temp = nums.at(c);
            nums[c] = nums[d];
            nums[d] = temp;
            c++;
            d--;
        }

        return;
    }
};