#include <iostream>
using namespace std;
int main()
{
        int n,k,l;
        cin>>n>>l;
        for(int i=0;i<l;i++)
        {
             k= n%10;
        if(k==0)
        {
            n/=10;
        }
        else
            n-=1;

        }
        cout<<n<<endl;

}
