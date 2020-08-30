#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int year,a,b,c,d;
    cin>>year;
    while(year++)
    {
        a = year % 10;
        b = year % 100 / 10;
        c = year % 1000 / 100;
        d = year / 1000;
        if(a != b && a != c && a !=d && b != c && b != d && c != d)
        {
            cout<<year<<endl;
            break;
        }
    }
    return 0;
}
