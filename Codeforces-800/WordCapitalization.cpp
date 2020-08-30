#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    string s;
    getline(cin,s);
    if(isupper(s[0]))
        cout<<s<<endl;
    else
        {
            putchar(toupper(s[0]));
            cout<<s.substr(1,s.length());
        }


    return 0;
}
