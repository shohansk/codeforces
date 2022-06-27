
#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int a=0,b=0;
    string s;
    string s1="hello";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s1[a])
        {
            a++;

        }
    }
    if(a==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
