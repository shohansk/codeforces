#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,n,m=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        for(int j=1;j<=a;j++)
        {
            c=__gcd(j,a);
            if(c>m)
            {
                m=c;
            }
            cout<<m<<endl;
        }
        cout<<m<<endl;
    }
    return 0;
}
