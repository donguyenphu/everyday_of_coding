/// PROBLEM: N-TH TRIBONACCI NUMBER
/// SUBMMITTED IN LEETCODE
/// TIME COMPLEXITY: O(N)
class Solution {
public:
    int tribonacci(int n) {
        /// WE INITIALIZE THE VALUE AS GIVEN
        int dp[45];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for (int i=3;i<=n;i++) {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
            /// THE FORMULA IS NEARLY THE SAME AS THE ONE IN FIBONACCI PROBLEM
        }
        return dp[n];
    }
};
