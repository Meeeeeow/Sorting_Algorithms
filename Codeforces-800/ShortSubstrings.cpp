#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    string s;
    while(t)
    {
        cin>>s;
        char s1[(s.length()/2) + 1];
        s1[0] = s[0];
        s1[s.length()/2] = s[s.length() - 1];
        for(int i = 1,j = 1;i<s.length() - 1;i+=2)
        {
            s1[j] = s[i];
            j++;
        }
       for(int i = 0;i<sizeof(s1);i++)
            cout<<s1[i]<<"";
       cout<<endl;
        t--;
        if(t == 0)
           break;
    }
    return 0;
}
