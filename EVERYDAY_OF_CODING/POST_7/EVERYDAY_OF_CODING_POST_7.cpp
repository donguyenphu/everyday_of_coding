#include <bits/stdc++.h>
using namespace std;
signed main()
{
    set <int> s1;
    s1.insert(3);
    s1.insert(2);
    s1.insert(3); /// ignore duplicate value
    s1.insert(5);
    /// 2 3 5

    /// The way elements are stored depends entirely on the hash function and bucket arrangement.
    /// => does not guarantee any relationship with insertion order
    unordered_set <int> s;
    s.insert(3);
    s.insert(9);
    s.insert(3); /// ignore duplicate value
    s.insert(5);
    s.insert(7);
    s.insert(8);
    /**
    8
    7
    5
    3
    9
    */
    unordered_map <int,int> mp;
    ///  Key Value
    mp.insert({3,5});
    mp.insert({8,4});
    mp.insert({3,4}); /// ignore duplicate key
    mp.insert({6,4});
    mp.insert({7,2});
    mp.insert({5,3});
    mp.insert({5,4}); /// ignore duplicate key
    /**
    5 3
    7 2
    6 4
    3 5
    8 4
    */

    map <int,int> mp1;
    mp1.insert({4,6});
    mp1.insert({3,4});
    mp1.insert({3,2}); /// ignore duplicate key
    mp1.insert({5,5});
    /**
    3 4
    4 6
    5 5
    */

    multiset <int> ms;
    ms.insert(4);
    ms.insert(3);
    ms.insert(5);
    ms.insert(3);
    ms.insert(7);
    /// 3 3 4 5 7

    multimap <int,int> mtp;
    mtp.insert({4,3});
    mtp.insert({3,2});
    mtp.insert({3,5});
    mtp.insert({3,4});
    mtp.insert({5,2});
    /**
    3 2
    3 5
    3 4
    4 3
    5 2
    */

    unordered_multiset <int> ums;
    ums.insert(3);
    ums.insert(2);
    ums.insert(5);
    ums.insert(4);
    ums.insert(6);
    ums.insert(5);
    /** 6
        4
        5
        5
        3
        2 */

    unordered_multimap <int,int> umtp;
    umtp.insert({5,2});
    umtp.insert({2,6});
    umtp.insert({1,4});
    umtp.insert({2,4});
    umtp.insert({3,6});
    /** 3 6
        1 4
        5 2
        2 4
        2 6 */
}
