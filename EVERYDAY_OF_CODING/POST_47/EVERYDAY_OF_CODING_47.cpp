#include <bits/stdc++.h>
using namespace std;
signed main()
{
    /// common form of Binary Search
    int l = 1, r = 1e9, ans = -1; /// you can modify l and r as your desire
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid)) {  /// "check" tests whether mid is a valid answer
            ans = mid;
            r = mid - 1; /// you can switch to l = mid + 1 (as you want)
        } else {
            l = mid + 1; /// if you switch to l = mid + 1 above, this will be r = mid - 1
        }
    }
    /// pseudocode
    int value = something; /// your demand (-2000000000 <= value <= 2000000000)
    int array_value = {-23,24,1,5,2,-20};
    int max_result = -2e9 - 3;
    for (int start = 0; start < length_array; start++) {
        if (array_value[start] <= value) {
            max_result = max (max_result, array_value[start]);
        }
    }
    /// -> binary search for optimizing
    int value = something; /// your demand (-2000000000 <= value <= 2000000000)
    int array_value = {-23,-20,1,2,5,24};
    int max_result = -1;
    int left = 0, right = array_length - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; /// avoid integer overflow
        if (array_value[mid] == value) {
            max_result = array_value[mid];
            break;
        }
        else if (mid < value) {
            max_result = array_value[mid];
            left = mid + 1;
        }
        else if (mid > value) {
            right = mid - 1;
        }
    }
    return 0;
}
