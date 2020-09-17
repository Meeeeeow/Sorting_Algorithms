#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,sum = 0,counter = 0 ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > 0)
            sum +=arr[i];
        else if(sum > 0)
            sum--;
        else
            counter++;

    }
     cout<<counter<<endl;
    return 0;
}
