/* Topological Sort on Directed Graph using DFS */

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void dfs(vector<int> adj[], int src, bool visited[], stack<int> &s)
{
    visited[src] = true;

    for (int v : adj[src])
    {
        if (!visited[v])
        {
            dfs(adj, v, visited, s);
        }
    }
    s.push(src);
}

/**
 * @brief Topological Sort using dfs in Directed Graph
 * 
 * @param adj 
 * @param v 
 */
void topological_sort_dfs(vector<int> adj[], int v)
{
    stack<int> s;
    bool visited[v];

    fill(visited, visited + v, false);

    for (int u = 0; u < v; u++)
    {

        if (!visited[u])
            dfs(adj, u, visited, s);
    }

    while (!s.empty())
    {
        int x = s.top();
        s.pop();

        cout << x << " ";
    }
}

int main()
{
    vector<int> adj[5];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);

    topological_sort_dfs(adj, 5);

    return 0;
}