/// PROBLEM: UNIQUE PATHS
/// SUBMITTED ON LEETCODE
/// DYNAMIC PROGRAMMING APPROACH (TIME COMPLEXTY: O(M*N))
class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[102][102];
        /// WE INITIALIZE THE ARRAY TO ALL 0
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = 0;
            }
        }
        dp[1][1] = 1; /// THE ONLY WAY TO REACH THE START POINT: DO NOTHING
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = dp[i][j] + dp[i-1][j]; /// GO DOWN
                dp[i][j] = dp[i][j] + dp[i][j-1]; /// GO RIGHT
            }
        }
        return dp[m][n];
    }
};
