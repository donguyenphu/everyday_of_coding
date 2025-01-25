#include <bits/stdc++.h>
using namespace std;
signed main()
{
    vector <int> elements = {9,2,5,2,8,3,8,10};

    for (auto elements_iteration : elements) {
        cout << elements_iteration << endl;
        /// iterate the container and print all elements, each element lies on a line
    }
    /// output:
    /**
    9
    2
    5
    2
    8
    3
    8
    10
    */
    int arr[] = {9,2,5,2,8,3,8,10};

    int length = sizeof(arr) / sizeof(arr[0]); /// the length of the array

    for (int index = 0; index < length; index++) {
        cout<<index<<' '<<arr[index]<<endl;
        /// current index of the array        current value of the array
    }

    /// output:
    /**
    0 9
    1 2
    2 5
    3 2
    4 8
    5 3
    6 8
    7 10
    */

    vector <int> vector_index = {9,2,5,2,8,3,8,10};
    int length_vector = vector_index.size();
    for (int index = 0; index< length_vector; index++) {
        cout<<index<<' '<<arr[index]<<endl;
        /// current index of the array        current value of the array
    }

    /// output:
    /**
    0 9
    1 2
    2 5
    3 2
    4 8
    5 3
    6 8
    7 10
    */

    /// WE ATTEMPT TO PRINT "SUCCESS" UNTIL THE VALUE IS LARGER THAN 5
    int init_value = 6;
    do {
        cout<<"Success"<<endl;
        init_value++; /// we increase the element by 1
    }while (init_value <= 5);

    /// output: SUCCESS
    /**
        ALTHOUGH 6 IS LARGER THAN 5, THE "SUCCESS" LINE CAN BE PRINT ONE TIME BECAUSE OF THE
        DO-WHILE LOOP PROCESSES THE CODE AND THEN CONSIDERS THE CONDITION
    */

    /// WE ATTEMPT TO PRINT "SUCCESS" UNTIL THE VALUE IS LARGER THAN 5
    int init_value_while_loop = 6;
    while (init_value_while_loop <= 5) {
        cout<<"Success"<<endl;
        init_value_while_loop++;
    }
    /// this code does not have any output
    /// BECAUSE THE WHILE LOOP CONSIDERS THE CONDITION AND THEN PROCESSES THE CODE
    /// 6 IS LARGER 5 ALREADY, SO WE DO NOT HAVE A CHANCE TO PRINT ANY "SUCCESS"

}
