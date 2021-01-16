/* Topological Sorting in Graph (Kahn's Algorithm) */

#include <bits/stdc++.h>
using namespace std;

// void bfs(vector<int> adj[], int s, bool visited[])
// {
//     visited[s] = true;

//     queue<int> q;
//     q.push(s);

//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();

//         cout << u << " ";

//         for (int v : adj[u])
//         {
//             if (!visited[v])
//             {
//                 visited[v] = true;
//                 q.push(v);
//             }
//         }
//     }
// }

// void bfs(vector<int> adj[], int v)
// {

//     bool visited[v];
//     fill(visited, visited + v, false);

//     for (int i = 0; i < v; i++)
//     {
//         if (!visited[i])
//         {
//             bfs(adj, i, visited);
//         }
//     }
// }

void topological_sort(vector<int> adj[], int v)
{
    vector<int> in_degree(v, 0);

    for (int u = 0; u < v; u++)
    {
        for (int x : adj[u])
        {
            // Increment the in-degree
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

        cout << u << " ";

        for (int x : adj[u])
        {
            if (--in_degree[x] == 0)
            {
                q.push(x);
            }
        }
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main()
{

    vector<int> adj[3];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    // addEdge(adj, 0, 1);

    vector<int> adj1[5];
    addEdge(adj1, 0, 2);
    addEdge(adj1, 0, 3);
    addEdge(adj1, 1, 3);
    addEdge(adj1, 1, 4);

    topological_sort(adj, 3);

    cout << "\n-------------------\n";

    topological_sort(adj1, 5);

    return 0;
}