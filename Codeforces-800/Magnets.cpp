#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,group = 0;
    cin>>n;
    string s,a;
    for(int i = 0;i < n;i++)
    {
        cin>>s;
        if(i == 0)
            a = s;
        else{
            if( a != s)
                {
                    group++;
                    a = s;
                }
        }
    }
    cout<<group + 1<<endl;
    return 0;
}
