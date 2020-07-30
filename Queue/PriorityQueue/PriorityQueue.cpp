#include <bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int> *pq)
{

    priority_queue<int> g = *pq;
    while (!g.empty())
    {
        cout << "\t" << g.top();
        g.pop();
    }
    cout << "\n";
}

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(1);
    pq.push(12);

    cout << "Queue: ";
    showpq(&pq);

    cout << "Size: " << pq.size() << "\n";
    cout << "Top: " << pq.top() << "\n";

    cout << "Pop Operation: \n";
    pq.pop();

    showpq(&pq);

    return 0;
}