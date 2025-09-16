#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
/// storing edges
vector<int> adj[N];
/// check for visited and check for in the cycle path
vector<bool> visited(N, false), inStack(N, false);

bool dfs(int node)
{
    visited[node] = true;
    inStack[node] = true;

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            if (dfs(neighbor)) return true;
        }
        else if (visited[neighbor])
        {
            if (inStack[neighbor])
            {
                return true; /// back edge found -> cycle
            }
        }
    }

    inStack[node] = false; /// remove from recursion stack
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
        /// directed edge
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        /// In the case of an disconnected graph
        if (!visited[i])
        {
            if (dfs(i))
            {
                cout << "Graph contains cycle\n";
                return 0;
            }
        }
    }

    cout << "No cycle found\n";
}
