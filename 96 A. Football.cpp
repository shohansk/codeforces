
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int a=0,b=0,c=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            a++;
            b=0;
        }
        else
        {
            b++;
            a=0;
        }

        if(a==7|| b ==7)
        {
            c=1;
        }

    }
    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
