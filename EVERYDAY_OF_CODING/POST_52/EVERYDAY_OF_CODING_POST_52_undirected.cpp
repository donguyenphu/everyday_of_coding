#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
vector<bool> visited(N, false);

bool dfs(int node, int parent)
{
    visited[node] = true;
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            if (dfs(neighbor, node)) return true;
        }
        else if (visited[neighbor])
        {
            if (neighbor != parent)
            {
                return true; /// found cycle
            }
        }
    }
    return false; /// no cycle detected
}

int main()
{
    int n, m;
    /// n: number of nodes, m: number of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        /// undirected edge
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        /// In the case of an disconnected graph
        if (!visited[i])
        {
            if (dfs(i, -1))
            {
                cout << "Graph contains cycle\n";
                return 0;
            }
        }
    }
    cout << "No cycle found\n";
}
