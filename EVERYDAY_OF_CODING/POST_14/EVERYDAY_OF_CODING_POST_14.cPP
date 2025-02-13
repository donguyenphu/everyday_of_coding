/// SECOND - OPTIMIZED APPROACH
class Solution {
public:
    #define ll long long
    #define pb push_back
    const int N=1e4+5;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> vec; /// STORING INDEX
        pair <ll,ll> a[N];
        ll left=0;
        ll right=nums.size()-1;
        for (ll i=0;i<nums.size();i++) {
            a[i].first=nums[i];
            a[i].second=i;
        }
        sort (a,a+nums.size());
        while (left<=right) {
            if (a[left].first+a[right].first==target) {
                vec.pb(a[left].second);
                vec.pb(a[right].second);
                break;
            }
            else if (a[left].first+a[right].first>target) {
                right--;
            }
            else {
                left++;
            }
        }
        return vec;
    }
};
/// FIRST APPROACH: ITERATING NESTED LOOP
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> vec;
        for (int i=0;i<nums.size()-1;i++) {
            for (int j=i+1;j<nums.size();j++) {
                if (nums[i]+nums[j]==target) {
                    vec.push_back(i);
                    vec.push_back(j);
                    break;
                }
            }
        }
        return vec;
    }
};
