#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{

    // Explicitly create a stack.
    stack<int> st;

    // Push all elements of the queue into the stack.
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // Push back all elements from the stack into the queue.
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

void printQueue(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    // inserting elements into the queue using loop
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    cout << "Queue before Reversing: ";
    printQueue(q);

    reverse(q);

    cout << "Queue after Reversing: ";
    printQueue(q);
}