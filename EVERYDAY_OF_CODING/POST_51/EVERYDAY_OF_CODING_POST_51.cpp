#include <bits/stdc++.h>
using namespace std;
int outdegree[u]; /// number of edges coming out vertex u
int indegree[u]; /// number of edges coming in vertex u
int degree[u]; /// the degree of vertex u
signed main()
{
    /// if the edge u->v is directed
    outdegree[u]++;
    indegree[v]++;
    degree[u] = outdegree[u] + indegree[u];
    degree[v] = outdegree[v] + indegree[v];
    /// if the edge u-v is undirected, we consider as u<->v
    outdegree[u]++;
    indegree[u]++;
    outdegree[v]++;
    indegree[v]++;
    degree[u]++; /// we very rarely consider as outdegree[u] + indegree[u]
    degree[v]++; /// we very rarely consider as outdegree[v] + indegree[v]
    return 0;
}
