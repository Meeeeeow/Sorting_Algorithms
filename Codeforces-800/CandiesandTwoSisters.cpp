#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,a;
    cin>>n;
    for(int i = 0 ;i<n;i++)
    {
        cin>>a;
        if(a % 2)
            cout<<(a / 2)<<endl;
        else
            cout<<(a / 2) - 1<<endl;
    }
    return 0;
}
