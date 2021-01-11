/* Cycle detection in Directed Graph */

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

bool dfs_rec(vector<int> adj[], int s, bool visited[], bool recStack[])
{

    visited[s] = true;
    recStack[s] = true;

    for (int u : adj[s])
    {
        if (!visited[u] && dfs_rec(adj, u, visited, recStack))
            return true;

        else if (!recStack[u])
        {
            return false;
        }
    }

    recStack[s] = false;
    return false;
}

bool dfs(vector<int> adj[], int v)
{

    bool visited[v];

    // Recursion Stack
    bool recStack[v];

    fill(visited, visited + v, false);
    fill(recStack, recStack + v, false);

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            if (dfs_rec(adj, i, visited, recStack))
                return true;
        }
    }

    return false;
}

int main()
{

    return 0;
}