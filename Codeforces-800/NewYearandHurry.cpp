#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,k,counter = 0;
    cin>>n>>k;
    int remaining_time = 240 - k;
    for(int i = 1 ;i <= n;i++)
    {
        remaining_time -= 5*i;
        if(remaining_time >= 0)
            counter ++;
    }
    cout<<counter<<endl;
    return 0;
}
