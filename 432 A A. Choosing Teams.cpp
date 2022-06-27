#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int>g1;
    int n,k,ans,num;
    int ans0;
    cin>>n>>k;
    int c =0;

    ans0 = 5-k;

    for(int i=0; i<n; i++)
    {
        cin>>num;
        g1.push_back(num);
        if(g1[i]<=ans0)
        {
            c++;
        }
    }
    ans = c/3;

    cout<<ans<<"\n";
}
