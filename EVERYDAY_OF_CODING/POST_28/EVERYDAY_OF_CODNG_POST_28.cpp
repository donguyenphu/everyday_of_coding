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

    get<0>(tp) = 10 /// {10,2,5,"2"}
    get<3>(tp) = "3" /// {10,2,5,"3"}
    /// MODIFY TUPLE ELEMENT
}
