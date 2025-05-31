#include <bits/stdc++.h>
using namespace std;
signed main()
{
    /// Example right shift
    int a = 5;     /// 00000101
    int b = a >> 1; /// 00000010 → 2
    /// Example left shift
    int a = 5;     /// 00000101
    int b = a << 1; /// 00001010 → 10

    /**

    *For 32-bit
    5 = 00000000 00000000 00000000 00000101
    -> ~5 = 11111111 11111111 11111111 11111010

    *For unsigned int (larger maximum value than int)
    ~5 = 4294967290

    *For signed int
    ~5 = -6 (~n = -(n+1)) (read more this in https://en.wikipedia.org/wiki/Two%27s_complement)

    */
    return 0;
}


/**

We just take the integer part of the number after dividing
13 / 2 = 6 (remain 1) -> 1
6 / 2 = 3 (remain 0) -> 01
3 / 2 = 1 (remain 1) -> 101
1 / 2 = 0 (remain 1) -> 1101

-> The string of bit(s) of 13 is 1101

-------------------------
ith bit | 3 | 2 | 1 | 0 |
-------------------------
value   | 1 | 1 | 0 | 1 |
-------------------------

for each ith bit: number += value * (2^i)
-> 1*2^0 + 0*2^1 + 1*2^2 + 1*2^3 = 13

Operator:
--------------------------------------------------------------
Operator	| Symbol | Meaning (to 1)	 | Example           |
--------------------------------------------------------------
AND	        | &	     | Both bits 1	     | 1011 & 1100 = 1000|
--------------------------------------------------------------
OR	        | |	     | Either bit is 1   | 1001 ^ 1000 = 1001|
--------------------------------------------------------------
XOR	        | ^	     | Bits are different| 1001 ^ 1010 = 0011|
--------------------------------------------------------------
NOT*	    | ~	     | Flip bits	     | Explained later   |
--------------------------------------------------------------
Left Shift	| <<	 | Multiply by 2^n	 | Exampled later    |
--------------------------------------------------------------
Right Shift	| >>	 | Divide by 2^n	 | Exampled later    |
--------------------------------------------------------------

**/
