#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,counter = 0;
    cin>>n;
    int guest[n];
    int host[n];
    for(int i =0;i<n;i++)
        cin>>host[i]>>guest[i];
    for(int i = 0;i<n;i++)
            for(int  j = 0;j<n;j++)
                if(i != j && host[i] == guest[j])
                counter++;
    cout<<counter<<endl;


    return 0;
}
