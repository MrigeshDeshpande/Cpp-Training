#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
    {

        // If the queue is empty, return.
        return;
    }

    // Store the front element in a variable.
    int element = q.front();
    q.pop();

    // Recursively call for the rest of the queue.
    reverse(q);

    // Push back the stored element.
    q.push(element);
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