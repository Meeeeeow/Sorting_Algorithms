#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x<y)
            swap(x,y);
        if(x<z)
            swap(x,z);
        if(y<z)
            swap(y,z);
        if(x == y)
            {
                cout<<"YES"<<endl;
                cout<<x<<" "<<z<<" "<<z<<endl;
            }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
