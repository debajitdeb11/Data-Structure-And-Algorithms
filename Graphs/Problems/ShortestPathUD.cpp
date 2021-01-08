// Shortest Path in Unweighted Graph
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

/**
 * @brief Print the No. of path available from the source to vertices. 
 * This approach uses BFS traversal
 * 
 * @param adj 
 * @param v 
 * @param s 
 */
void shortest_path(vector<int> adj[], int v, int s)
{

    int distance[v];
    fill(distance, distance + v, INT16_MAX);

    distance[s] = 0;

    bool visited[v];
    fill(visited, visited + v, false);

    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                distance[v] = distance[u] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
    }

    for (int i = 0; i < v; i++)
        cout << distance[i] << " ";

    cout << "\n";
}

int main()
{

    vector<int> adj[4];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);

    shortest_path(adj, 4, 0);

    return 0;
}