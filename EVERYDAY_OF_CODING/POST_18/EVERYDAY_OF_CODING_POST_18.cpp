#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long n;
long long sumPositive = 0;
long long countNegative = 0;
long long maxNegative = -2e9;
/// INPUTS ARRAY AND SIZE OF THE ARRAY INPUT
long long prefix_sum[200005],min_array[200005];
signed main()
{
    /// OPTIMIZED APPROACH

    min_array[0] = 1e17;
    cin>>n;
    for (long long i = 1;i <= n;i++) {
        cin>>a[i];
        sumPositive += a[i];
        maxNegative = max(maxNegative,a[i]);
        if (a[i] < 0) countNegative++;
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
        min_array[i] = min(min_array[i-1],prefix_sum[i]);
        /// WE HAVE PREFIX_SUM[I] : THE SUM OF THE INPUT ARRAY FROM 1 TO I
    }
    if (countNegative ==  n) {
        cout<<maxNegative;
        exit(0);
    }
    else if (countNegative == 0) {
        cout<<sumPositive;
        exit(0);
    }
    long long maxSum = max(a[1],a[n]);
    /// WE HAVE THE MIN SUM FROM THE START -> THE SUM OF THE WHOLE ARRAY - MIN = MAX
    for (long long i = 1;i <= n ; i++) maxSum = max(maxSum, prefix_sum[i] - min_array[i]);
    for (long long i = 1;i <= n ; i++) prefix_sum[i] = min_array[i] = 0;
    reverse(a + 1, a + n + 1);
    for (long long i = 1;i <= n;i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
        min_array[i] = min(min_array[i-1],prefix_sum[i]);
        /// WE HAVE PREFIX_SUM[I] : THE SUM OF THE INPUT ARRAY FROM 1 TO I
    }
    /// WE HAVE THE MIN SUM FROM THE START -> THE SUM OF THE WHOLE ARRAY - MIN = MAX

    for (long long i = 1;i <= n ; i++) maxSum = max(maxSum, prefix_sum[i] - min_array[i]);
    cout<<maxSum;



    /// NAIVE APPROACH 1
    long long maxSum = -1e18;
    for (int i = 1; i <= n ; i++) {
        cin>>a[i];
    }
    /// 2 NESTED LOOP FOR THE SUBARRAY
    for (int i = 1;i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            int sum = 0;
            /// RECALCULATE THE SUM
            for (int k = j; k <= i; k++) {
                sum+=a[k];
            }
            maxSum = max(maxSum,sum);
        }
    }
    /// NAIVE APPROACH 2
    long long maxSum = -1e18;
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
        prefix_sum[i] = prefix_sum[i-1] + a[i]; /// INIT THE PREFIX SUM
    }
    /// 2 NESTED LOOP FOR THE SUBARRAY
    for (int i = 1;i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            maxSum = max(maxSum,pre[i] - pre[j-1]);
        }
    }
    cout<<maxSum;
    return 0;
}
