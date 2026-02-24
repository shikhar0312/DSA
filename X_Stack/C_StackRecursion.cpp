#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &st)
{

    if (st.size() == 0)
        return;

    cout << st.top() << endl;

    int a = st.top();
    st.pop();
    print(st);
    // st.push(a);
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    print(st);

    cout << st.size() << endl;

    // print(st);
}