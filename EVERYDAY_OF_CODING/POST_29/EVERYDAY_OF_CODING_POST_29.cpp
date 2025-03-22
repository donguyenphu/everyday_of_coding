#include <bits/stdc++.h>
using namespace std;
signed main()
{
    tuple <int,int,int,string> tp = {1,2,5,"2"};
    tuple <int,string,string> tp2 = {2,"a","c"};
    tuple <char,string> tp3 = {'a', "d"};
    /// the value type and value are listed sequently from left to right

    cout<<get<0>(tp3)<<' '<<get<1>(tp3); /// 'a' "d"

    cout<<get<0>(tp2)<<' '<<get<2>(tp2); /// 2   "c"

    cout<<tuple_size<decltype(tp)>::value;
    /// 4
    /// GET THE NUMBER OF VALUE TYPE IN A TUPLE ELEMENT

    get<0>(tp) = 10; /// {10,2,5,"2"}
    get<3>(tp) = "3"; /// {10,2,5,"3"}
    /// MODIFY TUPLE ELEMENT

//    cout<<tuple_size<tp>::value<<endl; /// 4
    /// tuple <int,int,int,string> tp = {1,2,5,"2"};
    /// ANOTHER WAY TO COUNT THE NUMBER OF VALUE IN A TUPLE

    auto new_tuple = make_tuple(12,2,6,"a");
    /// THIS IS A NEW TUPLE

    tuple <string,int> tp4 = {"c",2};
    tuple <string,int> tp5 = {"d",0};
    tp5.swap(tp4);
    /**
    tp4: {"d",0}
    tp5: {"c",2}
    */

    tuple <string,tuple<int,int,int>> = {"a", {1,4,6}};
    tuple <tuple<int,string>, tuple<string,string>> = {{2,"e"}, {"a","v"}};
}
