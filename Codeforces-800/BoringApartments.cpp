#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int sum =0;
        cin>>s;
        if(s.size()<4)
        {
            sum +=((s[0]-'0')-1)*10;
            for(int i=1;i<=s.size();i++)
                sum+=i;
            cout<<sum<<endl;
        }
        else
            cout<<((s[0]-'0')*10)<<endl;
    }
    return 0;
}
