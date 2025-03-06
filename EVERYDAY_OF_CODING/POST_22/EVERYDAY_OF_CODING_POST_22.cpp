/// PROBLEM: COIN CHANGE II
/// SUBMITTED ON LEETCODE
class Solution {
public:
    #define am amount
    #define ll unsigned long long
    int change(int amount, vector<int>& coins) {
        ll n=coins.size();
        ll a[n+2];
        /// I CONVERT TO 1 - BASED INDEX FOR MORE CONVENIENT IN CODING
        for (ll i=1;i<=n;i++) {
            a[i]=coins[i-1];
        }
        ll dp[n+1][am+1];
        for (ll i=1;i<=n;i++) {
            dp[i][0]=1; /// ONLY ONE WAY TO CHOOSE NO ITEMS WHEN WE GO TO EACH INDEX
        }
        for (ll j=1;j<=am;j++) {
            dp[0][j]=0; /// CAN NOT CHOOSE ANYTHING IF WE HAVEN'T CONSIDERED THE INDEX YET
        }
        for (ll i=1;i<=n;i++) {
            for (ll j=1;j<=am;j++) {
                /// J >= A[I] --> WE HAVE THE PREVIOUS CASE TO CONSIDER --> CHOOSE + SKIP = TOTAL NUMBER OF WAY
                if (a[i] <= j) {
                    dp[i][j]=dp[i][j-a[i]]+dp[i-1][j];
                }
                /// OTHERWISE, WE SKIP THE CASE BY ASSIGNING EQUAL TO THE STATE OF THE LAST INDEX
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][am];
    }
};
