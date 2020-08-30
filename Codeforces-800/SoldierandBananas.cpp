#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int k,n,w,total_cost = 0;
    cin>>k>>n>>w;
    for(int i = 1;i<=w;i++)
        total_cost+=i*k;
    if(total_cost <= n)
        cout<<0<<endl;
    else
        cout<<total_cost - n<<endl;

    return 0;
}

