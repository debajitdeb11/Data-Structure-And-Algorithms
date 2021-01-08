/* Cycle Detection in Undirected Graphs */

#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool dfs_rec(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;

    for (int x : adj[s])
    {
        if (!visited[x])
        {
            if (dfs_rec(adj, x, visited, s))
            {
                return true;
            }
            else if (x != parent)
            {
                return true;
            }
        }
    }
    return false;
}

/**
 * @brief Cycle detection in Undirected Graph
 * 
 * @param adj 
 * @param v 
 * @return true 
 * @return false 
 */
bool detect_cycle(vector<int> adj[], int v)
{
    bool visited[v];
    fill(visited, visited + v, false);

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            if (dfs_rec(adj, i, visited, -1))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> graph1[4];
    add_edge(graph1, 0, 1);
    add_edge(graph1, 1, 2);
    add_edge(graph1, 1, 3);
    add_edge(graph1, 2, 3);

    cout << "Cycle Detect: " << detect_cycle(graph1, 4) << endl;

    vector<int> graph2[5];
    add_edge(graph2, 0, 1);
    add_edge(graph2, 1, 2);
    add_edge(graph2, 1, 4);
    add_edge(graph2, 2, 3);

    cout << "Cycle Detect: " << detect_cycle(graph1, 5) << endl;

    return 0;
}