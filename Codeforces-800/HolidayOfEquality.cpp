#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,total = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i =0;i<n-1;i++)
    {
        total += arr[n -1] - arr[i];
    }
    cout<<total<<endl;
    return 0;
}
