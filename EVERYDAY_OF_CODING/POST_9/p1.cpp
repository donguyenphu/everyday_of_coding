#include <bits/stdc++.h>
using namespace std;
signed main()
{
    /// THE FRONT OF THE DEQUE STARTS FROM THE LEFT
    deque <int> dq;
    dq.push_front(3);
    /// empty -> 3
    dq.push_front(4);
    /// 3 -> 4 3
    dq.push_front(2);
    /// 4 3 -> 2 4 3
    dq.push_back(7);
    /// 2 4 3 -> 2 4 3 7
    dq.push_back(10);
    /// 2 4 3 7 -> 2 4 3 7 10
    dq.pop_front();
    /// 2 4 3 7 10 -> 4 3 7 10
    dq.pop_back();
    /// 4 3 7 10 -> 4 3 7
    dq.pop_back();
    /// 4 3 7 -> 4 3


    deque <int> dq2;
    dq2.push_front(3);
    /// empty -> 3
    dq2.push_back(4);
    /// 3 -> 3 4
    dq2.push_back(2);
    /// 3 4 -> 3 4 2
    cout<<dq2.back(); /// 2
    return 0;
}


