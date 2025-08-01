#include <bits/stdc++.h>

using namespace std;
adjacency_matrix[n][n];
signed main()
{
    /// in a matrix n vertices
    /// pseudocode
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            /// if you want to connect i->j
            adjacency_matrix[i][j] = 1;
            /// or else
            adjacency_matrix[i][j] = 0;
            /// the edge(i,j) is undirected -> i->j and j->i both appears
            /// the edge(i,j) is directed -> i->j or j->i appears
        }
    }

    vector <int> adjacency_list[n]; /// <- n is number of vertices
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            /// if you want to connect i->j
            adj[i].push_back(j);
            /// or else, leave it
        }
    }
    vector<pair<int,int>> adjacency_list[n]; /// if you want a weighted graph
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            /// if you want to connect i->j
            adj[i].push_back({j, your_desired_weight);
            /// or else, leave it
        }
    }

    return 0;
}
