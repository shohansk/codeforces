#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    if(b>a){
        c=(b-a)+1;
    }
    if(a>b) c=0;
    cout<<c<<endl;

    return 0;
}
