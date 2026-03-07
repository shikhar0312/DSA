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
};

void Print(Node *a)
{
    if (a == NULL)
        return;

    Print(a->next);
    cout << a->val << endl;
}

void print(Node *a)
{

    Node *temp = a;
    while (temp)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void Size(Node *a)
{

    Node *temp = a;
    int n = 0;
    while (temp)
    {
        n++;

        temp = temp->next;
    }
    cout << n << endl;
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = a;
    print(a);

    Size(a);
    Print(a);
}
