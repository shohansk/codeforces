#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
                {
                    s[j]='G';
                    s[j+1]='B';
                    j++;
                }
        }

    }
    cout<<s<<endl;

    return 0;
}
