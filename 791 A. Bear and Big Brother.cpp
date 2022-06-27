#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,sum=0;
    int i;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        a*=3;
        b*=2;
        sum++;
        if(a>b)
        break;
    }

    cout<<sum<<endl;
    return 0;

}
