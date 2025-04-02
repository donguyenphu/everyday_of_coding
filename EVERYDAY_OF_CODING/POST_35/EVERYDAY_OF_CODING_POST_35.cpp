/// PROBLEM: UNIQUE PATH II
/// SUBMITTED ON LEETCODE (TIME COMPLEXITY: O(M*N))
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int dp[1003][1003];
        int n = obstacleGrid[0].size();
        int m = obstacleGrid.size();
        for (int i = 0; i <= max(m,n); i++) {
            for (int j = 0; j <= max(m,n); j++) {
                dp[i][j] = 0; /// we initialize the way to all cells equal to 0
            }
        }
        dp[0][0] = obstacleGrid[0][0] == 1 ? 0 : 1;
        /// base case: if the starting point is the obstacle, we don't have anyway to reach the end point
        /// otherwise: the only way to reach the start point is do nothing
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                /// only consider cell with no obstacles
                if (obstacleGrid[i][j] != 1) {
                    if (i-1 >= 0 && obstacleGrid[i-1][j] != 1) {
                        /// remember to check if i-1>=0 other wise when i = 0
                        /// WE WILL HAVE RUNTIME ERROR (VECTOR ONLY HAS INDEX >=0)
                        dp[i][j]+=dp[i-1][j];
                    }
                    if (j-1 >= 0 && obstacleGrid[i][j-1] != 1) {
                        /// remember to check if j-1>=0 other wise when j = 0
                        /// WE WILL HAVE RUNTIME ERROR (VECTOR ONLY HAS INDEX >=0)
                        dp[i][j]+=dp[i][j-1];
                    }
                }
            }
        }
        return dp[m-1][n-1];
    }
};
