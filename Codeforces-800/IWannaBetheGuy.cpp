#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,p,q,counter = 0;
    cin>>n>>p;
    int arr[p];
    int merge[n];
    for(int i =0;i<p;i++)
        {
            cin>>arr[i];
            merge[arr[i]] = 1;
        }
    cin>>q;
    int arr1[q];
    for(int i =0;i<q;i++)
        {
            cin>>arr1[i];
            merge[arr1[i]] = 1;
        }

    for(int i = 1;i<=n;i++)
        if(merge[i] == 1)
            counter++;
    if(counter == n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
