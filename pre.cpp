#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > v;

    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
     for(int i=0;i<5;i++)
    {
        v[i+1]=v[i+1]+v[i];
        cout<<v[i]<<" ";
    }

    return 0;
}
