#include <bits/stdc++.h>
using namespace std;
int parent[200005];
int sum[200005];
int number[200005];
int size[200005];
int rank[200005];
void initialize(int u) {
    parent[u] = u;
    /// the set only contains 1 element: u -> the set's parent(ancestor) = u
    sum[u] = u;
    /// the set only contains 1 element: u -> the set's sum = u
    number[u] = 1; /// number is the size
    /// the set only contains 1 element: u
    rank[u] = 1; /// the "length" of the set
}
/// naive version
int find_parent(int u) {
    if (u == parent[u]) return u;
    return find_parent(parent[u]);
}
void merge_sets(int u, int v) {
    u = find_parent(u);
    v = find_parent(v);
    if (u != v) {
        parent[v] = u;
    }
}
/// in the case of the set is a long chain -> time complexity can be O(n)
/// optimize version
int find_parent_optimize(int u) {
    /// path compression (attach directly to the root)
    /// speeding up the find function
    if (u == parent[u]) return u;
    return parent[u] = find_parent_optimize(parent[u]);
}
/// union by size -> reduce to O(log(n)) in worst case!
void union_sets_by_size(int a, int b) {
    a = find_parent_optimize(a);
    b = find_parent_optimize(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
/// union by size -> reduce to O(log(n)) in worst case!
void union_sets_by_rank(int a, int b) {
    a = find_parent_optimize(a);
    b = find_parent_optimize(b);
    if (a != b) {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}
signed main()
{

}
