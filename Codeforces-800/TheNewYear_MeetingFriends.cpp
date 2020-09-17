#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int arr[3];
    for(int  i=0;i<3;i++)
        cin>>arr[i];
    sort(arr,arr+3);
    cout<<abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);

    return 0;
}
