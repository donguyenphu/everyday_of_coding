/// 2 NESTED LOOPS APPROACH
/// JUMP GAME: LEETCODE
class Solution {
public:

    bool canJump(vector<int>& nums) {
       bool dp[90002];
       int siz=nums.size();
       siz--;
       for (int i=0;i<=siz;i++) dp[i]=false;
       dp[0]=true;
       for (int i=1;i<=nums[0]*1LL;i++) dp[i]=true;
       for (int i=1;i<=siz;i++) {
            if (dp[i]) {
                for (int j=1;j<=nums[i]*1LL;j++) {
                    dp[i+j]=true;
                }
            }
            else return false;
       }
       return dp[siz];
    }
};
