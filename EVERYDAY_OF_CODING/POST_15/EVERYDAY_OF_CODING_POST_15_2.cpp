/// LONGEST INCREASING SUBSEQUENCE - O(Nlog(N)) - USING SEGMENT TREE
/// YOU CAN SUBMIT THE CODE IN 340D - CODEFORCES OR FIND THE SUBMISSION
/// MY CODEFORCES ACCOUNT - phuscpp
#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll mod=1e9+7;
const ll inf=1e17;
const ll N=5e5+3;
ll st[N<<2],n,a[N],dp[N];
vector <ll> cmress={-3};
void up(ll id,ll l,ll r,ll idx,ll v) {
    if (idx < l || idx > r) return ;
    if (l==r) {
        st[id]=v;
        return ;
    }
    ll mid=(l+r)>>1;
    up(id<<1,l,mid,idx,v);
    up(id<<1|1,mid+1,r,idx,v);
    st[id]=max(st[id<<1],st[id<<1|1]);;
}
ll get(ll id,ll l,ll r,ll u,ll v) {
    if (v < l || u > r) return -inf;
    if (u <= l && v >= r) return st[id];
    ll mid=(l+r)>>1;
    return max(get(id<<1,l,mid,u,v),get(id<<1|1,mid+1,r,u,v));
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (ll i=1;i<=n;i++) {
        cin>>a[i];
        cmress.push_back(a[i]);
    }
    sort(cmress.begin(),cmress.end());
    cmress.resize(unique(cmress.begin(),cmress.end())-cmress.begin());
    for (ll i=1;i<=n;i++) {
        a[i]=lower_bound(cmress.begin(),cmress.end(),a[i])-cmress.begin();
    }
    dp[1]=1;
    dp[0]=0;
    up(1,1,n,0,dp[0]);
    up(1,1,n,a[1],dp[1]);
    for (ll i=2;i<=n;i++) {
        dp[i]=get(1,1,n,1,a[i]-1)+1;
        if (a[i]==1) dp[i]=1;
        up(1,1,n,a[i],dp[i]);
    }
    cout<<get(1,1,n,1,n);
    return 0;
}
