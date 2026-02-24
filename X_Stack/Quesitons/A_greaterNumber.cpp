#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Array 2,1,4,1,6,5,8,4

int main()
{

    vector<int> vec = {1, 4, 5, 3, 2, 6};
    int n = vec.size();

    stack<int> st;
    vector<int> ans;

    for (int i = n - 1; i == 0; i--)
    {
        if (st.size() == 0)
        {
            ans.push_back(-1);
            st.push(vec[i]);
        }
        if (vec[i] < st.top())
        {
            ans.push_back(st.top());
            st.push(vec[i]);
        }
        if (vec[i] > st.top())
        {
            while (st.size() == 0)
            {
                st.pop();
            }
        }
    }
}