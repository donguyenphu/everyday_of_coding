#include <bits/stdc++.h>
using namespace std;
int nth_fibonacci_number (int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return nth_fibonacci_number(n - 1) + nth_fibonacci_number(n - 2);
    /// ABOVE IS THE FORMAT OF A NTH-FIBONACCI
    /// F(N) = F(N - 1) + F(N - 2) WITH F(N) IS THE VALUE OF THE NTH-FIBONACCI
     /**
        HOWEVER, EACH TIME THE RECURSION RUN, THE RECURSION RECALCULATES THE
        FUNCTION -> THE TIME COMPLEXITY IS EXPONENTIAL -> THE PROGRAM ONLY
        SUCCESSFULLY PRINT OUT THE NTH - FIBONACCI ONLY WHEN N IS LOWER OR EQUAL
        TO 50
    */
}
int nth_fibonacci[100000002];
void calculate_fibonacci_numbers() {
    nth_fibonacci[0] = 0;
    nth_fibonacci[1] = 1;
    for (int i = 2; i <= 100000000; i++) {
        nth_fibonacci[i] = nth_fibonacci[i - 1] + nth_fibonacci[i - 2];
    }
    /**
    WE SEE, EACH TIME WE RECALCULATE THE RECURSION, IT TAKES A LOT OF TIME TO DO
    -> INSTEAD OF RECALCULATING, WE STORE IT IN AN ARRAY, REDUCING THE TIME COMPLEXITY
    THE PROGRAM CAN SUCCESSFULLY PRINT OUT THE NTH - FIBONACCI WHEN N CAN BE UP TO 10^8 TO 2*10^8
    */
}
signed main()
{
    int input_value;
    cin>>input_value; /// the value we type in
    calculate_fibonacci_numbers();
    cout<< nth_fibonacci[input_value];
    return 0;
}
