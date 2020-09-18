#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,k,counter = 0;
    cin>>n>>k;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    for(int i = 0;i<n;i++)
    {
        arr[i] +=k;
        if(arr[i]<=5)
            counter++;
    }
    cout<<counter / 3<<endl;


    return 0;
}
