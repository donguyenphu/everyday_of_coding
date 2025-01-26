#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int var = 5;
    switch(var) {
        case 4:
            cout<<4<<endl;
            break;
        case 5:
            cout<<5<<endl;
        case 6:
            cout<<6<<endl;
        case 7:
            cout<<7<<endl;
            break;
        default:
            cout<<"default"<<endl;
            break;
    }
    /// AFTER EXECUTING THE CODE OF "CASE 5", THE PROGRAM WILL RUN TO THE END OF "CASE 7", WHERE THERE IS A BREAK
    return 0;
}
