#include <bits/stdc++.h>
using namespace std;
signed main()
{
    queue <int> q;
    q.push(1);
    /// empty -> 1
    q.push(4);
    /**
    1 -> 1
         4
    */
    q.push(3);
    /**
    1 -> 1
    4    4
         3
    */
    q.pop();
    /**
    1 -> 4
    4    3
    3
    */
    return 0;
}
