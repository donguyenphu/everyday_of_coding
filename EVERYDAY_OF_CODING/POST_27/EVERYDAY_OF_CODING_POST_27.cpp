#include <bits/stdc++.h>
using namespace std;
signed main()
{
    pair<int, string> a = {1,"a"};
    cout<< a.first<<' '<<a.second<<endl;
    ///       1             "a"

    pair<int, int> b = {5,5};
    cout<<b.first<<' '<<b.second<<endl;
    ///      5              5

    pair<string,string> c =  {"1" ,"r"};
    cout<<c.first<<' '<<c.second<<endl;
    ///     "1"            "r"

    /// THE LEFT ONE IS THE VALUE TYPE OF THE FIRST
    /// THE RIGHT ONE IS THE VALUE TYPE OF THE SECOND

    pair<int, string> a1 = make_pair(1,"a");
    cout<< a.first<<' '<<a.second<<endl;
    ///       1             "a"

    pair<int, int> b1 = make_pair(5,5);
    cout<<b.first<<' '<<b.second<<endl;
    ///      5              5

    pair<string,string> c1 = make_pair("1" ,"r");
    cout<<c.first<<' '<<c.second<<endl;
    ///     "1"            "r"

    pair<int, string> a2(1,"a");
    cout<< a.first<<' '<<a.second<<endl;
    ///       1             "a"

    pair<int, int> b2(5,5);
    cout<<b.first<<' '<<b.second<<endl;
    ///      5              5

    pair<string,string> c2("1" ,"r");
    cout<<c.first<<' '<<c.second<<endl;
    ///     "1"            "r"

    pair<pair<int,int>, string> pi = {{2,3}, "a"};
    pair<pair<int,int>, pair<int,int>> pp = {{2,3},{7,8}};

    vector <pair<int,int>> pint;
    pint.push_back({2,6});
    pint.push_back({3,4});
    /**
    2 6
    3 4
    */
}
