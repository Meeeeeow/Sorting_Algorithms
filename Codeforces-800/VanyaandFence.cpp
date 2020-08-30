#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,h,friends_height,min_width = 0;
    cin>>n>>h;
    for(int i = 1;i <=n ;i++)
    {
        cin>>friends_height;
        if(friends_height > h)
            min_width+=2;
        else
            min_width++;
    }
    cout<<min_width<<endl;
    return 0;
}
