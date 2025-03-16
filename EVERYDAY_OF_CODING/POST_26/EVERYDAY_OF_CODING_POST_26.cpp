/// PROBLEM: EDIT DISTANCE
/// TIME COMPLEXITY: O(N * M), WITH N IS THE LENGTH OF WORD1, M IS THE LENGTH OF WORD2
/// SUBMITTTED ON LEETCODE
class Solution {
public:
    int minDistance(string word1, string word2) {
        int dp[502][502];
        int n = word1.size();
        int m = word2.size();
        word1 = " "+word1;
        word2 = " "+word2;
        /// we consider POV of word1
        for (int i = 1; i <= n; i++) {
            dp[i][0] = i;
        }
        for (int i = 1; i <= m; i++) {
            dp[0][i] = i;
        }
        for (int i = 1; i <= n ; i++) {
            for (int j = 1;j <= m ; j++) {
                if (word1[i] == word2[j]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else {
                    dp[i][j] = 1 + min({dp[i-1][j-1], dp[i][j-1],dp[i-1][j]});
                }
            }
        }
        return dp[n][m];
    }
};
