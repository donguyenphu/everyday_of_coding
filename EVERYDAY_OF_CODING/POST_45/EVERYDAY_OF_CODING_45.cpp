#include <bits/stdc++.h>
using namespace std;
/// __lg(x) = floor(log2(x))
/// the number is the power of two if ITS RESULT WITH FLOOR EQUAL TO ITS RESULT WITHOUT FLOOR
/// -> the number is the power of two if the difference of the power of 2 kinds of results equal to 0
/**
    8 == pow(2, __lg(8)) == pow(2, 3)
    9 != pow (2, __lg(9)) == pow(2, 3)
*/
bool checkPowerOfTwoUsingLG(int input) {
    int getLog2 = __lg(input);
    return input == pow(2, getLog2);
}
/// the number, which is the power of two, has the form: 10....
/// for example: 8 -> 1000
///              16 -> 10000
///              32 -> 100000
/// -> 1000 & 0111 = 0 -> input & (input - 1) = 0
bool checkPowerOfTwoUsingAND(int input) {
    return (input > 1 && !(input & (input - 1)));
    /// except case: 1
}
/// because x ^ x = 0 and x ^ 0 = x
/// -> Swapping without temp using XOR
void swapTEMP(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<' '<<b<<endl;
}
void swapXOR(int &a, int &b) {
    a = a^b;
    b = a^b; /// b = (a ^ b) ^ b = a
    a = a^b; /// a = (a ^ b) ^ a = b
    cout<<a<<' '<<b<<endl;
}
/// for example: 10001010 -> 3
///              10010 -> 2
void countSetBitsInt(int input) { /// for int
    cout<<__builtin_popcount(input);
}
void countSetBitsLongLong(long long input) { /// for long long
    cout<<__builtin_popcountll(input);
}
/// depend on number type, it generates different answer
/// for instance, for 32-bit unsigned int:
/// 00000000 00000000 00000000 00000100 -> 29
/// 10000000 00000000 00000000 00000000 -> 0
void countLeadingZeros (unsigned int input) {
    cout<<__builtin_clz(input);
}
/// count number of zeros at the end of the input
/// for instance: 1001000 -> 3
///               10010010 -> 1
void countTrailingZeros (int input) {
    cout<<__builtin_ctz(input);
}
/// return true if count of 1 is odd
/// for instance: 1001000 -> false
///               10010010 -> true
bool trueIfOddSetBitsInt(int input) { /// for int number
    return __builtin_parity(input);
    /// or: __builtin_popcount(input) % 2
    /// or: __builtin_popcount(input) & 1
}
bool trueIfOddSetBitsLongLong(long long input) { /// for long long number
    return __builtin_parityll(input);
    /// or: __builtin_popcountll(input) % 2
    /// or: __builtin_popcountll(input) & 1
}
signed main()
{
    int a = 5, b = 3;
    swapXOR(a, b);
    swapTEMP(a, b);

    return 0;
}
