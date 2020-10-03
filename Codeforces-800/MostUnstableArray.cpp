#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n == 1)
            cout<<0<<endl;
        if(n == 2)
            cout<<m<<endl;
        if(n > 2)
            cout<<m*2<<endl;
    }
    return 0;
}
