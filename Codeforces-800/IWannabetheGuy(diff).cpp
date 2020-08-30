#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,p,q,counter = 0;
    cin>>n>>p;
    int arr[205];
    for(int i = 0;i<p;i++)
            cin>>arr[i];

    cin>>q;
    for(int i = p;i<p+q;i++)
            cin>>arr[i];
    sort(arr,arr+ (p + q));
    for(int i = 0;i<(p + q);i++)
            if (arr[i] != arr[i+1])
                counter++;
    if(counter == n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;


}

