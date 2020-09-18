#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a < b)
            swap(a,b);
        if(a >(2*b))
            cout<<a*a<<endl;
        else
            cout<<pow((2*b),2)<<endl;
    }
    return 0;
}
