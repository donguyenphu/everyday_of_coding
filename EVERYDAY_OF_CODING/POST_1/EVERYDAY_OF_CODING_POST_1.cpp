#include <bits/stdc++.h>
using namespace std;
signed main()
{
    vector <int> array_to_find_max = {9,2,5,2,8,3,8,10};

    int max_current_result = array_to_find_max[0]; /// the initial max value of the array: 9

    for (int i=1; i< array_to_find_max.size(); i++) { /// we iterate the array

        if (array_to_find_max[i] > max_current_result) {

            /// if the current element of the array is larger than the current max result

            max_current_result = array_to_find_max[i]; /// we then assign the max result to that element

        }

    }
    /// after a loop through all elements, we can find the largest element
    cout << max_current_result << endl;
    vector <int> array_to_find_min = {9,2,5,2,8,3,8,10};

    int min_current_result = array_to_find_min[0]; /// the initial min value of the array: 9

    for (int i=1; i< array_to_find_min.size(); i++) { /// we iterate the array

        if (array_to_find_min[i] < min_result) {

            /// if the current element of the array is larger than the current max result

            min_result = array_to_find_min[i]; /// we then assign the max result to that element

        }

    }
    /// after a loop through all elements, we can find the largest element
}
