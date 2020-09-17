#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int t,n;
    cin>>t;
    while(t--)
    {
        bool ok = true;
        cin>>n;

        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i =1 ;i<n;i++)
        {
            ok &= (arr[i] - arr[i - 1] <= 1);

        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
