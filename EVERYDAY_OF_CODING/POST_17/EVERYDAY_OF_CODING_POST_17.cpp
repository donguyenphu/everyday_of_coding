/// LONGEST PALINDROMIC SUBSEQUENCE - USING DYNAMIC PROGRAMMING 2D
/// SUBMITTING IN LEETCODE
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int dp[1002][1002];
        int length = s.size();
        s = " " + s;
        for (int i = 1; i<= length; i++) dp[i][i] = 1;
        for (int i = 2;i <= length; i++) {
            for (int j = i -1 ;j >= 1;j --) {
                dp[j][i] = max(dp[j+1][i], dp[j][i-1]); /// SKIP THE LETTER
                if (s[i] == s[j]) {
                    if (j + 1 == i) {
                        /// IF J IS ADJACENT TO I, THE LONGEST PALINDROMIC SUBSEQUENCE IS JUST 2
                        dp[j][i] = 2;
                    }
                    else {
                        /// WE CONSIDER THE INNER STRING FROM J + 1 TO I - 1 AND PLUS 2 (I AND J)
                        dp[j][i] = max(dp[j][i], dp[j + 1][i-1] + 2);
                    }
                }
            }
        }
        /// THE FINAL RESULT OF THE PROCESS IS THE LENGTH OF THE STRING [1,N]
        return dp[1][length];
    }
};
