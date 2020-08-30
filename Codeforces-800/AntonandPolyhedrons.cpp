#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,sum = 0;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        string s;
        cin>>s;
       if(s[0] == 'T')
        sum += 4;
       if(s[0] == 'C')
        sum += 6;
       if(s[0] == 'D')
        sum += 12;
       if(s[0] == 'O')
        sum += 8;
       if(s[0] == 'I')
        sum += 20;
    }
    cout<<sum<<endl;

    return 0;
}

