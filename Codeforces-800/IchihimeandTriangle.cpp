#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(a,b)<<" "<<max(b,c)<<" "<<min(c,d)<<endl;
    }
    return 0;
}
