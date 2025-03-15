/// PROBLEM: CLIMBING STAIRS
/// SUBMITTED ON LEETCODE
/// APPROACH: DYNAMIC PROGRAMMING (TIME COMPLEXITY: O(N))
class Solution {
public:
    int climbStairs(int n) {
        cin.tie()->sync_with_stdio(0);
        int a[46];
        a[1]=1;
        a[2]=2;
        for (int i=3;i<=45;i++) {
            a[i]=a[i-1]+a[i-2];
/// WE HAVE 2 WAYS: CLIMBING ON 2 PREVIOUS STEPS AND CLIMBING ON 1 PREVIOUS STEP
        }
        return a[n];
    }
};
