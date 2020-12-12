#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int x,y,n,t;
    cin>>t;
   while(t--)
   {
        cin>>x>>y>>n;
        if((((n/x)*x)+ y)>n)
            cout<<(((n/x)-1)*x)+y<<endl;
        else
            cout<<((n/x)*x)+y<<endl;
   }
    return 0;
}
