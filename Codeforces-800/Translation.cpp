#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    string reverse_string = "";
    for(int i = s.length()- 1;i >= 0;i--)
        reverse_string += s[i];
    if(reverse_string.compare(t) == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
