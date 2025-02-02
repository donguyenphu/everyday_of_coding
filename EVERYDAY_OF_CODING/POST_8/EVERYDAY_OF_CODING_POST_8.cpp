#include <bits/stdc++.h>
using namespace std;
signed main()
{
    map <int,int> mp;
    mp[4] = 5;
    mp[3] = 4;
    mp[6] = 12;
    cout<<mp[4]<<endl; /// 5

    set <int> s;
    map <int,int> mp2;

    s.insert(2);
    s.insert(5);
    s.insert(2);
    /// 2 5
    mp2.insert({4,3});
    mp2.insert({4,1});
    mp2.insert({3,2});
    /**
        3 2
        4 3
    */
    cout<<s.size()<<' '<<mp2.size()<<endl; /// 2 2
    /// ALL THE ELEMENTS WILL BE ERASED
    s.clear();
    mp2.clear();

    multiset <int> ms;
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);
    ms.insert(4);
    /// 2 2 3 4
    ms.erase(2) /// -> 3 4

    multimap <int,int> mmp;
    mmp.insert({2,2});
    mmp.insert({2,1});
    mmp.insert({3,1});
    mmp.insert({1,1});
    /**
    1 1
    2 1
    2 2
    3 1
    */
    mmp.erase(2);
    /**
    1 1
    3 1
    */

    multiset <int> m2;
    m2.insert(3);
    m2.insert(1);
    m2.insert(1);
    m2.insert(4);
    /// 1 1 3 4

    multimap <int,int> mmp2;
    mmp2.insert({2,2});
    mmp2.insert({2,1});
    mmp2.insert({1,5});

    /**
   key-> 1 5 <- value
         2 1
         2 2
    */

    cout<< mmp2.count(2)<<endl; /// we have (2,1) and (2,2) -> 2 times of key 2
    cout<< m2.count(1)<<endl; /// 1 1 3 4 -> 2 times of value 1



}
