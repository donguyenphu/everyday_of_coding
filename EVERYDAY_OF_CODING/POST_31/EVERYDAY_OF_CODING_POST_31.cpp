/// PROBLEM: PALINDROME NUMBER
/// SUBMITTED ON LEETCODE
/// STRING APPROACH (TIME COMPLEXITY: O(N) (N: STRING LENGTH))
class Solution
{
public:
    bool isPalindrome(int x)
    {
        string temp = to_string(x);
        reverse(temp.begin(),temp.end());
        return temp == to_string(x);
    }
};
/// DIGIT APPROACH (TIME COMPLEXITY: O(log10(N)) (N: THE INPUT NUMBER))
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x <0)  return false;
        int first=x;
        long result=0;
        while (x != 0)
        {
            int digit = x %10;
            result = result*10+digit;
            x /= 10;
        }
        return result == first;
    }
};
