#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    int main()
    {
        Node a(4);

        Node b(3);
        Node c(2);
        Node d(1);

        a.next = &b;
        b.next = &c;
        c.next = &d;
    }
};
