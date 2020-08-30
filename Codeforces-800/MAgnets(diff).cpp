#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,group = 0;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    for(int i = 0;i < n ;i++)
        if(arr[i] != arr[i + 1])
            group++;
    cout<<group<<endl;
    return 0;
}

