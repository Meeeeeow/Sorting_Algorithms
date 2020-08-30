#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    if(n > m)
        swap(n,m);
    m = (m - n) / 2;
    cout<<n<< " "<<m<<endl;

    return 0;
}

