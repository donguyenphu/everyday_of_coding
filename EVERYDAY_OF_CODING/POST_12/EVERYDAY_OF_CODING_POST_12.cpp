#include <bits/stdc++.h>
using namespace std;
signed main()
{
    /// create a min heap
    /// priority_queue <data_type, vector<data_type>, greater<data_type>> set_name
    priority_queue <int, vector<int>, greater<int>> min_heap;
    /// create a max heap
    /// priority_queue <data_type> set_name
    priority_queue <int> max_heap;

    priority_queue <int> pq;
    /// max heap
    pq.push(4); /// empty -> 4
    pq.push(5); /// 4 -> 5 4
    pq.push(2); /// 5 4 -> 5 4 2
    pq.pop(); /// 5 4 2 -> 4 2
    pq.pop(); /// 4 2 -> 4
    pq.pop(); /// 4 -> empty
    cout<<pq.empty(); /// true -> 1

    priority_queue <int, vector <int>, greater<int>> pq;
    /// min heap
    pq.push(4); /// empty -> 4
    pq.push(5); /// 4 -> 4 5
    pq.push(2); /// 4 5 -> 2 4 5
    pq.pop(); /// 2 4 5 -> 4 5
    pq.pop(); /// 4 5 -> 5
    pq.push(3); /// 5 -> 3 5
    cout<< pq.size(); /// 3 5 -> 2
    pq.push(4); /// 3 5 -> 3 4 5
    cout<<pq.empty(); /// 3 4 5 -> no empty -> false -> 0

    return 0;
}
