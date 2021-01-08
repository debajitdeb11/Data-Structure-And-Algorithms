// Graph Adjacency List Representation

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Adding Edge to the Graph
 * 
 * @param adj 
 * @param u 
 * @param v 
 */
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

/**
 * @brief Print Graph
 * 
 * @param adj 
 * @param v 
 */
void printGraph(vector<int> adj[], int v)
{
	for (int i = 0; i < v; i++)
	{
		for (int x : adj[i])
		{
			cout << x << " ";
		}
		cout << "\n";
	}
}

/**
 * @brief BFS Traversal, Time Complexity of BFS: O (V+E)
 * 
 * @param adj 
 * @param v 
 * @param s 
 */
void bfs(vector<int> adj[], int v, int s)
{

	bool visited[v + 1];
	fill(visited, visited + v + 1, false);

	queue<int> q;
	visited[s] = true;
	q.push(s);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (int v : adj[u])
		{
			if (!visited[v])
			{
				visited[v] = true;
				q.push(v);
			}
		}
	}
}

void bfs(vector<int> adj[], int s, bool visited[])
{
	queue<int> q;
	visited[s] = true;
	q.push(s);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";

		for (int v : adj[u])
		{
			if (!visited[v])
			{
				visited[v] = true;
				q.push(v);
			}
		}
	}
}

/**
 * @brief BFS Traversal, Time Complexity of BFS: O (V+E)
 * 
 * @param adj 
 * @param v 
 */
void bfs(vector<int> adj[], int v)
{
	// Use to count the no of connected Components
	int count = 0;
	// --------------------------------------------

	bool visited[v + 1];
	fill(visited, visited + v + 1, false);

	for (int i = 0; i < v; i++)
	{
		if (!visited[i])
		{
			bfs(adj, i, visited);
			count++;
		}
	}

	/******** Printing No. of Connected Components *********/
	cout << "\nNo of Connected Components: " << count << "\n";
}

// DFS recursive
void dfs_rec(vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";

	for (int u : adj[s])
	{
		if (visited[u] == false)
		{
			dfs_rec(adj, u, visited);
		}
	}
}

/**
 * @brief DFS of a Continious Graph, Time Complexity: O(V + E)
 * 
 * @param adj 
 * @param v 
 * @param s 
 */
void dfs(vector<int> adj[], int v, int s)
{

	bool visited[v];
	fill(visited, visited + v, false);

	// Calling  DFS Recursive
	dfs_rec(adj, s, visited);
}

/**
 * @brief DSF for continious or discontinious graph, Time Complexity: O(V + E)
 * 
 * @param adj 
 * @param v 
 */
void dfs(vector<int> adj[], int v)
{
	bool visited[v];
	fill(visited, visited + v, false);

	for (int i = 0; i < v; i++)
	{
		if (!visited[i])
		{
			// Calling  DFS Recursive
			dfs_rec(adj, i, visited);
		}
	}
}

int main()
{

	// No of vertices
	int v = 4;

	vector<int> adj[4];

	addEdge(adj, 0, 1);
	addEdge(adj, 1, 3);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);

	// printGraph(adj, 4);

	// bfs(adj, 4, 0);

	// bfs(adj, 4);

	dfs(adj, 4);

	return 0;
}