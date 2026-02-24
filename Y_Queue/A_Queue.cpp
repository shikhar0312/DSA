#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(10);
    q.push(15);
    q.push(20);
    q.push(30);

    // Rear 30 , 20 ,15 , 10 Front

    // cout << q.front();
    // cout << endl;
    // q.pop();
    // cout << q.front();
    // cout << q.back();
    // cout << q.empty();

    int n = q.size();

    for (int i = 0; i < n; i++)
    {
        cout << q.front() << endl;
        int a = q.front();
        q.pop();
        q.push(a);
    }
    cout << endl;

    while (q.size() > 0)
    {
        cout << q.front() << endl;
        q.pop();
    }
}