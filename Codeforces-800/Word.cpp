#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    string s;
    int u  = 0, l = 0;
    getline(cin,s);
    for(int i =0 ;i<s.length();i++)
            if(isupper(s[i]))
                u++;
            else
                l++;
    for(int  i =0;i < s.length();i++)
        if(u > l)
            putchar(toupper(s[i]));
        else
            putchar(tolower(s[i]));
    return 0;
}
