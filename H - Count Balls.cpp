
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int long long n,a,b;
    cin>>n>>a>>b;
    if(a==0)
    {
        cout<<"0"<<endl;
    }

    if(a<b && a!=0)
    {
        cout<<n-b<<endl;
    }
     if(a>b && a!=0)
    {
        cout<<n-b<<endl;
    }
    return 0;
}
