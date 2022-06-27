
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    auto c=a%1000;
    if(c!=0) {
            auto p=1000-c;
    cout<<p<<endl;
    }
    else
        cout<<c<<endl;
    return 0;
}
