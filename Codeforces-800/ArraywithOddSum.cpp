#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd=0,even=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        if((odd==n &&n%2==0)|| odd == 0)
                cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
