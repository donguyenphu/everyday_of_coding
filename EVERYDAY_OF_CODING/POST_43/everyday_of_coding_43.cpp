#include <bits/stdc++.h>
using namespace std;
///Basic functions
/// check the positionBit is 1
bool isBitSet(int num, int positionBit) {
    return (num>>positionBit)&1;
}
/// set the positionBit to 1
int setBit(int num, int positionBit) {
    return num | (1<<positionBit);
}
/// clear the positionBit (set the positionBit to 0)
int clearBit(int num, int positionBit) {
    return num & ~(1<<positionBit);
}
/// toggle the positionBit (if the positionBit is 0, convert to 1.Otherwise, 0)
int toggleBit(int num, int positionBit) {
    return num ^ (1<<positionBit);
}
/// update the positionBit to specific value (0 or 1)
/// 2 functions with the same output
int updateBitUsingXOR(int num, int positionBit, int desiredValue) {
    return ((num & ~(1<<positionBit)) ^ (desiredValue<<positionBit));
}
int updateBitUsingOR(int num, int positionBit, int desiredValue) {
    return ((num & ~(1<<positionBit)) | (desiredValue<<positionBit));
}
signed main()
{
    return 0;
}
