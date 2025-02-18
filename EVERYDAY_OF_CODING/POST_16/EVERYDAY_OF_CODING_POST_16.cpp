/// LONGEST COMMON SUBSEQUENCE (LCS) - BASIC METHOD
/// USING DYNAMIC PROGRAMMING (DP)
/// TOTAL TIME COMPLEXITY O(N²)
/// SUBMITTING IN LEETCODE - LONGEST COMMON SUBSEQUENCE
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[1002][1002];
        int length1 = text1.size();
        int length2 = text2.size();
        text1 = " "+text1;
        text2 = " "+text2;
        for (int i = 1;i <= length1; i++) {
            for (int j = 1;j <=length2;j ++) {
                /// skip the letter in text1 or text 2
                dp[i][j] = max (dp[i-1][j], dp[i][j-1]);
                if (text1[i] == text2[j]) {
                    /// we found a new common letter
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
                }
            }
        }
        return dp[length1][length2];
    }
};
/// REALIZING THAT IF THE LENGTH OF THE STRING IS TOO LARGE (1000000)
///ANOTHER APPROACH: DYNAMIC PROGRAMING - CHANGING PARAMETER
/// TOTAL TIME COMPLEXITY (N*26) WITH 26 IS THE NUMBER OF LETTER FROM a to z
/// SOURCE CODE: VNOI
#include <bits/stdc++.h>

using namespace std;

const int M = 1e6 + 6;
const int N = 5005;

int dp[N][N];

char a[M], b[N];
int nextPos[M][26];
int m, n;

void minimize(int &a, int b) {
    if (a == -1 || a > b) a = b;
}

int main() {
    cin >> a + 1 >> b + 1;
    m = strlen(a + 1); n = strlen(b + 1);
    for (int c = 0; c < 26; ++c)
        for (int i = m - 1; i >= 0; --i)
            nextPos[i][c] = (a[i + 1] - 'A' == c) ? i + 1 : nextPos[i + 1][c];
    int maxLength = min(m, n);
    memset(dp, -1, sizeof dp);
    dp[0][0] = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) if (dp[i][j] >= 0) {
            minimize(dp[i + 1][j], dp[i][j]);
            int new_value = nextPos[dp[i][j]][b[i + 1] - 'A'];
            if (new_value > 0)
                minimize(dp[i + 1][j + 1], new_value);
        }
    }
    int ans = 0;
    for (int j = maxLength; j > 0; --j) {
        for (int i = j; i <= n; ++i)
            if (dp[i][j] >= 0) ans = j;
        if (ans != 0) break;
    }
    cout << ans << endl;
    return 0;
}
