#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n ,a,b,c,d,e,f,counter = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a;
        counter = 0;
           b = a / 10000;
           a -= b*10000;
           c = a / 1000 ;
           a -= c*1000;
           d = a /100;
           a -= d * 100;
           e = a /10;
           a -= e*10;
           f = a;

        if(b != 0)
           counter++;
        if(c != 0)
           counter++;
        if(d != 0)
            counter++;
        if(e != 0)
            counter++;
        if(f != 0)
            counter++;
        cout<<counter<<endl;
        if(b != 0)
           cout<<b * 10000<<" ";
        if(c != 0)
           cout<<c * 1000<<" ";
        if(d != 0)
            cout<<d * 100<<" ";
        if(e != 0)
            cout<<e * 10<<" ";
        if(f != 0)
            cout<<f<<" ";
        cout<<endl;
    }
    return 0;
}
