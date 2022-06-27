#include <bits/stdc++.h>
using namespace std;

int cd(int a,int b)
{
    if(a==0) return b;
    else
        cd(b%a,a);
}

int main()
{
   int d = cd(10,15);
   cout<<d<<endl;

    return 0;
}
