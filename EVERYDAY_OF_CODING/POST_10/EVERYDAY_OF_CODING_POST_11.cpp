#include <bits/stdc++.h>
using namespace std;
signed main()
{
    /// THE FRONT OF THE DEQUE STARTS FROM THE LEFT
    deque <int> dq;
    dq.push_front(1);
    /// empty -> 1
    dq.push_front(2);
    /// 1 -> 2 1
    dq.push_back(4);
    /// 2 1 -> 2 1 4
    cout<<dq.size()<<'\n'; /// 3
    /// the index of deque start from 0
    /**
    --------------------
    |index | 0 | 1 | 2 |
    --------------------
    |value | 2 | 1 | 4 |
    --------------------
    */
    dq.insert(dq.begin()+ 1,10);
    /// 2 1 4 -> 2 10 1 4
    return 0;
}

