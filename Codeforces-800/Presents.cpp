#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i = 1;i<=n;i++)
        cin>>arr[i-1];
    for(int  i = 1;i <= n;i++)
    {
        if(i == arr[i - 1])
                arr1[i-1] = i;
        else
                arr1[arr[i - 1] - 1] = i;
    }
    for(int i = 0;i < n;i++)
        cout<<arr1[i]<<" ";
    return 0;
}
