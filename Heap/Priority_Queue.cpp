// Implementation of Priority Queue (Max Heapify)

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(9);
    pq.push(3);
    pq.push(6);
    pq.push(5);
    pq.push(1);
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(1);
    pq.push(0);

    cout << "Size = " << pq.size() << "\n";

    while (!pq.empty())
    {
        int top = pq.top();
        pq.pop();

        cout << top << "\n";
    }

    cout << "Size = " << pq.size() << "\n";

    cout << "Removal from top " << pq.top() << "\n";
    pq.pop();

    return 0;
}