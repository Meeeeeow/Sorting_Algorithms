#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int max=-1;
        for(int i=2;i<=9;i++)
        {
            if(max<(n/i))
            {
                max=n/i;
            }

        }
        cout<<max<<endl;
    }
    return 0;
}
