#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,a,b;
    cin>>n;
    while(n > 0)
    {
        cin>>a>>b;
        if(a % b == 0)
            cout<< 0<<endl;
        else
            cout<<b - a % b<<endl;
        n--;
    }
    return 0;
}

