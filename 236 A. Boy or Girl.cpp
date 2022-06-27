#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s;
    int n=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            n++;

        }
    }
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
