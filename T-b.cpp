#include <bits/stdc++.h>
using namespace std;
int main()
{
    int long long i,j ,a,b,n,c=0;
    cin>>n;
    for( i=1; i<=n; i++)
    {
        cin>>a;
        for( j=1; j<=a; j++)
        {
            if(a%j==0)
            {
                c++;
            }
         //   cout<<(a%j)<<j<<endl;

        }
        if(c==n)

        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
          c=0;

    }



    return 0;
}
