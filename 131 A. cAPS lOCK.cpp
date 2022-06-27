#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s ,s2;
    cin>>s;
    s2 = toupper(s[0]);
    for(int i=0;i<s.size();i++)
    {

        s2 += tolower(s[i+1]);
    }

    cout<<s2;
    return 0;
}
