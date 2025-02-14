/// LONGEST INCREASING SUBSEQUENCE - O(N²) - USING DYNAMIC PROGRAMMING
/// THIS PROBLEM I SUBMITTED DIRECTLY IN LEETCODE
class Solution {
public:
    #pragma GCC optimize("O3")
    #define ll long long
    #define n nums.size()
    #define a nums
    int lengthOfLIS(vector<int>& nums) {
        cin.tie()->sync_with_stdio(0);
        ll dp[n];
        for (ll i=0;i<n;i++) {
            dp[i]=1;
            for (ll j=0;j<i;j++) {
                if (a[j]<a[i]) {
                    if (dp[j]+1>dp[i]) dp[i]=dp[j]+1;
                }
            }
        }
        for (ll i=0;i<n;i++) cout<<dp[i]<<" ";
        cout<<endl;
        ll maxn=0;
        for (ll i=0;i<n;i++) {
            maxn=max(maxn,dp[i]);
        }
        return maxn;
    }
};
