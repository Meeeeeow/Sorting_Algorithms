#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,x = 0;
    cin>>n;
    string cmd;
    for(int i = 0 ;i<n;i++)
    {
        cin>>cmd;
        if( cmd[0] == '+' || cmd[1] == '+')
            x++;
        else
            x--;
    }
    cout<<x;
    return 0;
}
