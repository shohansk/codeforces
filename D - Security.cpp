#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k=0,m=0,l=0;
    cin>>s;
     m=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1]){
            m++;
        }
    }

    if(m>0){
        cout<<"Bad"<<endl;
    }
    else
        cout<<"Good"<<endl;



}

