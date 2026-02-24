#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> sta;

    st.push(1);
    st.push(2);
    st.push(3);

    // Make BOS = 0

    while (st.size() > 0)
    {
        sta.push(st.top());
        st.pop();
    }

    while (sta.size() > 0)
    {
        if (st.size() == 0)
            st.push(0);
        st.push(sta.top());
        sta.pop();
    }

    while (st.size() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }
}