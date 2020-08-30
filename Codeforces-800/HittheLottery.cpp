#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,a,b,c,d,e;
    cin>>n;
    a = n / 100;
    n %= 100;
    b = n /20;
     n %= 20;
    c = n / 10;
     n %= 10;
    d = n / 5;
     n %= 5;
    e = n / 1;
    cout<<a+b+c+d+e;
    return 0;
}
