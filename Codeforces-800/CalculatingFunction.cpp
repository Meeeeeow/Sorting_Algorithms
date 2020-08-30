#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    long long n;
    cin>>n;
    if(n%2)
            cout<<-(n+1)/2<<endl;
    else
        cout<<n/2<<endl;
    return 0;
}
