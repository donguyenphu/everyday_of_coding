/// PROBLEM: COIN CHANGE
/// SUBMITTED ON LEETCODE
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=amount;
        int dp[n+1];
        for (int i=0;i<=n;i++) dp[i]=INT_MAX;
        /// ASSUMING THAT EACH "AMOUNT" FROM 1 TO N DOESN'T HAVE ANY WAY
        dp[0]=0;
        for (int i=1;i<=n;i++) {
            for (int j=0;j<coins.size();j++) {
                if (coins[j] <= i && dp[i-coins[j]] != INT_MAX) {
                    /// IF THE DESIRED AMOUNT - THE AMOUNT OF GIVEN VALUE CAN BE MADE
                    /// --> WE MINIMIZE THE AMOUNT OF VALUE TO BUILD THE DESIRED AMOUNT
                    /// THE INT_MAX INITALIZING ALL AMOUNT IS CREATED FOR EASIER MINIMIZING
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);

                }
            }
        }
        if (dp[amount]==INT_MAX) return -1; /// THE AMOUNT CAN'T BE BUILD
        return dp[amount]; /// THE AMOUNT CAN BE BUILT
    }
};
