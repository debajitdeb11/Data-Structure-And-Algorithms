/* Detect Cycle using Kahn's Algorithm */

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

/**
 * @brief Detect Cycle in Directed Graph using Topological Sorting (Kahn's Algorithm)
 * 
 * @param adj 
 * @param v 
 * @return true 
 * @return false 
 */
bool detect_cycle(vector<int> adj[], int v)
{

    int count = 0;

    // Count incoming degree
    vector<int> in_degree(v, 0);

    for (int u = 0; u < v; u++)
    {
        for (int x : adj[u])
        {
            in_degree[x]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < v; i++)
    {
        if (in_degree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int x : adj[u])
        {
            if (--in_degree[x] == 0)
            {
                q.push(x);
            }
        }
        count++;
    }

    return (count != v);
}

int main()
{

    vector<int> adj[4];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);

    vector<int> adj1[3];
    addEdge(adj1, 0, 1);
    addEdge(adj1, 0, 2);

    (detect_cycle(adj, 4)) ? cout << "Cycle Detected!\n" : cout << "No Cycle Detected\n";
    (detect_cycle(adj1, 3)) ? cout << "Cycle Detected!\n" : cout << "No Cycle Detected\n";

    return 0;
}