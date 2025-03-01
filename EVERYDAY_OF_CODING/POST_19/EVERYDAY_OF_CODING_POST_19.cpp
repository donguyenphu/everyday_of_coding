/// PROBLEM: REVERSE INTEGER
/// SUBMITTED IN LEETCODE
/// ACCOUNT: donguyenphu022008
/// --------------------------------------------------------------------------------
/// SECOND APPROACH: USING REMAINDER
class Solution {
public:
    int reverse(int x) {
        long res=0;
        /// THE REVERSE PROCESS
        while (x!=0) {
            long digit=x%10;
            res=res*10+digit;
            x/=10;
        }
        /// CHECK THE LIMIT INTEGER
        if (res > INT_MAX || res < INT_MIN) {
            return 0;
        }
        /// RETURM IN TYPE OF INTEGER
        return (int)res;
    }
};
/// --------------------------------------------------------------------------------
/// FIRST APPROACH: CONVERT TO STRING AND SIMPLY REVERSE THE STRING AND CONVERT BACK
class Solution {
public:
    int reverse(int x) {

            long res=0;
            string reverseString = to_string(x);
            if (x < 0) reverseString = reverseString.substr(1);
            /// IF THE NUMBER IS NEGATIVE (HAVE A "-" FIRST), WE ONLY TAKE THE NUMBER PART
            /// -321 -> 321
            ::reverse(reverseString.begin(),reverseString.end());
            /// REVERSE THE STRING 321 -> 123
            if (x < 0) reverseString = "-" + reverseString;
            /// ADD THE MINUS 123 -> -123
            long long convertBack = stoll(reverseString);
            /// CHECK THE LIMIT OF INTEGER
            if (convertBack < INT_MIN || convertBack > INT_MAX) return 0;
            return (int)convertBack;
    }
};
