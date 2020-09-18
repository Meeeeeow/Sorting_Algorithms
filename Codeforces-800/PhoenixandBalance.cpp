#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0;
        cin>>n;
        for(int i = n/2;i<n;i++)
            b+=pow(2,i);//1<<i same as 2^i
        a+=pow(2,n);
        if(n != 2)
            for(int i =1 ;i<n/2;i++)
                a+=pow(2,i);
        cout<<a - b<<endl;
    }
    return 0;
}
