#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Stack
{
public:
    vector<int> vec;

    void Push(int a)
    {
        vec.push_back(a);
    }
    void Pop()
    {
        vec.pop_back();
    }
    int Top()
    {
        return vec[(vec.size()) - 1];
    }
    int Size()
    {
        return vec.size();
    }
};

int main()
{

    Stack st;
    st.Push(10);
    st.Push(20);
    st.Push(30);

    st.Pop();

    while (st.Size() > 0)
    {
        cout << st.Top() << endl;
        st.Pop();
    }
}