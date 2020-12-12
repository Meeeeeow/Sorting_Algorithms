#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int max_ele =max(a,b);
        int tot = (max(max_ele,c)-a)+(max(max_ele,c)-b)+(max(max_ele,c)-c);
        if((n-tot)%3==0 && n>=tot)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
