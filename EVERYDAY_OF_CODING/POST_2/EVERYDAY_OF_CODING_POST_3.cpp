#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int init = 5;
    if (init > 0) {
        cout<<0<<endl; /// this will be executed
    }
    if (init > 1) {
        cout<<1<<endl; /// this will be executed
    }
    if (init > 6) {
        cout<<6<<endl; /// this will not be executed
    }
    if (init > 2) {
        cout<<2<<endl; /// this will be executed
    }

    int init2 = 5;
    if (init2 > 0) {
        cout<<0<<endl; /// this will be executed
    }
    if (init2 > 2) {
        cout<<2<<endl; /// this will be executed
    }
    else if (init2 > 4) {
        cout<<4<<endl; /// this will not be executed
    }

    int init3 = 5;
    if (init3 > 0) {
        cout<<0<<endl; /// this will be executed
    }
    if (init3 > 7) {
        cout<<7<<endl; /// this will not be executed
    }
    else if (init3 > 4) {
        cout<<4<<endl; /// this will be executed
    }

    int init4 = 5;
    if (init4 > 6) {
        cout<<6<<endl;
    }
    if (init4 > 2) {
        cout<<2<<endl;
        /// this will be executed -> else block will not be executed
    }
    else {
        cout<<5<<endl; /// this will be executed
    }
}
