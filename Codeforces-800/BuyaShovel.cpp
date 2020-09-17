#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int k,r,x = 1;
    cin>>k>>r;
    while(true)
    {
        if(k * x % 10 == r || k * x % 10 == 0)
        {
            cout<<x<<endl;
            break;
        }
        x++;
    }
    return 0;
}
