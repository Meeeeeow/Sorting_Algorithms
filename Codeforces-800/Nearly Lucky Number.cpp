#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    long long int n,counter = 0,a ;
    cin>>n;
    while(n > 0)
    {
        a = n % 10;
        if(a == 7 || a == 4)
            counter++;
        n /= 10;
    }
    if (counter == 7 || counter == 4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
