#include <iostream>
using namespace std;
int main()
{
    int long long a,b,c,x,y,p=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++)
    {
        x=a*i;

     p=p+x;

    }
    x=p-b;
    if(x>0){
        cout<<x<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}
